#ifndef  Menu_H
#define  Menu_H
#include<string>
#include"Recipe.h"
using namespace std;
class Menu
{
	friend class Order;
private:
	string ChefName;
	int NumberOfRecipes;
	class Recipe *List;
public:
	Menu::Menu();
	Menu(string,int);
	void SetList(Recipe*);
	void AddAllRecipes();
	void DisplayMenuInfo();
	void SetChefName(string);
	void SetNumerOfRecipes(int);
	string GetChefName();
	int GetNumberOfRecipes();
	Recipe* GetList();
	~Menu();
};




#endif // Menu_H
