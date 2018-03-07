#include<iostream>
//#include"Menu.h"
#include"Order.h"
//#include"OrderItem.h"
//#include"Recipe.h"
#include"Menu.h"
using namespace std;

Order::Order()
{
}
void Order::SetOrderID(int id)
{
	OrderID=id;
	
}
void Order::SetMenu(Menu *mu)
{
    mn=mu;
}
int Order::GetOrderID()
{
	return OrderID;
}
void Order::SetCustomerName(string s)
{
	CustomerName=s;
}
string Order::GetCustomerName()
{
	return CustomerName;
}
int Order::GetNumberOfOrderItems()
{
	return NumberOfOrderItems;
}
void Order::SetNumberOfOrderItems(int n)
{
	NumberOfOrderItems=n;
}
void Order::AddAllOrderItems(OrderItem *oi)
{
	for(int i=0;i<NumberOfOrderItems;i++)
		{
			OT=oi;
	        int rID,nom;
			cout<<endl<<"Recipe ID : ";
			cin>>rID;
			oi[i].SetRecipe(rID);
			cout<<endl<<"Number of Meals : ";
			cin>>nom;
			oi[i].SetNumberOfMeals(nom);
			OT[i].SetNumberOfMeals(nom);
			OT[i].SetRecipe(rID);
	   }
}
void Order::DisplayOrderInfo()
{ 
	
	cout<<"Order #"<<OrderID+1<<" for customer "<<CustomerName<<endl;
	cout<<"Preparation time : "<<CalculatePreparationTime()<<endl<<endl;
   for(int i=0;i<NumberOfOrderItems;i++)
	{
		cout<<OT[i].GetNumberOfMeals()<<" ";
		cout<<(mn->List[(OT[i].GetRecipes())-1]).GetName()<<" "<<(mn->List[(OT[i].GetRecipes())-1]).GetCostPerMeal()<<" ";
		cout<<OT[i].GetNumberOfMeals()*mn->List[(OT[i].GetRecipes())-1].GetCostPerMeal()<<endl;
		
	}
        cout<<"_______________________________________"<<endl;
		cout<<"Total : "<<CalculateTotalCost()<<endl;
		cout<<"________________________________________"<<endl;
}
double Order::CalculatePreparationTime()
{
	double cpt=mn->List[(OT[0].GetRecipes())-1].GetPreparationTime();
	for(int i=1;i<NumberOfOrderItems;i++)
	{
		if(cpt<mn->List[(OT[i].GetRecipes())-1].GetPreparationTime())
		cpt=mn->List[(OT[i].GetRecipes())-1].GetPreparationTime();
	}
	return cpt;
}
double Order ::CalculateTotalCost()
{
	double total=0;
	          for(int i=0;i<NumberOfOrderItems;i++)
	           {
				   total+=mn->List[(OT[i].GetRecipes())-1].GetCostPerMeal()*OT[i].GetNumberOfMeals();
	           }
	
	 return total;
}
Order::~Order()
{
delete OT;
cout<<"const of Order"<<endl;
}