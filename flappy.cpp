#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
void printEnemy();
void eraseEnemy();
void moveEnemy();
void printMaze();
void movePlayerLeft();
void movePlayerRight();
char getCharAtxy(short int x, short int y);
void erasePlayer();
void printPlayer();

int eX = 2, eY = 2;
int pX =20, pY = 20;

main()

{
system("cls");
printMaze();
printEnemy();
printPlayer();

while(true)
{

        if (GetAsyncKeyState(VK_LEFT))
{       
        movePlayerLeft();
}
        if (GetAsyncKeyState(VK_RIGHT))
{
        movePlayerRight();
}

moveEnemy();
Sleep(200);

}

}

    
 void printMaze(){
    cout<<"########################################################"<<endl;
    cout<<"#      \\  //      *   *        *   *                    #"<<endl;               
    cout<<"#        \\//      *   *        *   *                    #"<<endl;
    cout<<"#                  *   *        *   *                   #"<<endl;
    cout<<"#                  *   *        *   *                   #"<<endl;
    cout<<"#                  *   *        *   *                   #"<<endl;
    cout<<"#                  *****        *   *                   #"<<endl;
    cout<<"#                               *   *                   #"<<endl;
    cout<<"#                               *   *                   #"<<endl;
    cout<<"#                               *   *                   #"<<endl;
    cout<<"#                               *****                   #"<<endl;
    cout<<"#           ___                                         #"<<endl;
    cout<<"#          /   \\                                        #"<<endl;
    cout<<"#         |<___>|                                       #"<<endl;
    cout<<"#         |<___>|                                       #"<<endl;
    cout<<"#                               *****                   #"<<endl;
    cout<<"#                               *   *                   #"<<endl;
    cout<<"#                  *****        *   *                   #"<<endl;
    cout<<"#                  *   *        *   *                   #"<<endl;
    cout<<"#                  *   *        *   *                   #"<<endl;
    cout<<"#                  *   *        *   *                   #"<<endl;
    cout<<"#                  *   *        *   *                   #"<<endl;
    cout<<"#                  *   *        *   *                   #"<<endl;
    cout<<"########################################################"<<endl;
 
}
void printEnemy()
{
    gotoxy(eX,eY);
    cout << "___";

    gotoxy(eX,eY+1);
    cout << "/   \\";

    gotoxy(eX,eY+2);
    cout << "|<___>|";

    gotoxy(eX,eY+3);
    cout << "|<___>|";


    
}
    
void eraseEnemy(){

    gotoxy(eX,eY);
    cout << "           ";
    gotoxy(eX,eY+1);
    cout << "           ";
    gotoxy(eX,eY+2);
    cout << "           ";
    gotoxy(eX,eY+3);
    cout << "           ";

}
    void moveEnemy()
{
    eraseEnemy();
    eX = eX + 1;
    if(eX == 30)

{
        eX = 2;
}
    printEnemy();
         
}
void erasePlayer(){
gotoxy(pX,pY);
cout<<"             ";
gotoxy(pX,pY+1);
cout<<"             ";


}
void printPlayer(){
    gotoxy(pX,pY);
    cout<<"\\  // ";
    gotoxy(pX,pY+1);
    cout<<"  \\// ";
    
}

void movePlayerLeft() {
    if (getCharAtxy(pX - 1, pY) == ' ')
{
    erasePlayer();
    pX = pX - 1;
    printPlayer();

}


}

void movePlayerRight() {
if (getCharAtxy(pX + 15, pY) == ' ')
{
    erasePlayer();
    pX = pX + 1;
    printPlayer();
}

}

    char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

            
    
