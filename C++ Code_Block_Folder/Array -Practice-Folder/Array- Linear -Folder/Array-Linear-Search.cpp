#include<iostream>
#include<vector>
using namespace std;


int findlinear(vector<int>arr, int size, int target)
{
    for( int i=0; i<arr.size(); i++)
    {
        if(arr[i] == target)
        return true;
    }
    return false;
}

int main()
{
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;

    vector<int>arr(size);

    for( int i=0; i<arr.size(); i++)
    {
        cout<<"Enter the element of the array :";
        cin>>arr[i];
    }

    int target;
    cout<<"enter the target you find :";
    cin>>target;

    int linearsearch = findlinear(arr, size, target);

    if(linearsearch)
    {
        cout<<" Element Found";
    }
    else
    {
        cout<<" Element not found ";
    }
    return 0;
}
