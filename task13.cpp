#include<iostream>
using namespace std;

float lowestPrice(int km, string period);
int main(){
    int km;
    string period;

    cout<<"Enter the number of kilometers: ";
    cin>>km;

    cout<<"Enter the period of the day (day/night): ";
    cin>>period;

    float result =lowestPrice( km, period);
    cout<<"Lowest price for "<<km<<" kilometers: "<<result<<" EUR";


}
float lowestPrice(int km, string period){
    float total;
  if(period == "day" && km < 20){
    total = 0.79*km + 0.70; 

  }  
  if(period == "night" && km < 20){
    total = 0.90*km + 0.70;

  }
    if((period == "day" || period == "night") && km >=20 && km < 100){

        total= 0.09*km;
    
    }
    if((period == "day" || period == "night") && km >=100 ){

        total= 0.06*km;
    
    }
    return total;

}