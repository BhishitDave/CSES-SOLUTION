#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main()
{
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++ )
    {
        // if(i==1)
        // cout<<"0"<<endl;
        // if(i==2)
        // cout<<"6"<<endl;
        // if(i>2)
        {
            ll ans = ((i*i)*(i*i-1)/2)-(4*(i-1)*(i-2));
            cout<<ans<<endl ;

        }                                                                                                                                                                                                                       
    }
}