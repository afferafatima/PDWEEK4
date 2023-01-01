#include<iostream>
using namespace std;

void payment(float sale,float total);  
main()
{
 float flower1;
 float flower2;
 float flower3;
 float price1;
 float price2;
 float price3;
 float total;
 float sale;
 
cout << "number of red roses : ";
	cin >>flower1;
	cout << "number of white roses : ";
	cin >>flower2;
	cout << "number of tulips : ";
	cin >>flower3;
    price1=flower1*2.00;
    price2=flower2*4.10;
    price3=flower3*2.50;
     total=price1+price2+price3;
    cout << " Total bill: "<< total << endl;
     payment(sale,total);

}

	

void payment(float sale,float total)
 {
 if(total>200)
 {
  sale=total-(total*0.2);
 cout<<"Your bill after discount is : " << sale << endl;
 }
  if(total<=200)
{
 cout<< "Your bill after discount is : "<< total << endl;
 }
}