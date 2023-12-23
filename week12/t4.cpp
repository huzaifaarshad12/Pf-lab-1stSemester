#include<iostream>
using namespace std;
int printsum(int element[][3],int rowsize);
main()
{
    int rowsize;

    cout<<"Enter row size: ";
    cin>>rowsize;
    int element[rowsize][3];
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0; i<rowsize; i++)
    {
        for(int x=0; x<3; x++)
        {
            cout<<"Enter element at position ["<<i<<"]["<<x<<"]: ";
            cin>>element[i][x];

        }

    }
    int ans= printsum(element, rowsize);
    cout<<"The sum of elements in the matrix is: "<<ans;
}

int printsum(int element[][3],int rowsize)
{
    int sum=0;
    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum=sum+ element[i][j];
        }
    }
        return sum;
}