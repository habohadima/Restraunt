#ifndef  Order_H
#define  Order_H
#include<string>
#include"OrderItem.h"
#include"Menu.h"
using namespace std;

class Order
{
private:
	string CustomerName;
	int OrderID;
	int NumberOfOrderItems;
	OrderItem *OT;
    Menu *mn;
public:
	Order();
	Order(int);
	Order(Menu);
	void AddAllOrderItems(OrderItem*);
	void DisplayOrderInfo();
	double CalculateTotalCost();
	double CalculatePreparationTime();
	void SetNumberOfOrderItems(int);
	void SetCustomerName(string);
	void SetOrderID(int);
	void SetMenu(Menu*);
	string GetCustomerName();
	int GetOrderID();
	int GetNumberOfOrderItems();
	OrderItem* GetOrderItem();
	~Order();
};

#endif 