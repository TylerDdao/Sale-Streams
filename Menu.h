#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Sale.h"
#include "Item.h"
#include "shared.h"
using namespace std;

class Menu
{
	float tax;
public:
	Menu();
	~Menu();

	void AddItem(string name, string id, float price); //Done
	void RemoveItem(string id); //Done
	void EditItem(string id, string newName, string newId, float newPrice); //Done

	void AddSale(vector<string> orders, int id); //Done
	void RemoveSale(int id); // Done
	void LoadSale(vector<string> orders, string time, int id, float total); //Done

	float GetPriceOf(string id); //Done
	Item* SearchItem(string id); //Done
	Sale* SearchSale(int id); //Done
	vector<int> SearchSale(string date);

	bool ItemIdVerification(string id); //Done

	void ClearSales(); //Done
	void ClearItems(); //Done
	void ClearMemory(); //Done

	int GetNumberOfItem();
	string GetItemName(string id);
	float GetTotalPrice(vector<string> orderList);
	int GetQuantity(vector<string> ordersList, string id);
	int GetNumberOfSale();
	
	float GetTotalSale(int day, int month, int year);
	int GetNumberOfItemSold(string id, int day, int month, int year);
	int GetNumberOfSale(int day, int month, int year);

	void SetTax(float tax);
	float GetTax();

	Item* item;
	Sale* sale;
};