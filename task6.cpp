#include<iostream>
using namespace std;
float purchase(string day,string month,float amount);

int main(){
    string day,month;
    float amount;

    cout<<"Enter Purchase Day: ";
    cin>>day;

    cout<<"Enter Purchase Month: ";
    cin>>month;

    cout<<"Enter Purchase Amount: ";
    cin>>amount;

    float output = purchase(day,month,amount);
    cout<<"Payable Amount After Discount: "<<output;



}
float purchase(string day,string month,float amount){
    float afterdiscount = amount;

    if(day== "Sunday" || month== "October")
    {
        afterdiscount = amount - (amount*0.1);

    }
    
        return afterdiscount;

}