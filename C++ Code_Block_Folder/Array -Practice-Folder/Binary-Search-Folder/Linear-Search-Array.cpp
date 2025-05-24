#include<iostream>
#include<vector>
using namespace std;


int findlibinary(vector<int>arr, int size,int target)
{
    int start =0;
    int end = arr.size()-1;
    int ans = -1;
    int mid = start +(end-start);

    while(start<= end)
    {
        if(arr[mid] == target )
        {
            ans = mid;
            return mid;
        }

        else if(arr[mid]>target)
        {
            end= mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}

int main()
{
    int size;
    cout<<" Enter the size of the array:";
    cin>>size;

    vector<int>arr(size);

    for( int i=0; i<arr.size(); i++)
    {
        cout<<" Enter the element of the array:";
        cin>>arr[i];
    }

    int target;
    cout<<" Enter the target you Find :";
    cin>>target;

    int libinary = findlibinary(arr,size, target);

    cout<<" the Target  " << target << " Found at  " << libinary << " Index" << endl;
}