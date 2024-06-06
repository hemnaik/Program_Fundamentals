//command line argument//
public class CLA
{
    public static void main(String args[])
    {
         int sum=0; 
         for(int i=0;i<5;i++)
         {
             int num=Integer.parseInt(args[i]);
             sum=sum+num;
         }
         System.out.println("SUM="+sum);
   }
}