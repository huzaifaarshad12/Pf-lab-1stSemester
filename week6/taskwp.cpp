#include<iostream>
#include<string>
using namespace std;

string passorFail(int marks);

int main(){
    int score;

    cout<<"Enter your score: ";
    cin>> score;

    cout<< passorFail(score);

    return 0;

}

string passorFail(int marks){
string result;
if(marks > 50){
    result = "You are passed with " +to_string(marks)," marks";

}

if(marks <= 50){
    result = "You are failed with " +to_string(marks)," marks";

}
return result;
}
