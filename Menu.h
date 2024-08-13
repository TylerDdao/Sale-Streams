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

	bool ItemIdVerification(string id); //Done

	void ClearSales(); //Done
	void ClearItems(); //Done
	void ClearMemory(); //Done

	int GetTotalOfItems();
	float GetTotalPrice(vector<string> orderList);
	int GetQuantity(vector<string> ordersList, string id);
	int GetTotalOfSales();

	Item* item;
	Sale* sale;
};