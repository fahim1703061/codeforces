
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
        ll two =0;
        ll three =0;
        ll val_two =1;
        ll val_three =1;
        ll div =2;
        ll ans = 0;
        cout<<pow(2,3);
        while (n % div == 0)
        {
             two++;
             val_two*=2;
             div*=2;
        }
        div = 3;
        while (n % div == 0)
        {
             three++;
             val_three*=3;
             div*=3;
        }
       // cout<<two<<" "<<three<<endl;
        if(n == 1){
            ans = 0;
        }
        else if(n == (val_two*val_three)){
            //cout<<"hei"<<endl;
            if(three>two){
                ans = three + (three-two);
            }
            else if(three == two){
                ans = three;
            }
            else{
                ans = -1;
            }

        }
        else{
            ans = -1;
        }
        cout<<ans<<endl;


    }
}
