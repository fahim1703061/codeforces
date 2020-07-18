#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define For(i,n) for(int i=0; i<n; i++)

int main()
{
    ll t,n,r;
    cin>>t;
    For(i,t)
    {
        cin>>n>>r;
        ll ans = 0;
        if(n<=r){
            n=n-1;
            ans = (n*(n+1))/2;
            ans++;
        }
        else{
            ans = (r*(r+1))/2;
        }
        cout<<ans<<endl;
    }
}

