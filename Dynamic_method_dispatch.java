//dynamic method dispatch//
class zubin
{
      public void show()
      {
            System.out.println("HELLO C++");
      }
}
class hem extends zubin
{
      public void show()
      {
            System.out.println("HELLO JAVA");
      }
}
public class xyz
{
     public static void main(String args[])
     {
           zubin z1=new zubin();
           hem h1=new hem();
           z1.show();
           z1=h1;
           z1.show();
     }
}