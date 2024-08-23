#include<iostream>
using namespace std;
main()
{
  int second,hours;
  cout<<"Enter the number of hours: ";
  cin>>hours;
  
  second=hours*60*60;
  cout<<hours<<" hours is equivalent to "<<second<<" seconds.";
}
