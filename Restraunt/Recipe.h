#ifndef  Recipe_H
#define  Recipe_H
#include<string>
using namespace std;

class Recipe
{
private:
	string Name;
	int RecipeID;
	double CostPerMeal;
	double PreparationTime;
	//class OrderItem ORT;
public:
	Recipe();
	void DisplayRecipeInfo();
	void SetName(string);
	void SetRecipeID(int);
	void SetCostPerMeal(double);
	void SetPreparationTime(double);
	double GetCostPerMeal();
	double GetPreparationTime();
	string GetName();
	int GetRecipeID();
	~Recipe();
};

#endif 