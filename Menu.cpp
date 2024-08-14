#include "Menu.h"

Menu::Menu()
{
	sale = nullptr;
	item = nullptr;
}

Menu::~Menu()
{
}

void Menu::AddItem(string name, string id, float price)
{
	Item newItem(name, id, price);

	Item* ptr = new Item(newItem);
	if (ptr == NULL) {
		cerr << "Cannot allocate memory" << endl;
		return;
	}
	ptr->next = item;
	item = ptr;
	return;
}

void Menu::RemoveItem(string id)
{
	Item* ptr = SearchItem(id);
	if (ptr == nullptr) {
		return;
	}
	if (ptr == item) {
		item = ptr->next;
		delete ptr;
		return;
	}
	Item* ptr2 = item;
	while(ptr2->next != ptr){
		ptr2 = ptr2->next;
	}
	if(ptr->next == nullptr){
	ptr2->next = nullptr;
	}
	else{
		ptr2->next = ptr->next;
	}
	delete ptr;
	return;
}

void Menu::EditItem(string id, string newName, string newId, float newPrice)
{
	if (item == nullptr) {
		return;
	}
	Item* ptr = SearchItem(id);
	if (ptr == nullptr) {
		return;
	}
	ptr->SetName(newName);
	ptr->SetId(newId);
	ptr->SetPrice(newPrice);
	return;
}

void Menu::AddSale(vector<string> orders, int id)
{
	float total = 0;
	for (size_t i = 0; i < orders.size(); i++) {
		float price = GetPriceOf(orders[i]);
		total += price;
	}
	Sale newSale(orders, total, id);
	Sale* ptr = new Sale(newSale);
	if (ptr == NULL) {
		return;
	}
	ptr->next = sale;
	sale = ptr;
	return;
}

void Menu::RemoveSale(int id)
{
	if (sale == nullptr) {
		return;
	}
	Sale* ptr = SearchSale(id);
	if (ptr == nullptr) {
		return;
	}
	if (ptr == sale) {
		sale = ptr->next;
		delete ptr;
		return;
	}
	Sale* ptr2 = sale;
	while (ptr2->next != ptr) {
		ptr2 = ptr2->next;
	}
	ptr2->next = ptr->next;
	delete ptr;
	return;
}

void Menu::LoadSale(vector<string> orders, string time, int id, float total)
{

	Sale newSale;
	newSale.LoadSale(orders, total, time, id);
	Sale* ptr = new Sale(newSale);
	if (ptr == NULL) {
		cerr << "Cannot allocate memory" << endl;
		return;
	}
	ptr->next = sale;
	sale = ptr;
	return;
}

float Menu::GetPriceOf(string id)
{
	Item* ptr = SearchItem(id);
	if (ptr == nullptr) {
		return -1;
	}
	float price = ptr->GetPrice();
	return price;
}

Item* Menu::SearchItem(string id)
{
	if (item == nullptr) {
		return nullptr;
	}
	Item* ptr = item;
	while (ptr != NULL) {
		if (ptr->GetId() == id) {
			break;
		}
		ptr = ptr->next;
	}
	return ptr;
}

Sale* Menu::SearchSale(int id)
{
	if (sale == nullptr) {
		return nullptr;
	}
	Sale* ptr = sale;
	while (ptr != NULL) {
		if (ptr->GetId() == id) {
			break;
		}
		ptr = ptr->next;
	}
	return ptr;
}

vector<int> Menu::SearchSale(string date)
{
	vector<int> ids;
	if(sale == nullptr){
		return ids;
	}
	Sale* ptr = sale;
	while(ptr != nullptr){
		if(ExtractDay(ptr->GetTime()) == ExtractDay(date) && ExtractMonth(ptr->GetTime()) == ExtractMonth(date) && ExtractYear(ptr->GetTime()) == ExtractYear(date)){
			ids.push_back(ptr->GetId());
		}
		ptr = ptr->next;
	}
	return ids;
}

