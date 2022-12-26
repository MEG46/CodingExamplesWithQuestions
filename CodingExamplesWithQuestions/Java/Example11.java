import java.lang.Math;
import java.util.Scanner;
public class Example11 {
    public static void main(String[] args) {
    Scanner input=new Scanner(System.in);
    int ar[]=new int[20];
    int i,j=0,temp,num;
    for(i=0;i<20;i++){
        ar[i]=((int)(Math.random()*10000))%40;
    }
    System.out.println("The Array:");
    for(i=0;i<20;i++){
        System.out.print(ar[i]+"\t");
    }
    while(j<20){
    for(i=0;i<19;i++){
        if(ar[i]>ar[i+1]){
            temp=ar[i];
            ar[i]=ar[i+1];
            ar[i+1]=temp;
        }
    }
    j++;
    }
    System.out.print("\nEnter the th biggest number in the array : ");
    num=input.nextInt();
    System.out.println("\n"+num+". Biggest Number In The Array : "+ar[20-num]);
    }
}
