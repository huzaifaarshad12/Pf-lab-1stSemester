#include<iostream>
using namespace std;

main()
{
    int num,x;
    string value;
    string arr[5][5]={{".",".",".","*","*"},
                      {".","*",".",".","."},
                      {".","*",".",".","."},
                      {".","*",".",".","."},
                      {".",".","*","*","."}};
    cout<<"Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    cin>>value;
    num=value[0];
    int num2=value[1];
    num2=num2-49;
    if(num=='A')
    {
        x=0;
    }
    if(num=='B')
    {
        x=1;
    }
    if(num=='C')
    {
        x=2;
    }
    if(num=='D')
    {
        x=3;
    }
    if(num=='E')
    {
        x=4;
    }
string result;
if(arr[x][num2]==".")
{
    result="splash";
    }
    else{
        result="BOOM";
    }
    cout<<"Result: "<<result;
}




