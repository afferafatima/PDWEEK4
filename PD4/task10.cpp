#include<iostream>
using namespace std;
main()
{
	string name;
	float price;
while(true)
 {
	cout << "Enter Country Name : ";
	cin >> name;
	cout << "Enter Ticket Price : ";
	cin >> price;
	if(name=="pakistan")
	{
	 price=price-(price*0.05);
	 cout<<price<<endl;
	}
	if(name=="ireland")
	{
	 price=price-(price*0.1);
	 cout<<price<<endl;
	}
	if(name=="india")
	{
	 price=price-(price*0.2);
	 cout<<price<<endl;
	}
	if(name=="england")
	{
	 price=price-(price*0.3);
	 cout<<price<<endl;
	}
	if(name=="canada")
	{
	 price=price-(price*0.45);
	 cout<<price<<endl;;
	}
	
	
	
	
	

 }
}
         