int main(void)
{
 int a[20],len,i=0,j,k;
 char roman[10];
 printf("Enter the Roman Numeral(Note: Only use alphabets I,V,X,L,C,D,M): ");
 gets(roman);
 len=strlen(roman);
 for(i=0;i<len;i++)
 {
  if(roman[i]=='I')
  a[i]=1;
  else if(roman[i]=='V')
  a[i]=5;
  else if(roman[i]=='X')
  a[i]=10;
  else if(roman[i]=='L')
  a[i]=50;
  else if(roman[i]=='C')
  a[i]=100;
  else if(roman[i]=='D')
  a[i]=500;
  else if(roman[i]=='M')
  a[i]=1000;
  else
  {
printf("\nPlease enter correct roman numeral.");

exit(0);
  }
}
k=a[len-1];
for(i=len-1;i>0;i--)
{
  if(a[i]>a[i-1])
  k=k-a[i-1];
  else if(a[i]==a[i-1] || a[i]<a[i-1])
  k=k+a[i-1];
}
printf("\nEquivalent Decimal Number is %d ",k);

return 0;
}
