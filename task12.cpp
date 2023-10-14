#include<iostream>
using namespace std;

float totalIncome(string, int, int);
int main(){

    string type;
    int rows;
    int columns;

    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>> type;

    cout<<"Enter the number of rows: ";
    cin>> rows;

    cout<<"Enter the number of columns: ";
    cin>> columns;

    float output= totalIncome(type,rows,columns);
    cout<<output;

}
float totalIncome(string total, int rows, int columns){
    float output;
    if(total == "Premiere"){
        output = rows*columns*12;

    }
    if(total == "Normal"){
        output = rows*columns*7.50;

    }
    if(total == "Discount"){
        output = rows*columns*5;

    }
    return output;



}