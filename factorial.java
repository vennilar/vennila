
import java.io.*;
import java.util.*;

class Factorial
{
    public static void main (String[] args) throws java.lang.Exception
    {
        int i,n;
        int result=1;
        Scanner s=new Scanner(System.in);
        System.out.println("enter the number to find the factorial value");
        n=s.nextInt();
        for(i=1;i<=n;i++){
          result=result*i;  
        }
        System.out.print("the fact valus is"+result);

    }
}
