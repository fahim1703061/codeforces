#include <bits/stdc++.h>

using namespace std;

int isprime[1000];

void siv(int n);

int main()
{

    int n,m,i;
    cin>>n>>m;

//    int n;
//    cin>>n;
    siv(50);
    if(isprime[m])
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(i = n+1; i <= m; i++)
        {
            if(!isprime[i])
            {
//              cout<<"YES"<<endl;
//              return 0;
                break;
            }
        }
        if(i == m)
        {
            cout<<"YES"<<endl;
        }
        else
        {

            cout<<"NO"<<endl;
        }
    }
    return 0;

}

void siv(int n)
{
    isprime[1]=1;
    int rt = sqrt(n);
    for(int i = 4; i <=n; i+=2)
    {
        isprime[i]=1;
    }
    for(int i = 3; i<=rt; i+=2)
    {
        if(isprime[i] == 0)
        {
            for(int j = i*i; j<=n; j+=i)
            {
                isprime[j]=1;
            }
        }
    }
}
