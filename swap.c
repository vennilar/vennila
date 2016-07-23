#include<stdio.h>
#include<string.h>
int main(){
    char a[10]="vennila";
    int i,j,n;
    char temp,b,c;
    n=strlen(a);
    printf("%s",a);
    printf("\n");
    for(j=0;j<n;j+=2){
        temp=a[j];
        b=a[j+1];
        c=a[j];
        printf("%c%c",b,c);
    }
    return 0;
    }
