#include<iostream>
using namespace std;

void printTable(int number,int table);

main(){
    
    int table;
    int number;
    
    cout<<"Enter a number: ";
    cin>>table;

    printTable( number,table);


   

}
void printTable(int number,int table){

    
    int mul=1;
    for(number=1;number<=10;number=number+1){
        mul=number*table;
    
        cout<<table<< " x "<<number<<" = "<<mul <<endl;

    }
    }