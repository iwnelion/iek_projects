import java.util.Scanner;
public class arrayScan {
    public static void main(String[] args) {
        int[][] vathmoi=new int[3][4];
        System.out.println("grammes: "+vathmoi.length);
        System.out.println("stiles: "+vathmoi[0].length);
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<vathmoi.length;i++){
            for(int j=0;j<vathmoi[0].length;j++){
                System.out.println("dose arithmo ["+i+"]["+j+"]: ");
                vathmoi[i][j]=Integer.parseInt(sc.nextLine());
            }
        }
        for(int i=0;i<vathmoi.length;i++){
            for(int j=0;j<vathmoi[0].length;j++){
                System.out.println(vathmoi[i][j]+" ");
            }
        }
    }
}
