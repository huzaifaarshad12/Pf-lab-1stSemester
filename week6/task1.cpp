#include<iostream>
using namespace std;
bool numb(int num1,int num2);

int main(){
    int num1;
    int num2;
    bool result;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    result= numb(num1,num2);
    if(result==1){
        cout<<"1";

    }
    if(result==0){
        cout<<"0";

    }
}
bool numb(int num1,int num2){
if(num1>num2){

    return true;
}

else{

    return false;

}
}