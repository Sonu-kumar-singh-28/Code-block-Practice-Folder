#include<iostream>
#include<vector>
using namespace std;

int findoccurance(vector<int>arr, int size, int target)
{
    int ans =-1;
    int start =0;
    int end= arr.size()-1;
    int mid = start+(end-start) /2;

   while(start <= end)
    {
    if(arr[mid] == target)
    {
        ans =  mid;
        end= mid-1;
    }
    else if(arr[mid]>target)
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
    cout<<" ENter the size of the array:";
    cin>>size;

    vector<int>arr(size);

    for(int i=0; i<arr.size(); i++)
    {
        cout<<" Enter the element of the array:";
        cin>>arr[i];
    }

    int target;
    cout<<" Enter the Target you find :";
    cin>>target;


    int firstoccurance = findoccurance(arr,size,target);

    cout<<"The first Occurance" << target << " Found At " << firstoccurance << " Index" << endl;
}