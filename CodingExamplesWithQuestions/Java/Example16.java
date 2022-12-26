import java.lang.Math;
public class Example16 {
    public static void main(String[] args) {
     int arr[]=new int[20];
     int arr1[]=new int[20];
     int i,j=0,temp;
    for(i=0;i<20;i++){
        arr[i]=((int)(Math.random()*10000))%100;
    }
    for(i=0;i<20;i++){
        arr1[i]=((int)(Math.random()*15230))%100;
    }
    System.out.println("First Array Before The Sort:\n");
    for(i=0;i<20;i++){
        System.out.print(arr[i]+"\t");
    }
    System.out.println("\n\nSecond Array Before The Sort:\n");
    for(i=0;i<20;i++){
        System.out.print(arr1[i]+"\t");
    }
    while(j<20){
    for(i=0;i<19;i++){
        if(arr[i]>arr[i+1]){
           temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
        }
    }
    j++;
    }
    j=0;
    while(j<20){
    for(i=0;i<19;i++){
        if(arr1[i]>arr1[i+1]){
           temp=arr1[i];
           arr1[i]=arr1[i+1];
           arr1[i+1]=temp;
        }
    }
    j++;
    }
    int arr2[]=new int[40];
    for(i=0;i<40;i++){
    if(i<20){
        arr2[i]=arr[i];
    }else{
        arr2[i]=arr1[i-20];
    }
    }
    System.out.println("\n\nThe Merged Array of Two Arrays Before The Sort:\n");
    for(i=0;i<40;i++){
        System.out.print(arr2[i]+"\t");
    }
    j=0;
    while(j<40){
    for(i=0;i<39;i++){
        if(arr2[i]>arr2[i+1]){
           temp=arr2[i];
           arr2[i]=arr2[i+1];
           arr2[i+1]=temp;
        }
    }
    j++;
    }
    System.out.println("\n\nFirst Array After The Sort:\n");
    for(i=0;i<20;i++){
        System.out.print(arr[i]+"\t");
    }
    System.out.println("\n\nSecond Array After The Sort:\n");
    for(i=0;i<20;i++){
        System.out.print(arr1[i]+"\t");
    }
    System.out.println("\n\nThe Merged Array of Two Arrays After The Sort:\n");
    for(i=0;i<40;i++){
        System.out.print(arr2[i]+"\t");
    }
    }
}
