#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
void maze();
void playermove(int x,int y);
void playermove1(int x,int y);

main()
{
system("cls");
maze();
int x=3,y=2;

 while(true)
 {
 Sleep(500);
 playermove(x,y);
 if(y<22)
 {y=y+1;}
 if(y==22)
 while(y>2) 
{
 {gotoxy(x,y-1);
   cout << " " ;
 playermove1(x,y);
    y=y-1;
   playermove(x,y);
    Sleep(500);
   }
       
        

 

}
}
}

void gotoxy(int x,int y)
	{
	 COORD coordinates;
	 coordinates.X = x;
	 coordinates.Y = y;
	 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates); 
	}

void maze()	
{
	cout << "##########################################################################" << endl;
	cout << "||.. .......................................................  .....     ||" << endl;
	cout << "||.. %%%%%%%%%%%%%%%%       ...     %%%%%%%%%%%%%%%   |%|..   %%%%      ||" << endl;
	cout << "||..        |%|   |%|    |%|...     |%|         |%|   |%|..    |%|      ||" << endl; 
	cout << "||..        |%|   |%|    |%|...     |%|         |%|   |%|..    |%|      ||" << endl;
	cout << "||..        %%%%%%%% . . |%|...     %%%%%%%%%%%%%%%      ..   %%%%.     ||" << endl;
	cout << "||..        |%|      . . |%|...    ................  |%| ..       .     ||" << endl;
	cout << "||..        %%%%%%%%%. . |%|...    %%%%%%%%%%%%%     |%| ..   %%%%.     ||" << endl;
	cout << "||..              |%|. .           |%|.......        |%| ..    |%|.     ||" << endl;
	cout << "||..    ......... |%|.             |%|.......|%|         ..    |%|.     ||" << endl;
	cout << "||..|%| |%|%%%|%|.|%|. |%|            .......|%|         ..|%| |%|.     ||" << endl;
	cout << "||..|%| |%|   |%|..    %%%%%%%%%%%%%  .......|%|          .|%|.         ||" << endl;
	cout << "||..|%| |%|   |%|..           ...|%|      %%%%%%         . |%|.         ||" << endl;
	cout << "||..|%|           .           ...|%|                 |%| ..|%|.         ||" << endl;
	cout << "||..|%| %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%%      |%| ..|%|%%%%%     ||" << endl;
	cout << "||...............................................    |%| ..........     ||" << endl;
	cout << "||   ............................................           .......     ||" << endl;
	cout << "||..|%| |%|   |%|..    %%%%%%%%%%%%%    ......|%|    |%| ..|%|.         ||" << endl;
	cout << "||..|%| |%|   |%|..           ...|%|       %%%%%%    |%| ..|%|.         ||" << endl;
	cout << "||..|%|           .     G     ...|%|                 |%| ..|%|.         ||" << endl;	
	cout << "||..    %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%%%     |%| ..|%|%%%%%     ||" << endl;
	cout << "||..............................................     |%| ..........     ||" << endl;
	cout << "||  ............................................            .......     ||" << endl;
	cout << "||########################################################################" << endl;
         
}
void playermove(int x,int y)
	{
	 gotoxy(x,y); 
	 cout << "P" ;
	 gotoxy(x,y-1);
	 cout << " " ;
	}	
void playermove1(int x,int y)
	{
	 gotoxy(x,y); 
	 cout << "P" ;
	 gotoxy(x,y);
	 cout << " " ;
	}	    