public class Rectangle{
    private double length;
    private double width;

    public Rectangle(){
        this.length=1.0;
        this.width=1.0;
    }
    public Rectangle(double side){
        this.length=side;
        this.width=side;
    }
    public Rectangle(double length, double width){
        this.length=length;
        this.width=width;
    }
    public double calculateArea(){
        return this.length*this.width;
    }
    public void display(){
        System.out.println("Length: "+this.length+", Width: "+this.width);
    }

    public static void main(String[] args) {
        Rectangle rect=new Rectangle(5.5,4.4);
        System.out.println(rect.calculateArea());
    }
}