bool Menu::ItemIdVerification(string id)
{
	if (item == nullptr) {
		return true;
	}
	Item* ptr = SearchItem(id);
	if (ptr == nullptr) {
		return true;
	}
	else {
		return false;
	}
}

void Menu::ClearSales()
{
	while (sale != nullptr)
	{
		Sale* sPtr = sale;
		sale = sPtr->next;
		delete sPtr;
	}
}

void Menu::ClearItems()
{
	while (item != nullptr)
	{
		Item* iPtr = item;
		item = iPtr->next;
		delete iPtr;
	}
}

void Menu::ClearMemory()
{
	while (item != nullptr)
	{
		Item* iPtr = item;
		item = iPtr->next;
		delete iPtr;
	}
	while (sale != nullptr)
	{
		Sale* sPtr = sale;
		sale = sPtr->next;
		delete sPtr;
	}
}

int Menu::GetNumberOfItem()
{
	if(item == nullptr){
		return 0;
	}
	int count = 1;
	Item* ptr = item;
	while(ptr->next != nullptr){
		count++;
		ptr = ptr->next;
	}
    return count;
}

string Menu::GetItemName(string id)
{
	if(item == nullptr){
		return "\0";
	}
	Item* ptr = item;
	while (ptr!= nullptr){
		if(ptr->GetId() == id){
			break;
		}
		ptr = ptr->next;
	}
	return ptr->GetName();
}

float Menu::GetTotalPrice(vector<string> orderList)
{
	float total = 0;
	Item* ptr;
	for(size_t i=0; i<orderList.size();i++){
		ptr = SearchItem(orderList[i]);
		total += ptr->GetPrice();
	}
    return total;
}

int Menu::GetQuantity(vector<string> ordersList, string id)
{
	int quantity = 0;
	for(size_t i = 0; i<ordersList.size(); i++){
		if(ordersList[i] == id){
			quantity++;
		}
	}
    return quantity;
}

int Menu::GetNumberOfSale()
{
	if(sale == nullptr){
		return 0;
	}
	int count = 1;
	Sale* ptr = sale;
	while(ptr->next != nullptr){
		count++;
		ptr = ptr->next;
	}
    return count;
}

float Menu::GetTotalSale(int day, int month, int year)
{
    float total = 0;
	if(sale == nullptr){
		return 0;
	}
	Sale* ptr = sale;
	while(ptr != nullptr){
		if(ExtractDay(ptr->GetTime()) == day && ExtractMonth(ptr->GetTime()) == month && ExtractYear(ptr->GetTime()) == year){
			total = total + ptr->GetTotal();
		}
		ptr = ptr->next;
	}
	return total;
}

int Menu::GetNumberOfItemSold(string id, int day, int month, int year)
{
    int count = 0;
	if(sale == nullptr){
		return 0;
	}
	Sale* ptr = sale;
	while(ptr != nullptr){
		if(ExtractDay(ptr->GetTime()) == day && ExtractMonth(ptr->GetTime()) == month && ExtractYear(ptr->GetTime()) == year){
		for(size_t i = 0; i<ptr->GetOrders().size(); i++){
			if(ptr->GetOrders()[i] == id){
				count ++;
			}
		}
		}
		ptr = ptr->next;
	}
	return count;
}

int Menu::GetNumberOfSale(int day, int month, int year)
{
    int count = 0;
	if(sale == nullptr){
		return 0;
	}
	Sale* ptr = sale;
	while(ptr != nullptr){
		if(ExtractDay(ptr->GetTime()) == day && ExtractMonth(ptr->GetTime()) == month && ExtractYear(ptr->GetTime()) == year){
			count ++;
		}
		ptr = ptr->next;
	}
	return count;
}

void Menu::SetTax(float tax)
{
	this->tax = tax;
}

float Menu::GetTax()
{
    return tax;
}
