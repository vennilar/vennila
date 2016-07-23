#include<stdio.h>
int main(){
    int a[]={-1,0,-1,0,3,2,4,2,4};
    int i,m,n,j=0,count=0;
    n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        if(a[i]==a[j] && i!=j){
            count++;
        }
        }
        if(count==0){
            printf("%d",a[i]);
        }
        count=0;
    }
    return 0;
}
