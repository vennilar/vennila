#include<stdio.h>
int main(){
    int a[]={-1,0,3,2,4};
    int i,n;
    n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++){
        if(i==a[i]){
            printf("%d",a[i]);
        }
    }
        return 0;
    }
