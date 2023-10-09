#include<iostream>
using namespace std;
float number(char letter,float side);
int main()
{
    
    char letter;
    float side;

    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>>letter;

    cout<<"Enter the value: ";
    cin>>side;


    float result=number(letter,side);
    cout<<"The perimeter is: "<<result;
    


}
float number(char letter,float side){
    float Per;

if (letter=='s'){
    Per=4*side;

}
if(letter=='c'){
    Per=6.28*side;


}
if (letter=='t'){
    Per=3*side;

}
if (letter=='h'){
    Per=6*side;

}
return Per;


}