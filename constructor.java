//constructor overloading//
public class constructor
{
     int a,b;
     constructor()
     {
          System.out.println("HELLO C++");
     }
     constructor(int x,int y)
     {
         a=x;
         b=y;
         System.out.println("ADDITION="+(a+b));
     }
     constructor(constructor a1)
     {
         System.out.println("MULTIPLICATION="+(a1.a*a1.b));
     }
     public static void main(String args[])
     {
          constructor a1=new constructor();
          constructor a2=new constructor(100,50);
          constructor a3=new constructor(a2);
     }
}
