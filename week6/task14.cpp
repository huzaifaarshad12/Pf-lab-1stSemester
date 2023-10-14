#include<iostream>
using namespace std;

string calculateCost(float budget, string category, int numPeople );
int main(){

    float budget;
    string category;
    int numPeople;
    

    cout<<"Enter the budget: ";
    cin>>budget;

    cout<<"Enter the category (VIP/Normal): ";
    cin>>category;

     cout<<"Enter the number of people in the group: ";
     cin>>numPeople;

    string money;
    money = calculateCost(budget,category,numPeople);
     cout<<money;



}

string calculateCost(float budget, string category, int numPeople){
float remainamount=0.0;
float totalexpense=0.0;

if(category == "VIP" && (numPeople >=1 && numPeople <=4 )){

        totalexpense = (budget*0.75 ) +499.99*numPeople;

}
if(category == "VIP" && (numPeople >=5 && numPeople <=9 )){

         totalexpense = (budget*0.60 ) +499.99*numPeople;


}
if(category == "VIP" && (numPeople >=10 && numPeople <=24 )){

         totalexpense = (budget*0.50 ) +499.99*numPeople;
        
}
if(category == "VIP" && (numPeople >=25 && numPeople <=49 )){

         totalexpense = (budget*0.40) +499.99*numPeople;


}
if(category == "VIP" && (numPeople >=50 )){

        totalexpense = (budget*0.25 ) +499.99*numPeople;
        

}
if(category == "Normal"&& (numPeople >=1 && numPeople <=4)){

         totalexpense = (budget*0.75 ) +249.99*numPeople;
        


}
if(category == "Normal " && (numPeople >=5 && numPeople <=9 )){

         totalexpense = (budget*0.6 ) +249.99*numPeople;


        }

if(category == "Normal" && (numPeople >=10 && numPeople <=24 )){

         totalexpense = (budget*0.5 ) +249.99*numPeople;
        

}
if(category == "Normal" && (numPeople >=25 && numPeople <=49 )){

         totalexpense = (budget*0.4 ) +249.99*numPeople;


        }

if(category == "Normal" && (numPeople >=50 )){

         totalexpense = (budget*0.25 ) +249.99*numPeople;
        
}
remainamount = budget-totalexpense;
if(budget>=totalexpense){
        return "Yes! You have "+to_string(remainamount)+" leva left.";

}
if(budget<totalexpense){

        return "Not enough money! You need "+to_string(remainamount*-1)+" leva.";

}

}