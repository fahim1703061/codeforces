#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define For(i,n) for(int i=0; i<n; i++)

int main()
{
    ll t,n;
    cin>>t;
    For(i,t)
    {
        cin>>n;
        if(n % 2 == 0){
            cout<<n/2<<endl;
        }
        else{
            cout<<((n-1)/2)+1<<endl;
        }
    }
}

