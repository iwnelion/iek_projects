public class lesson1{
    // protected void First(){
    //     String[] lessons={"html","css","js"};
    //     for(int i=0; i<lessons.length; i++){
    //         System.out.println(lessons[i]);
    //     }
    // }
    protected void first(String[] lessons){
        for(int i=0; i<lessons.length; i++){
            System.out.println(lessons[i]);
        }
    }
    public static void main(String[] args){
        lesson1 l=new lesson1();
        // l.First();
        String[] lessons={"html","css","js"};
        l.first(lessons);
    }
}
