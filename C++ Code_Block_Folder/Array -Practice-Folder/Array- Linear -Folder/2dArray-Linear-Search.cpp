#include<iostream>
using namespace std;


int findans(int arr[][3], int rows, int column, int target)
{
    for(int i=0; i<rows; i++)
    {
        for( int j=0; j<column; j++)
        {
            if(arr[i][j] == target)
            {
                cout<<"Element found at " << i << "rows"  << "and " << column << "column" << endl;
                return true;
            }
        }
    }
    return false;
}


int main()
{
    int arr[3][3];

    int rows=3;
    int column = 3;


    cout<<" Inputs element is :" <<endl;

    for(int i=0; i<rows; i++)
    {
        for( int j=0; j<column; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Printing Elements  is :" << endl;

    for( int i=0; i<rows; i++)
    {
        for( int j=0; j<column; j++)
        {
            cout<<arr[i][j] << " ";
        }
        cout<<endl;
    }

    int target; 
    cout<<" Enter the target you find :";
    cin>>target;

    int anslinear = findans(arr,rows,column,target);

    if(anslinear)
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"element not found ";
    }

    return 0;
}