public class arrayThings {
    public static void main(String[] args) {
        int[] nums={10,30,45,12,7,13,28,5,17,20};
        int i;
        for(i=0;i<nums.length;i++){
            System.out.println(nums[i]);
        }
        int min=nums[0];
        for(i=1;i<nums.length;i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }
        System.out.println("min: "+min);

        int max=nums[0];
        for(i=1;i<nums.length;i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        System.out.println("max: "+max);

        int sum=0;
        for(i=0;i<nums.length;i++){
            sum+=nums[i];
        }
        System.out.println("sum: "+sum);

        double avg=(double)sum/nums.length;
        System.out.println("avg: "+avg);
    }
}
