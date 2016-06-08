import java.io.*;
import java.util.*;
import java.math.*;
class MyCode{
    public static void main (String[] args){
       int a=1234;
       int r;
       int result=0;
       int leng=(int)Math.log10(a)+1;
       System.out.println(leng);
       for(int i=1;i<=leng;i++){
           r=a % 10;
           a=a /10;
           result=result * 10+r;
       }
       System.out.println("the result is "+result);
    }
}
