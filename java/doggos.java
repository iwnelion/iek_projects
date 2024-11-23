class doggos {
    public static void main(String[] args) {
        Dog piko=new Dog();
        piko.name="Piko";
        piko.ilikia=3;
        piko.breed="rottweiller";

        Dog lassie;
        lassie=new Dog(1,"Lassie","Colley",23);
        lassie.ilikia=10;
        lassie.bark();

        System.out.println("name: "+piko.name+" age: "+piko.ilikia+" breed: "+piko.breed);
        System.out.println("name: "+lassie.name+" age: "+lassie.ilikia+" breed: "+lassie.breed);
    }
}
