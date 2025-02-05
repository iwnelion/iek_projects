import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        ProductManager productManager=new ProductManager();
        //initializing the user's choice
        int userChoice=0;

        //while statement that's executed as long as the user input is any number but 5
        while(userChoice!=5){
            System.out.println("- - - Menou epilogon - - -");
            System.out.println("1. Prosthiki proiontos");
            System.out.println("2. Emfanisi olon ton proionton");
            System.out.println("3. Enimerosi proiontos");
            System.out.println("4. Diagrafi proiontos");
            System.out.println("5. Exodos");
            System.out.println("Epilogi: ");
            userChoice=sc.nextInt();
            sc.nextLine();  //clears the input buffer after int input
            
            //switch-case statement to execute code according to the user input
            switch(userChoice){
                case 1:
                //create product
                    System.out.println("Eisagogi proiontos: ");
                    System.out.println("Eisagete onoma proiontos: ");
                    String name=sc.nextLine();
                    System.out.println("Eisagete katigoria: ");
                    String category=sc.nextLine();
                    System.out.println("Eisagete timi: ");
                    double price=sc.nextDouble();
                    productManager.addProduct(name, category, price);
                    break;

                case 2:
                //read product
                    productManager.displayProducts();
                    break;
                    
                case 3:
                //update product
                    System.out.println("Enimerosi proiontos: ");
                    System.out.println("Eisagete id proiontos gia enimerosi: ");
                    int nId=sc.nextInt();
                    sc.nextLine();
                    System.out.println("Eisagete neo onoma: ");
                    String nName=sc.nextLine();
                    System.out.println("Eisagete nea katigoria: ");
                    String nCategory=sc.nextLine();
                    System.out.println("Eisagete nea timi: ");
                    double nPrice=sc.nextDouble();
                    productManager.updateProduct(nId, nName, nCategory, nPrice);
                    break;

                case 4:
                //delete product
                    System.out.println("Diagrafi proiontos: ");
                    System.out.println("Eisagete to id gia diagrafi: ");
                    int rmId=sc.nextInt();
                    productManager.deleteProduct(rmId);
                    break;
                
                case 5:
                //exit
                    System.out.println("Exodos.");
                    break;
                
                default:
                //default statement in case of wrong input 
                    System.out.println("Lathos eisagogi");
                    break;
            }
        }
        sc.close();     //closes the scanner
    }
}
