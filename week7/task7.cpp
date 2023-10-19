#include<iostream>
#include<iomanip>
using namespace std;

main(){
int numb,number;
int h1=0,h2=2,h3=0,h4=0,h5=0;

cout<<"Enter numbers count: ";
cin>>numb;

for(int i=1;i<=numb;i++){

    
    cout<<"Enter a number: ";
    cin>>number;
    if(number<200){
        h1++;
    }
     else if(number<400){
        h2++;
    }
     else if(number<600){
        h3++;
    }
     else if(number<800){
        h4++;
    }
     else{
        h5++;
    }
}
cout<<h1<<h2<<h3<<h4<<h5;
    float totl=h1+h2+h3+h4+h5;
    float percentage_h1 = (h1/totl)*100;
    float percentage_h2 = (h2/totl)*100;
    float percentage_h3 = (h3/totl)*100;
    float percentage_h4 = (h4/totl)*100;
    float percentage_h5 = (h5/totl)*100;

        cout<< fixed << setprecision(2) <<percentage_h1<<"%"<<endl;
        cout<< fixed << setprecision(2) <<percentage_h2<<"%"<<endl;
        cout<< fixed << setprecision(2) <<percentage_h3<<"%"<<endl;
        cout<< fixed << setprecision(2) <<percentage_h4<<"%"<<endl;
        cout<< fixed << setprecision(2) <<percentage_h5<<"%"<<endl;

}
