import java.util.Scanner;

public class misthos {
    public static void main(String[] arg){
        Scanner payment=new Scanner(System.in);
        System.out.println("Enter your payment: ");
        int misthos=payment.nextInt();
        payment.close();
        if(misthos<=850)
            System.out.println("xamilos");
        else if(misthos>851 && misthos<=1200)
            System.out.println("mesos");
        else if(misthos>=1201 && misthos<2000)
            System.out.println("ypsilos");
        else if(misthos>2000)
            System.out.println("den xaraktirizetai");    
    }
}
