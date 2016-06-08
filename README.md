import java.io.*;

class Reverse
{
    public static void main (String[] args)
    {
        String str="vennila";
        StringBuilder str1=new StringBuilder();
        str1.append(str);
        str1=str1.reverse();
        System.out.print(str1);
    }
}
