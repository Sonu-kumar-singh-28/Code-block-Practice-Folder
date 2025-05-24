#include<iostream>
using namespace std;


int findbinary(int arr[][3] , int rows , int column, int target)
{
    int start =0;
    int end = rows*column-1;
    int ans = -1;
    int mid = start +(end-start);

    while(start<= end)
    {
        int rowsindex = mid/column;
        int columnindex = mid%column;

        if(arr[rowsindex][columnindex] == target)
        {
             cout<<"Element Found At " << rowsindex << " Rows and " << columnindex << "Column" << endl; 
            ans = mid;
            return ans;
        }
        else if(arr[rowsindex][columnindex]> target)
        {
            end= mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start);
    }
    return ans;
}

int main()
{
    int arr[3][3];

    int rows = 3;
    int column = 3;

    cout<<" Inputs Element is :"<< endl;

    for(int i=0; i<rows; i++)
    {
        for( int j=0; j<column; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Printing Elements  is:" << endl;

    for( int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            cout<<arr[i][j] << " ";
        }
        cout<<endl;
    }

    int target;
    cout<<"Enter the target you find :";
    cin>>target;

    int binarysearch = findbinary(arr,rows, column, target);

    cout<<"The Number" <<target << "  Is Found At " << binarysearch << "Index" << endl;
    
    return 0;
}