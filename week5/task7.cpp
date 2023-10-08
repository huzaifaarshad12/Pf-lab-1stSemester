#include <iostream>
using namespace std;

string isSymmetrical(int num);
main()
{
    int num;
    cout << "Enter a three-digit number: ";
    cin >> num;
    isSymmetrical(num);
    string result = isSymmetrical(num);
    cout << result;
}
string isSymmetrical(int num)
{
    int num1 = num % 10;
    int num2 = num / 100;
    	
    if (num1 == num2)
    {
        return "The number is symmetrical.";
    }
    if (num1 != num2)
    {
        return "The number is not symmetrical.";
    }
}