#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define For(i,n) for(int i=0; i<n; i++)

int main()
{
    ll t,n,x,y;
    cin>>t;
    For(i,t)
    {
        cin>>x>>y>>n;
        ll ans = n-x;
        ll mod = ans % x;
        if(mod<y){
            ans+=(y - mod);
        }
        else{
            ans=n-(mod - y);
        }
        cout<<ans<<endl;
    }
}
