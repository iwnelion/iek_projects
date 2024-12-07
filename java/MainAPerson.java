public class MainAPerson {
    public static void main(String[] args) {
        aPerson clyde=new aPerson();
        clyde.setName("Clyde");
        System.out.println(clyde.getName());

        aPerson alekos=new aPerson();
        alekos.setName("Alekos");
        System.out.println(alekos.getName());

        aPerson aleka=new aPerson();
        aleka.setName("Aleka");

        clyde.setFather((alekos));
        System.out.println("Clyde's father: "+clyde.getFather().getName());

        clyde.setMother(aleka);
        System.out.println("Clyde's mother: "+clyde.getMother().getName());
    }
}
