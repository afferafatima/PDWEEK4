#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
void maze();
void playermove(int x,int y);

 main()
 {
 system("cls");
 maze();
 int x=3;
 int y=1;

 while(true)
{
  Sleep(50);
  playermove(x,y);
  if(x<72)
  {x = x+1;}
  if(x==72)
  {gotoxy(x-1,y);
   cout<<" ";
   x=5;
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
	cout << "||..    ......... |%|.         p   |%|.......|%|         ..    |%|.     ||" << endl;
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
	cout<< "P";
	 gotoxy(x-1,y);
	cout << " ";
}