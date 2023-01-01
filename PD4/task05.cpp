#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
void name();

main()
{
system("cls");
 int x=10;
 int y=10;
 name();

}
void gotoxy(int x,int y)
{
 	 COORD coordinates;
	 coordinates.X = x;
	 coordinates.Y = y;
	 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void name()
{
gotoxy(10,10);
cout << "   ######  ######## ######## ####### ######   ######   " << endl;
gotoxy(10,11);
cout << "  ##    ## ##'''''' ##'''''' ##''''' ##   ## ##    ##  " << endl;
gotoxy(10,12);
cout << "  ##    ## ##...    ##...    ##...   ##   ## ##    ##  " << endl;
gotoxy(10,13);
cout << "  ######## #####    #####    #####   ######  ########  " << endl;
gotoxy(10,14);
cout << "  ##    ## ##       ##       ##..... ## ##   ##    ##  " << endl;
gotoxy(10,15);
cout << "  ##    ## ##       ##       ####### ##  ### ##    ##  " << endl;
gotoxy(10,16);
cout << "                        " << endl;
gotoxy(10,17);
cout << "  ########  ######  ######## ###### ##    ##  ######   " << endl;
gotoxy(10,18);
cout << "  ##'''''' ##    ##    ##      ##   ## ## ## ##    ##  " << endl;
gotoxy(10,19);
cout << "  ##...    ##    ##    ##      ##   ##  # ## ##    ##  " << endl;
gotoxy(10,20);
cout << "  #####    ########    ##      ##   ##    ## ########  " << endl;
gotoxy(10,21);
cout << "  ##       ##    ##    ##      ##   ##    ## ##    ##  " << endl;
gotoxy(10,22);
cout << "  ##       ##    ##    ##    ###### ##    ## ##    ##  " << endl;

}
