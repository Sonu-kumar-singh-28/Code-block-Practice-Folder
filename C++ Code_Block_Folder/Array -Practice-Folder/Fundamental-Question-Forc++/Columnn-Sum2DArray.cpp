#include<iostream>
using namespace std;


int fidncolumnsum(int arr[][3], int rows, int column)
{
    for(int i=0; i<rows; i++)
    {
        int ans =0;
        for(int j=0; j<column; j++)
        { 
            ans = ans+arr[j][i];
        }
        cout<<" The Addition Of the Column Is :" << ans  << endl;
    }
    cout<<endl;
}

int main()
{
    int arr[3][3];
    int rows =3; 
    int column =3;

    cout<<"Inputs Element is :" << endl;

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<" Printing Element is :" << endl;

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            cout<<arr[i][j] << " " ;
        }
        cout<<endl;
    }

    int columnsum = fidncolumnsum(arr, rows, column);
}