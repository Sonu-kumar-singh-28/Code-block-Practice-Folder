#include<iostream>
using namespace std;

int finddividend(int divided, int divisor)
{
    int start =0; 
    int end= divided-1;

    int mid = start +(end-start)/2;
    int ans= -1;

    while(start<=end)
    {
        if(mid*divisor == divided)
        {
            ans = mid;
            return mid;
        }
        else if(mid*divisor>= divided)
        {
            end= mid-1;
        }
        else
        {
            ans =mid;
            start = mid+1;
        }
        mid = start+(end-start) /2;
    }
    return ans;
}

int main()
{
    int divided;
    cout<<" Enter the number to divided ";
    cin>>divided;

    int divisor;
    cout<<" Enter the divisor number :";
    cin>>divisor;

    int dividend = finddividend(divided, divisor);

    cout<<" The Ans of the number is "<<dividend<< endl;


    int precision;
    cout<<" Enter the digits of the precision :" << endl;
    cin>>precision;

    double step = 0.1;
    double finalans = dividend;

    for( int i=0; i<precision; i++)
    {
        for( double j=dividend; j<divided; j= j+step)
        {
            finalans = j;
        }
        step = step/10;
    }

    cout<<" The Final ans of the Divided Number is :" << finalans << endl;
}