#include<iostream>
using namespace std;
int digit(int numb,int check);
main(){

    int numb,check;
    cout<<"Enter a number: ";
    cin>>numb;

    cout<<"Enter the digit to check: ";
    cin>>check;

    int output=digit( numb,check);
    cout<<"Frequency: "<<output;


}
int digit(int numb,int check){

    int mod=1;
    int freq=0;
    while(numb>0)
{
    mod=numb%10;
    numb=numb/10;

   if (mod==check){
        freq=freq+1;

    }
    
    }
    return freq;


}