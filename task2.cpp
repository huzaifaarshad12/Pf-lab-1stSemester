#include<iostream>
using namespace std;
bool parityAnalysis(int num);

int main(){
    int num;
    cout<<"Enter a 3-digit number: ";
    cin>>num;
     cout<< parityAnalysis(num);




}
bool parityAnalysis(int num){
    
    int digit1=num%10;
    
    int digit2=(num/10)%10;
    

    int digit3=(num/100)%10;


    int result=digit1+digit2+digit3;

if(num%2==0 && result%2==0 || num%2!=0 && result%2!=0)
{
    return true;

}
else{
    return false;

}

    }





