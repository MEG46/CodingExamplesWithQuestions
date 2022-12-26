import java.lang.Math;
public class Example20 {
    public static void main(String[] args) {
    int arr[]=new int[20];
    int i,j=0,temp,c,k,count=0,flag=0;
    float avg=0;
    int d=20;
    for(i=0;i<20;i++){
        arr[i]=((int)(Math.random()*10000))%50;
    }
    System.out.println("The Array:\n");
    for(i=0;i<d;i++){
        System.out.print(arr[i] + "\t");
    }
    for(i=0;i<d;i++){
        avg+=arr[i];
    }
    avg=avg/d;
    
    System.out.println("\n\nThe Length Of The Array : " + d +"\n");
    System.out.println("The Average Of The Array Numbers : " + avg + "\n");
    
    System.out.println("\n\nThe Numbers That Bigger Than The Length Of The Array :\n");
    for(i=0;i<d;i++){
       if(arr[i]>d){
            System.out.print(arr[i] + "\t");
       } 
    }
    System.out.println("\n\nThe Numbers That Bigger Than The Average Of The Array :\n");
    for(i=0;i<d;i++){
       if((float)arr[i]>avg){
          System.out.print(arr[i] + "\t");
       } 
    }
    System.out.println("\n\nThe Numbers That Bigger Than Both :\n");
    for(i=0;i<d;i++){
       if(((float)arr[i]>avg)&&(arr[i]>d)){
          System.out.print(arr[i] + "\t");
       } 
    }
}
}