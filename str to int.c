#include<stdio.h>
#include<stdlib.h>
int main(){
char a[100];
int i,n,no=0;
printf("enter the number");
gets(a);
n=strlen(a);
for(i=0;i<n;i++){
    no=no*10+(a[i]-'0');
}
printf("%d",no);
return 0;
}
