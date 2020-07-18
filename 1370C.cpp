#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define For(i,n) for(int i=0; i<n; i++)

bool prime(ll n);

int main()
{
    ll t,n;
    cin>>t;
    For(i,t)
    {
        cin>>n;
        ll ashis = 0;
        if(n == 1){
            ashis = 0;

        }
        else if(n == 2){
            ashis = 1;
        }
        else if(n%2 == 1){
            ashis = 1;
        }
        else
        {
            ll x = 0;
            ll two = 2;
            while (n%two == 0 )
            {
                x++;
                two*=2;
            }
            if(n == pow(2,x)){
                ashis = 0;
            }
            else if(x == 1 && prime(n/2)){
                ashis = 0;
            }
            else
            {
                ashis = 1;
            }
            
            
        }
        
        
        if(ashis){
            cout<<"Ashishgup"<<endl;
        }
        else
        {
            cout<<"FastestFinger"<<endl;
        }
        
    }
}

bool prime(ll n)
{
    for(ll i =3; i*i<=n;i+=2){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
