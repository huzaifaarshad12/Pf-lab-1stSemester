#include<iostream>
using namespace std;

void largestcol(int arr[][5],int rowsize);
main()
{
    int rowsize;
    cout<<"Enter row size: ";
    cin>>rowsize;
    int arr[rowsize][5];
    cout<<"Enter the elements of the matrix:"<<endl;
    for(int i=0; i<rowsize;i++)
    {
        for(int j=0 ; j<5; j++)
        {
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }

    }
    cout<<endl;
    cout<<"Original Matrix:"<<endl;
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0 ; j<5 ; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
     cout<<endl;   
    }
    largestcol(arr,rowsize);

}
void largestcol(int arr[][5],int rowsize)
{
    int x=0;
    int largeSum=0;
    cout<<endl;
    cout<<"Matrix after largest column moved to first:"<<endl;
    for(int i=0;i<5;i++)
    {
        int sum=0;
        for(int j=0;j<rowsize;j++)
        {
            sum=sum+ arr[j][i];

        }
        if(sum>largeSum)
        {
            largeSum=sum;
            x=i;

        }

    }
    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<rowsize;j++)
        {
            temp=arr[j][0];
            arr[j][0]=arr[j][x];
            arr[j][x]=temp;


        }
        break;
    }
        for(int i=0;i<rowsize;i++)
    {
        for(int j=0 ; j<5 ; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    

}