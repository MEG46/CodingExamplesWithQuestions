import java.lang.Math;
public class Example13 {
    public static void main(String[] args) {
    int ar[]=new int[20];
    int i,j=0,temp,count=0;
    for(i=0;i<20;i++){
        ar[i]=((int)(Math.random()*10000))%20;
    }
    System.out.println("The String:\n");
    for(i=0;i<20;i++){
      System.out.print(ar[i] + "\t");
    }
    while(j<20){
        for(i=0;i<19;i++){
        if(ar[i]>ar[i+1]){
            temp=ar[i+1];
            ar[i+1]=ar[i];
            ar[i]=temp;
        }  
      
    }
     j++;
    }
    System.out.println("\n\nConsecutive Numbers :\n");
    for(i=0;i<19;i++){
        if((ar[i]==(ar[i+1]+1))||(ar[i]==(ar[i+1]-1))){
            System.out.println(ar[i] + "\t" + ar[i+1]);
            count++;
        }
    }
   System.out.print("\n\nNumber Of Consecutivity : " + count);
    }
}
