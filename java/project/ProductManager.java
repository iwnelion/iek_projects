import java.util.ArrayList;

public class ProductManager {
    //list that expands and shrinks according to the user input for the products
    private ArrayList<Product> products;
    //property for the id
    private int nextId;

    //constructor
    public ProductManager(){
        products=new ArrayList<>();
        nextId=1;   //set to 1 for the autoincrement
    }

    //create method
    public void addProduct(String name, String category, double price){
        Product product=new Product(nextId++, name, category, price);
        products.add(product);
        System.out.println("To proion prostethike");
    }
    
    //read method
    public void displayProducts(){
        if(products.isEmpty()){
            System.out.println("Kanena proion gia emfanisi");
        }else{
            System.out.println("Emfanisi proionton: ");
            System.out.println(" - - - - - - - - - - - - - - - - - - - - - ");
            System.out.println("   id  |   name   |   category   |   price");
            for(Product product:products){
                System.out.println(product);
            }
            System.out.println(" - - - - - - - - - - - - - - - - - - - - - ");
        }
    }

    //update method
    public void updateProduct(int id, String nName, String nCategory, double nPrice){
        boolean found=false;    //to check if the id is found in order to break the loop
        for(Product product:products){
            if(product.getId()==id){
                product.setName(nName);
                product.setCategory(nCategory);
                product.setPrice(nPrice);
                System.out.println("To proion enimerothike");
                found=true;
                break;
            }
        }
        if(!found){     //prints message in case id wasn't found
            System.out.println("Den vrethike proion me auto to id");
        }
    }

    //delete method
    public void deleteProduct(int id){
        boolean found=false;    //to check if the id is found in order to break the loop
        //reverse order for-loop in order to avoid "ConcurrentModificationException" 
        for(int i=products.size()-1; i>=0; i--){
            Product product=products.get(i);
            if(product.getId()==id){
                products.remove(i);
                System.out.println("To proion diagrafike");
                found=true;
                break;
            }
        }
        if(!found){     //prints message in case id wasn't found
            System.out.println("Den vrethike proion me auto to id");
        }
    }
}