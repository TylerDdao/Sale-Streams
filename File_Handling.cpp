#include "File_Handling.h"
#include<bits/stdc++.h>

bool SaveItems(string fileName, Menu menu)
{
	Item* ptr = menu.item;
	ofstream fp;
	fp.open(fileName);
	if (!fp.is_open()) {
		return false;
	}
	while (ptr != nullptr) {
		fp << ptr->GetName() << ":" << ptr->GetId() << ":" << ptr->GetPrice() << endl;
		ptr = ptr->next;

	}
	fp.close();
	return true;
}

bool LoadItems(string fileName, Menu& menu)
{
	ifstream fp;
	fp.open(fileName);
	if (!fp.is_open()) {
		return false;
	}
	string line="\0";
	while (getline(fp, line)) {
		string name = "\0";
		string id = "\0";
		string price = "\0";
		istringstream isLine(line);
		getline(isLine, name, ':');
		getline(isLine, id, ':');
		getline(isLine, price);
		menu.AddItem(name, id, stof(price));
	}
	fp.close();
	return true;
}

bool SaveSales(string fileName, Menu menu)
{
	Sale* ptr = menu.sale;
	ofstream fp;
	fp.open(fileName);
	if (!fp.is_open()) {
		return false;
	}
	while (ptr != nullptr) {
		fp << ptr->GetId() << ";" << ptr->GetTime() << ";"<<ptr->GetTotal()<<";";
		for (size_t i = 0; i < ptr->GetOrders().size();i++) {
			fp << ptr->GetOrders()[i] << ",";
		}

		fp << endl;
		ptr = ptr->next;
	}
	fp.close();
	return true;
}

bool LoadSales(string fileName, Menu& menu)
{
	ifstream fp;
	fp.open(fileName);
	if (!fp.is_open()) {
		return false;
	}
	string line = "\0";
	while (getline(fp, line)) {
		string id = "\0";
		string time = "\0";
		string total = "\0";
		vector<string> orders;
		istringstream isLine(line);
		getline(isLine, id, ';');
		getline(isLine, time, ';');
		getline(isLine, total, ';');
		string data;
		while (getline(isLine, data, ',')) {
			orders.push_back(data);
		}
		menu.LoadSale(orders, time, stoi(id), stof(total));
	}
	fp.close();
	return true;
}

bool SaveConfig(string fileName, Menu menu)
{
	ofstream fp;
	fp.open(fileName);
	if (!fp.is_open()) {
		return false;
	}
		fp << menu.GetTax();
	fp.close();
	return true;
}

bool LoadConfig(string fileName, Menu &menu)
{
	ifstream fp;
	fp.open(fileName);
	if (!fp.is_open()) {
		return false;
	}
	string line = "\0";
	getline(fp, line);
	menu.SetTax(stof(line));
	fp.close();
	return true;
}

bool ExportSummary(string fileName, Menu menu, string date)
{
	float subTotal;
    ofstream fp;
	fp.open(fileName);
	vector<int> ids = menu.SearchSale(date);
	fp <<"Date: "<< month[ExtractMonth(date)] << "/" << ExtractDay(date)<< "/" <<ExtractYear(date) <<endl<<endl;
	for(size_t i =0; i<ids.size();i++){
		Sale* ptr = menu.SearchSale(ids[i]);
		fp << "Sale ID: " << ptr->GetId() <<endl;
		fp << "Orders List: ";
		for(size_t k =0; k<ptr->GetOrders().size();k++){
			fp << menu.GetItemName(ptr->GetOrders()[k]) << ", ";
		}
		fp << endl << "Sub Total: $"<< ptr->GetTotal()<<endl;
		subTotal += ptr->GetTotal();
		fp << "Tax: $"<<  ptr->GetTotal()*(menu.GetTax()/100)<<endl;
		fp << "Total: $"<<  ptr->GetTotal() + (ptr->GetTotal()*(menu.GetTax()/100))<<endl;
		fp << "=========="<<endl;
	}
	fp << "Total Order (Before Tax): $"<<subTotal<<endl;
	fp << "Tax " << menu.GetTax() << "%: $" <<(subTotal*menu.GetTax()/100)<<endl;
	fp << "Total Order (After Tax): $"<<subTotal - (subTotal*menu.GetTax()/100)<<endl;
	fp.close();
	return true;
}

bool Save(Menu menu)
{
	if (SaveItems("Items.txt", menu) == false || SaveSales("Sales.txt", menu) == false || SaveConfig("Config.txt", menu)) {
		return false;
	}
	return true;
}

bool Load(Menu& menu)
{
	if (LoadItems("Items.txt", menu) == false || LoadSales("Sales.txt", menu) == false|| LoadConfig("Config.txt", menu)) {
		return false;
	}
	return true;
}
