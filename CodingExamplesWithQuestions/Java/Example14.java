import java.lang.Math;
import java.util.Scanner;
public class Example14 {
public static int isKPartitionPossibleRec(int arr[], int subsetSum[], int taken[],int subset, int K, int N, int curIdx, int limitIdx)
{
	if (subsetSum[curIdx] == subset)
	{
		if (curIdx == K - 2)
			return 1;

		return isKPartitionPossibleRec(arr, subsetSum, taken, subset,
											K, N, curIdx + 1, N - 1);
	}

	for (int i = limitIdx; i >= 0; i--)
	{
		if (taken[i]==1)
			continue;
		int tmp = subsetSum[curIdx] + arr[i];

		if (tmp <= subset)
		{
			taken[i] = 1;
			subsetSum[curIdx] += arr[i];
			int nxt = isKPartitionPossibleRec(arr, subsetSum, taken,
											subset, K, N, curIdx, i - 1);

			taken[i] = 0;
			subsetSum[curIdx] -= arr[i];
			if (nxt==1)
				return 1;
		}
	}
	return 0;
}

public static int isKPartitionPossible(int arr[], int N, int K)
{
	if (K == 1)
		return 1;

	if (N < K)
		return 0;

	int sum = 0;
	for (int i = 0; i < N; i++)
		sum += arr[i];
	if (sum % K != 0)
		return 0;

	int subset = sum / K;
	int subsetSum[]=new int[K];
	int taken[]=new int[N];

	for (int i = 0; i < K; i++)
		subsetSum[i] = 0;

	for (int i = 0; i < N; i++)
		taken[i] = 0;

	subsetSum[0] = arr[N - 1];
	taken[N - 1] = 1;

	return isKPartitionPossibleRec(arr, subsetSum, taken,
									subset, K, N, 0, N - 1);
}
    public static void main(String[] args) {
    Scanner input=new Scanner(System.in);
    int num,K,i;
   System.out.print("Please enter how many elements do you want to create in your array : ");
    num=input.nextInt();
    System.out.println();
    int arr[]=new int[num];
    
    for(i=0;i<num;i++){
        System.out.print((i+1) + ".Element : ");
        arr[i]=input.nextInt();
        System.out.println();
    }
    System.out.println("The Array:\n");
    for(i=0;i<num;i++){
        System.out.print(arr[i] + "\t");
    }
     System.out.print("\nPlease enter how many parts do you want to divide your array : ");
    K=input.nextInt();
	System.out.println();
	int N = num;

	if (isKPartitionPossible(arr, N, K)==1)
		System.out.println("Partitions into equal sum is possible.");
	else
		System.out.println("Partitions into equal sum is not possible.");
    }
}