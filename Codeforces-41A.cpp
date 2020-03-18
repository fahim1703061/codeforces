#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
void str_reverse(char ar[]);
int main()
{
    char arr[103],arr1[103];
    cin>>arr>>arr1;
    str_reverse(arr);
    //cout<<arr;
    //printf("%s",arr);
    if(strcmp(arr,arr1) == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
void str_reverse(char ar[])
{
    int i,n;
    //cout<<"yes";
    n=strlen(ar);
    char temp[104];
    strcpy(temp,ar);
    for(i=0;i<n;i++){
        ar[i]=temp[n-i-1];
    }
}
