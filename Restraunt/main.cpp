#include<iostream>
#include"Menu.h"
#include"Order.h"
#include"OrderItem.h"
#include"Recipe.h"
using namespace std;
int main()
{
	string chef,customer;
	int number,choice,items,orderid=0,ind;

	cout<<"-----------------My Restaurant-----------------"<<endl;
	cout<<"Time to Prepare the menu !!"<<endl;
	cout<<"Please Enter the Chef's Name : ";
	cin>>chef;
	cout<<endl<<"Please Enter the Number of Recipes : ";
	cin>>number;
	cout<<endl<<"Let's add the recipes ... "<<endl;
	//Recipe r; //array of recipes l fel menu nfsha
	Order *o=new Order [100];
	//Recipe *R=new Recipe[nom]; //array of recipes l customer hytlobha
	
	Menu m(chef,number);
	m.AddAllRecipes();
	do 
	{
	cout<<endl<<"Do you want to .. "<<endl;
	cout<<"           <1> View the menu?"<<endl;
	cout<<"           <2> Make an order?"<<endl;
	cout<<"           <3> View orders?"<<endl;
	cout<<"           <4> Serve an order?"<<endl;
	cout<<"           <5> Exit?"<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	
	if(choice==1)
	{
		m.DisplayMenuInfo();
	}
	else if(choice==2)
	{
		
		cout<<endl<<"Please Enter the Customer's Name : ";
		cin>>customer;
		cout<<endl<<"Please Enter Number of Items : ";
		cin>>items;
		o[orderid].SetCustomerName(customer);
		o[orderid].SetOrderID(orderid);
		o[orderid].SetNumberOfOrderItems(items);
		OrderItem *oi=new OrderItem[items];
		o[orderid].AddAllOrderItems(oi);
		o[orderid].SetMenu(&m);
			cout<<endl<<endl<<"Your order is "<<endl;
			cout<<"_____________________________________________________"<<endl;
			o[orderid].DisplayOrderInfo();
			orderid++;
	}
	else if(choice==3)
	{
		cout<<"_____________________________________________"<<endl;
		for(int i=0;i<orderid;i++)
		{
			o[i].DisplayOrderInfo();
		}
	}
	else if(choice==4)
	{

       cout<<endl<<"Please Enter the Order ID : ";
	   cin>>ind;
	   cout<<endl<<"Serving : "<<" #"<<ind<<" for Customer "<<o[ind-1].GetCustomerName()<<endl;
	   for(int i=ind;i<orderid-1;i++)
	   {
         o[i]=o[i+1];
	   }
	   orderid--;
	}
	else
		break;
	}
	while(1);
	
	
      // delete [] r;
	   delete [] o;
       delete &m;
	   //delete [] oi;
	  // delete [] R;
	
return 0;
}