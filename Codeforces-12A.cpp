#include <iostream>
#include <stdio.h>
#include <string>
#include <bits/stdc++.h>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    string a,b,c,t1,t2;
    cin>>a>>b>>c;
    t1=a;
    t2=b;
    //t1=strrev(a);
    reverse(t1.begin(),t1.end());
    //t2=strrev(b);
    //cout<<t1;
    reverse(t2.begin(),t2.end());
    if(t1==c && t2 == b){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
