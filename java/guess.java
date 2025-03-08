import java.util.Scanner;
// import java.util.Random;

public class guess {
    public static void main(String[] args) {
        double num=Math.round((Math.random()*10));
        double guess=0;
        Scanner sc=new Scanner(System.in);
        while(guess!=num){
            System.out.println("guess a number between 0 and 10");
            guess=sc.nextDouble();
            if(guess>num){
                System.out.println("too high");
            }else if(guess<num){
                System.out.println("too low");
            }else{
                System.out.println("you guessed it");
                System.out.println("the secret number is: "+num);
            }
        }
        sc.close();
    }   
}