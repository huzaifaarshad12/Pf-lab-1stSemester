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

    float result=purchase(day,month,amount);
    cout<<"Payable Amount After Discount: "<<result;



}
float purchase(string day,string month,float amount){
    float discount;

    if(day=="Sunday" && month=="October")
    {
        discount =amount-(amount*10/100);

    }

    if(day=="Sunday" && month!="October")
    {
        discount = amount- (amount*5/100);
        
    }
    return discount;
    
}

