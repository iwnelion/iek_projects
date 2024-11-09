public class arrayStuff{
    public static void main(String[] args) {
        int[] array={3,8,9,10,3,4,12,9,8,10};
        int i;
        System.out.println("plithos stoixeion: "+array.length);
        int x=12;
        for(i=0;i<array.length;i++){
            if(array[i]==x){
                System.out.println("vrethike stin thesi "+i);
                break;
            }
        }
        if(i==11){
            System.out.println("den vrethike");
        }
    }
}