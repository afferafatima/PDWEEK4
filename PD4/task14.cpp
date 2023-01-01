#include<iostream>
#include<windows.h>
using namespace std;
void printmenu();
void calculateaggregate(string name,float matricmarks,float fscmarks,float ecat,float aggregate);
void ecatmarks(string name,float ecat,string name2,float ecat2);


main()
{
system("cls");
string name,name2;
int value;
float matricmarks,fscmarks,ecat,aggregate;
float ecat2;
printmenu();
while(true)
{ 
Sleep(1000);
cout << "Choose your Option : " << endl;
cout <<  "                1)Calculate student's aggregate " << endl;
cout <<  "                2)Compare student's marks " << endl;
cout << "ENTER YOUR CHOICE : ";
cin >>  value;
if (value==1)
{
cout<< " %%%%%%%AGGREGATE CALCULATOR%%%%%%% " << endl;
calculateaggregate(name,matricmarks,fscmarks,ecat,aggregate);
}
if(value==2)
 {
  cout << " %%%%%%%COMPARE MARKS%%%%%%% " << endl;  
  ecatmarks(name,ecat,name2,ecat2); 
 }
}
}
void printmenu()
{
cout << "          %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;	
cout << "          %%                           %% " << endl;
cout << "          %%         UNIVERSITY        %% " << endl;
cout << "          %%         ADMISSION_        %% " << endl;
cout << "          %%         MANAGEMENT        %% " << endl;
cout << "          %%           SYSTEM          %% " << endl;
cout << "          %%                           %% " << endl;
cout << "          %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
}
void calculateaggregate(string name,float matricmarks,float fscmarks,float ecat,float aggregate)
{
	cout << " Enter Name of student: ";
	cin >> name;
	cout << " Enter matricmarks : ";
	cin >> matricmarks;	
	cout << " Enter fscmarks(part1)out of 550 : ";
	cin >> fscmarks;
	cout << " Enter ecatmarks : ";
	cin >> ecat;
	aggregate=(matricmarks*0.02727)+(fscmarks*0.05454)+(ecat*0.1);
	cout << name<< "'s aggregate is : " << aggregate << endl;
        cout << "       " << endl;
                
	
}
void ecatmarks(string name,float ecat,string name2,float ecat2)
{
  cout << "Enter name of 1st student: ";
  cin >> name;
  cout<< "Enter Ecat marks of 1st Student: ";
  cin >> ecat;
  cout << "Enter name of 2nd student: ";
  cin >> name2;	
  cout<< "Enter Ecat marks of 2nd Student: ";
  cin >> ecat2;
  if(ecat>ecat2)
  {  
  cout<< "Roll No. 1 :" << name<<endl;
  cout<< "Roll No. 2 :" << name2<<endl;
  }
  if(ecat<ecat2)
  {  
  cout<< "Roll No. 1 :" << name2<<endl;
  cout<< "Roll No. 2 :" << name<<endl;
  }
  }
 