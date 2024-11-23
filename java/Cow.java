public class Cow {
    int weight;
    int hunger;
    Cow(){
        weight=500;
        hunger=10;
    }
    Cow(int weight, int hunger){
        this.weight=weight;
        this.hunger=hunger;
    }
    void express(){
        if (hunger>5){
            System.out.println("Mooooooooooo!");
        }else{
            System.out.println("Mooooo...");
        }
    }
    void eat(){
        hunger-=2;
        System.out.println(hunger);
    }
    void eat(int food){
        hunger-=food;
        System.out.println("molly eats "+food);
    }
    void peinaei(){
        this.hunger+=2;
        System.out.println("molly is hungry");
        System.out.println("molly's hunger: "+this.hunger);
    }
}
