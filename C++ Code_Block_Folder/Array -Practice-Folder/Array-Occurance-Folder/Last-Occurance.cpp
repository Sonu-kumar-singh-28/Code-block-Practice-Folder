#include<iostream>
#include<vector>
using namespace std;

int findlaoccurance(vector<int>arr, int size, int target)
{
    int ans = -1;
    int start =0;
    int end= arr.size()-1;
    int mid = start+(end-start) / 2;

   while(start <= end)
    {
        if(arr[mid]== target)
        {
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid] >target)
        {
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start) /2;
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
    cout<<" ENter the target you find :L:";
    cin>>target;

    int lastoccurance = findlaoccurance (arr,size,target);

    cout<<" The Last occurance " << target << " Found at " << lastoccurance << endl; 
}