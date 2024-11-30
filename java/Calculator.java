public class Calculator {
    public int add(int a, int b){
        return a+b;
    }
    public int add(int a, int b, int c){
        return a+b+c;
    }
    public double add(double a, double b){
        return a+b;
    }
    public int add(int[] a){
        int s=0;
        for(int i=0;i<a.length;i++){
            s=s+a[i];
        }
        return s;
    }
    public static void main(String[] args) {
        Calculator calc=new Calculator();
        System.out.println(calc.add(2,3));
        System.out.println(calc.add(2,3,4));
        System.out.println(calc.add(2.5,3.5));
        int[] arr={3,4,5,6};
        System.out.println(calc.add(arr));
    }
}
