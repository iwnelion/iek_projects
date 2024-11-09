public class arrayOtherStuff {
    public static void main(String[] args) {
        int[] misthos={800,780,900,1100,950,1200};
        String[] names={"maria","nikos","tasos","lola","kostas","giannis"};
        int i;
        String onoma_anaz="lola";
        for(i=0;i<names.length;i++){
            if(names[i]==onoma_anaz){
                System.out.println("o "+names[i]+" brethike stin thesi "+i+" kai exei mistho "+misthos[i]);
                break;
            }
        }
        if(i==names.length){
            System.out.println("o "+onoma_anaz+" den brethike!!");
        }
    }
}