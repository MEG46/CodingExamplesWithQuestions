import java.lang.Math;
class HelloWorld {
    public static void main(String[] args) {
    int arr[]=new int[20];
    int arr1[]=new int[20];
    int arr2[]=new int[20];
    int i;
    for(i=0;i<20;i++){
        arr[i]=((int)(Math.random()*10000))%40;
    }
    for(i=0;i<20;i++){
        arr1[i]=((int)(Math.random()*10000))%40;
    }
    for(i=0;i<20;i++){
        arr2[i]=arr[i]*arr1[i];
    }
    System.out.println("First Array:\n");
    for(i=0;i<20;i++){
        System.out.print(arr[i] + "\t");
    }
    System.out.println("\n\nSecond Array:\n");
    for(i=0;i<20;i++){
        System.out.print(arr1[i] + "\t");
    }
   System.out.println("\n\nMultiplication Of Two Arrays :\n");
    for(i=0;i<20;i++){
        System.out.print(arr2[i] + "\t");
    }
}
}