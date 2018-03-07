#include<iostream>
#include"OrderItem.h"
using namespace std;

OrderItem::OrderItem()
{

}
void OrderItem::SetNumberOfMeals(int m)
{
	NumberOfMeals=m;
}
void OrderItem::SetRecipe(int rp)
{
	R.SetRecipeID(rp);
}
int OrderItem::GetRecipes()
{
	return R.GetRecipeID();
}
int OrderItem::GetNumberOfMeals()
{
	return NumberOfMeals;
}
OrderItem::~OrderItem()
{
	cout<<"const of OrderItem"<<endl;
	//delete [] R;
}