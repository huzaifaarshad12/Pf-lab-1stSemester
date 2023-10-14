#include<iostream>
using namespace std;

string check(int, char);
int main(){
    int age;
    char gender;

    cout<<"Enter your age: ";
    cin>>age;

    cout<<"Enter your gender (m/f): ";
    cin>>gender;

    string output =check(age,gender);

    cout<<"Your personal title is: "<<output;

}
string check(int age, char gender){
    string result;

    if(age >= 16 && gender == 'm'){
        return  "Mr.";

    }
    if(age < 16 && gender == 'm'){
        return "Master";

    }
    
    if(age >= 16 && gender == 'f'){
        return "Ms.";

    }
    if(age < 16 && gender == 'f'){
        return "Miss";

    }
    
}
