public class aPerson {
    private String name;
    private int age;
    private aPerson father;
    private aPerson mother;
    
    public void setName(String name) {
        this.name = name;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public void setFather(aPerson father) {
        this.father = father;
    }
    public void setMother(aPerson mother) {
        this.mother = mother;
    }

    public String getName() {
        return name;
    }
    public int getAge() {
        return age;
    }
    public aPerson getFather() {
        return father;
    }
    public aPerson getMother() {
        return mother;
    }
}
