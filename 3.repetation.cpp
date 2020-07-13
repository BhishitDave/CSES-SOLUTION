#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main()
{
    string n;
    int ans=0,c=0;
    cin>>n;
    char a='A';
    for(char b : n)
    {
        if(b==a)
        {
            c++;
            ans=max(ans,c);
        }
        else
        {
            a=b;
            c=1;
        }
        
        
    }
    cout<<ans;
}