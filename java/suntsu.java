import java.util.Scanner;
public class suntsu {
    public static void main(String[] args) {
        System.out.println("think of a number!! (don't say it shhhh)");
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the remainder of the division by 3");
        int a=sc.nextInt();
        System.out.println("enter the remainder of the division by 5");
        int b=sc.nextInt();
        System.out.println("enter the remainder of the division by 7");
        int c=sc.nextInt();
        sc.close();

        double n=(70*a+21*b+15*c)%105;
        System.out.println(n);
    }
}
