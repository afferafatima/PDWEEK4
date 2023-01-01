#include<iostream>
using namespace std;
void limiter(float speed);
main()
{
 float speed;
while(true)
{
 cout<< "Enter Speed : ";
 cin>> speed;
 limiter(speed);

}
}
void limiter(float speed)
{
	if(speed>100)
	{	
	cout<<"Halt..YOU WILL BE CHALLANGED!!!"<<endl;
	}
	if(speed<=100)
	{
	cout<<"Perfect!You are going great."<<endl;
	}
}