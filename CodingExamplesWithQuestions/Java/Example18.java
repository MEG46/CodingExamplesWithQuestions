import java.lang.Math;
public class Example18 {
    public static void main(String[] args) {
    int arr[]=new int[20];
    int i,j=0,temp,count;
    for(i=0;i<20;i++){
        arr[i]=((int)(Math.random()*10000))%20;
    }
    System.out.println("The Array:\n");
    for(i=0;i<20;i++){
        System.out.print(arr[i] + "\t");
    }
    System.out.println("\n\nThe Numbers that passing once in the array :\n");
    while(j<20){
        count=0;
        temp=arr[j];
        for(i=0;i<20;i++){
            if(temp==arr[i]){
                count++;
            }
		}
		if(count==1){
		    System.out.print(arr[j] + "\t");
		}
    j++;
}
    }
}