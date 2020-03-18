#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int i,j,n,x,y;
    int arr1[105];
    int arr2[105];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        arr1[i]=x;
        arr2[i]=y;
    }
    for(i=0;i<n;i++){

            arr2[i]+=arr1[i];

    }
   /* for(i=0;i<n;i++){
        if(arr1[i]>0){
            arr2[i]+=arr1[i];

        }
        else if(arr1[i]<0 && arr2[i]>0){
            arr2[i]+=arr1[i];

        }
        else if(arr1[i]<0 && arr2[i]<0){
            arr2[i]+=arr1[i];

        }

    }


    for(i=0;i<n;i++){
        printf("%d %d\n",arr1[i],arr2[i]);
        }*/

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr1[i] == arr2[j] && arr1[j] == arr2[i]){
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}
