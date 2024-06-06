//user defined exception//
import java.util.Scanner;
class mydivideexception extends Exception
{
     mydivideexception(String a)
     {
          System.out.println(a);
     }
}
public class myclass 
{    
      public void demo(int a,int b)throws mydivideexception
      {
            int c=a/b;
            if(c==0)
            {
                 throw new mydivideexception("DIVISION IS ZERO");
            }
            else
            {
                 System.out.println("INVALID INPUT");
            }
     }
public static void main(String args[])
{
       myclass a1=new myclass();
       try
       {
           a1.demo(100,0);
       }
       catch(mydivideexception k)
       {
            System.out.println("EXCEPTION="+k);
       }
}
}