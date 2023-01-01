#include<iostream>
using namespace std;
void condition(int differencefromnorm,int differencefromnorm1,int timeforgames); 

main()
{
 while(1)
{
 int holidays,workingdays,timeforgames,differencefromnorm,differencefromnorm1;
 cout << "Enter holidays : ";
 cin >> holidays;
 workingdays=365-holidays ;
 timeforgames=(holidays*127)+(workingdays*63);
 differencefromnorm=30000-timeforgames;
 differencefromnorm1=timeforgames-30000;
 condition(differencefromnorm,differencefromnorm1,timeforgames);
 
  
}
}
void condition(int differencefromnorm,int differencefromnorm1,int timeforgames)
{

 if(timeforgames<30000)
 {
 cout<< "Tom sleeps well"<<endl;
 cout << "Time in Minutes : " <<differencefromnorm<< endl;
 cout << "Time : " <<differencefromnorm/60 << " hours and " << differencefromnorm%60 << " minutes" << endl;
 }
 if(timeforgames>30000)
 {
 cout<< "Tom will run away"<<endl;
 cout << "Time in Minutes : " <<differencefromnorm1<< endl;
 cout << "Time : " <<differencefromnorm1/60 << " hours and " << differencefromnorm1%60 << " minutes" <<endl;
 }

}

