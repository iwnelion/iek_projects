public class Product {
    private int id;
    private String name;
    private String category;
    private double price;

    //constructor
    public Product(int id, String name, String category, double price){
        this.id=id;
        this.name=name;
        this.category=category;
        this.price=price;
    }
    
    //setters
    public void setId(int id){
        this.id=id;
    }
    public void setName(String name){
        this.name=name;
    }
    public void setCategory(String category){
        this.category=category;
    }
    public void setPrice(double price){
        this.price=price;
    }

    //getters
    public int getId(){
        return id;
    }
    public String getName(){
        return name;
    }
    public String getCategory(){
        return category;
    }
    public double getPrice(){
        return price;
    }
    
    //method that puts all info together into a string for safe management
    @Override
    public String toString(){
        return "   "+getId()+"   |   "+getName()+"   |   "+getCategory()+"   |   "+getPrice();
    }
}