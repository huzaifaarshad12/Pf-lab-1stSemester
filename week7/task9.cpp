#include<iostream>
using namespace std;

int calculatePrice(int money, int year);
main(){
    int money,year;

    cout<<"Enter money: ";
    cin>>money;
    cout<<"Enter year: ";
    cin>>year;

     calculatePrice( money,  year);
    
    
}
int calculatePrice(int money, int year){

    for(int currentyear=1800; currentyear<=year;++currentyear){
        if(currentyear%2==0){
            money-=12000;
        }
        else{
            int ageyear=currentyear-1800+18;
            money-=12000+50*ageyear;
            
        }
        
    }
    
if(money>=0){
        cout<<"Yes! He will live a carefree life and will have "<<money<<" dollars left.";
    }
    else{
        cout<<"He will need "<<-money<<" dollars to survive.";
    }

    return money;
}
