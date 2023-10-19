#include<iostream>
using namespace std;

int calculateMoney(int age, int price, int uprice);
main(){
    int age;
    int price, uprice,remainingAmount;

    cout<<"Enter Lilly's age: ";
    cin>> age;

    cout<<"Enter the price of the washing machine: ";
    cin>> price;

    cout<<"Enter the unit price of each toy: ";
    cin>> uprice;

   int total= calculateMoney( age, price,uprice);
    
   
    if(total>=price){
         remainingAmount=total-price;
        cout<<"Yes!"<<endl<< remainingAmount;
        
    }
    if(price>total){
         remainingAmount=price-total;
        cout<< "No!"<<endl<< remainingAmount;
         
    } 
}
int calculateMoney(int age, int price, int uprice){
        

        int money=0;
        int toymoney=0;
        int numtoy=0;
        int total;
        int x=1;
        int y=age;
    for(age;age>0;age=age-1){
        if(age%2==0){

            money=money+(10*x)-1;
            x=x+1;
        }
        if(age%2!=0){
            
            numtoy=numtoy+1;
            toymoney=numtoy*uprice;
        }
            

    }
    total=toymoney+money;
    if(y%2==1){
        total=total-uprice;

    }
   return total;

}
