#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main()
{
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<n;
        return 0;
    }
    if(n==2 || n==3)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    // 1 2 3 4 5
    // 5 3 1 4 2
    // 1 2 3 4 5 6
    // 6 4 2 5 3 1
    // 1 2 3 4
    
    if (n==4)
    {
        cout<<" 3 1 4 2";
        return 0;
    }
    if (n%2!=0 )
    {
        for(int i=n;i>=1;i=i-2)
        {
            cout<<i<<" ";
        }
        for(int i=n-1;i>=2;i=i-2)
        {
            cout<<i<<" ";
        }

    }
    if(n%2==0)
    {
       for(int i=n;i>=2;i=i-2)
        {
            cout<<i<<" ";
        }
        for(int i=n-1;i>=1;i=i-2)
        {
            cout<<i<<" ";
        } 
    }
}