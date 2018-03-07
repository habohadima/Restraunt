#ifndef  OrderItem_H
#define  OrderItem_H
using namespace std;
#include"Recipe.h"

class OrderItem
{
private:
	int NumberOfMeals;
	  Recipe R;
public:
	OrderItem();
	void SetNumberOfMeals(int);
	void SetRecipe(int);
	int GetNumberOfMeals();
	int GetRecipes();
	~OrderItem();
};

#endif 