import java.lang.Math;
public class Example17 {
    public static void main(String[] args) {
     int arr[]=new int[20];
     int i,j=0,temp,count1=0,count2=0,c=0;
    for(i=0;i<20;i++){
        arr[i]=((int)(Math.random()*10000))%20;
    }
    System.out.println("The Array:\n");
    for(i=0;i<20;i++){
        System.out.print(arr[i] + "\t");
    }
    while(j<20){
        count2=0;
        temp=arr[j];
        if(j==0){
        for(i=0;i<20;i++){
            if(arr[i]==temp){
                count1++;
            }
		}
		}else{
            for(i=0;i<20;i++){
               if(arr[i]==temp){
                count2++;
            } 
            }
        if(count1<count2){
           count1=count2; 
           c=j;
        }
        }
    j++;
}
 System.out.println("\n\nMedian : " + arr[c]);
 System.out.println("\nRepetition : " + count1);
    }
}