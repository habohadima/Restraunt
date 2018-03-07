#include<iostream>
#include"Menu.h"
#include"Order.h"
#include"OrderItem.h"
#include"Recipe.h"
using namespace std;

Menu::Menu()
{

}
Menu::Menu(string s,int x)
{
	SetChefName(s);
	SetNumerOfRecipes(x);
	List=new Recipe [NumberOfRecipes];
}
void Menu::SetChefName(string s)
{
	ChefName=s;
}
void Menu::SetNumerOfRecipes(int n)
{
	NumberOfRecipes=n;
}
void Menu::AddAllRecipes()
{
	//Recipe r;
	string x;
	double p,c;
	for(int i=0;i<NumberOfRecipes;i++)
	{
		cout<<"For Recipe #"<<i+1<<", Please Enter the following : "<<endl;
		cout<<"Name : ";
		cin>>x;
		//r.SetName(x);
		cout<<endl<<"Preparation Time : ";
		cin>>p;
		//r.SetPreparationTime(p);
		cout<<endl<<"Cost : ";
		cin>>c;
		//r.SetCostPerMeal(c);
		List[i].SetName(x);
		List[i].SetPreparationTime(p);
		List[i].SetRecipeID(i+1);
		List[i].SetCostPerMeal(c);
	}
}
Recipe* Menu::GetList()
{
	return List;
}
string Menu::GetChefName()
{
	return ChefName;
}
int Menu::GetNumberOfRecipes()
{
	return NumberOfRecipes;
}
void Menu::DisplayMenuInfo()
{
	cout<<"_______________________________________________"<<endl<<" --- Chef "<<ChefName<<"'s Menu ---"<<endl;
	cout<<"_______________________________________________"<<endl;
	for(int i=0;i<NumberOfRecipes;i++)
	{
		List[i].DisplayRecipeInfo();
	}
}
Menu::~Menu()
{cout<<"cons of Menu"<<endl;
	delete [] List;
}