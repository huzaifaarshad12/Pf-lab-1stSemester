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


    float output=number(letter,side);
    cout<<"The perimeter is: "<<output;
    


}
float number(char letter,float side){
    float Peri;

if (letter=='s'){
    Peri=4*side;

}
if(letter=='c'){
    Peri=6.28*side;


}
if (letter=='t'){
    Peri=3*side;

}
if (letter=='h'){
    Peri=6*side;

}
return Peri;


}