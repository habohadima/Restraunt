#include<iostream>
//#include"Menu.h"
//#include"Order.h"
//#include"OrderItem.h"
#include"Recipe.h"
using namespace std;

Recipe::Recipe()
{

}
void Recipe::SetName(string s)
{
	Name=s;
}
void Recipe::SetCostPerMeal(double c)
{
	CostPerMeal=c;
}
void Recipe::SetPreparationTime(double t)
{
	PreparationTime=t;
}
void Recipe::SetRecipeID(int r)
{
	RecipeID=r;
}
string Recipe::GetName()
{
	return Name;
}
double Recipe::GetCostPerMeal()
{
	return CostPerMeal;
}
double Recipe::GetPreparationTime()
{
	return PreparationTime;
}
int Recipe::GetRecipeID()
{
	return RecipeID;
}
void Recipe::DisplayRecipeInfo()
{

	cout<<"Recipe : "<<Name<<endl;
	cout<<"ID : "<<RecipeID<<", "<<"Preparation time : "<<PreparationTime<<", "<<"Cost Per Meal : "<<CostPerMeal<<endl;
}
Recipe::~Recipe()
{
	cout<<"const of Recipe"<<endl;
}