class Dog {
    //properties
    String name;
    int weight;
    String breed;
    int ilikia;

    Dog(){
        System.out.println("1os constructor");
    }

    Dog(int age, String name, String breed, int weight){
        System.out.println("2os constructor");
        this.breed=breed;
        this.ilikia=age;
        this.name=name;
        this.weight=weight;
    }

    //method
    public void bark(){
        System.out.println(this.name+" woof woof");
    }
}
