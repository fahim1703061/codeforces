#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int pt[1000000];
int main()
{
    int m,l,r,c,n,i,j;
    char str[1000000];

    while(scanf("%s",str)!=EOF){

        n=strlen(str);
        c=0;
        for(i=0;i<n-1;i++){
                if(str[i] == str[i+1]){
                 c++;

                }
                pt[i+1]=c;
            }
        scanf("%d",&m);
        for(j=0;j<m;j++){
            scanf("%d %d",&l,&r);


            printf("%d\n",pt[r-1]-pt[l-1]);
        }
    }
    return 0;
}
