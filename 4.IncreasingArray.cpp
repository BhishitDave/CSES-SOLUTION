#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main()
{
    ll n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {   
            sum=sum+(arr[i]-arr[i+1]);
            arr[i+1]=arr[i+1]+(arr[i]-arr[i+1]);
            

        }
    }
    cout<<sum;
}