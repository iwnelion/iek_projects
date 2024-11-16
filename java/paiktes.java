import java.util.Scanner;
public class paiktes {
    public static void main(String[] args) {
        String[] paiktes={"max","lando"};
        String[] stoixeia={"points after the win","fast lap","sprint race","championship points"};
        float[][] statistika=new float[2][4];
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<statistika.length;i++){
            for(int j=0;j<statistika[0].length; j++){
                System.out.println("dose statistiko "+stoixeia[j]+" gia ton "+paiktes[i]+": ");
                statistika[i][j]=Float.parseFloat(sc.nextLine());
            }
        }
        for(int i=0;i<statistika.length;i++){
            for(int j=0;j<statistika[0].length-1; j++){
                System.out.println(statistika[i][j]);
            }
            System.out.println();
        }
        float sum=0;    //max's sum
        for(int i=0;i<statistika.length;i++){
            for(int j=0;j<statistika[0].length-1; j++){
                sum+=statistika[i][j];
            }
            statistika[i][statistika[0].length-1]=sum;
    
        }
        for(int i=0;i<statistika.length;i++){
            for(int j=0;j<statistika[0].length; j++){
                System.out.println(statistika[i][j]+" ");
            }
            System.out.println();
        }
    }
}
