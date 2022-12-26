// C program to check whether an array can be
// partitioned into K subsets of equal sum
#include <stdio.h>

int isKPartitionPossibleRec(int arr[], int subsetSum[], int taken[],int subset, int K, int N, int curIdx, int limitIdx)
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
		if (taken[i])
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
			if (nxt)
				return 1;
		}
	}
	return 0;
}

int isKPartitionPossible(int arr[], int N, int K)
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
	int subsetSum[K];
	int taken[N];

	for (int i = 0; i < K; i++)
		subsetSum[i] = 0;

	for (int i = 0; i < N; i++)
		taken[i] = 0;

	subsetSum[0] = arr[N - 1];
	taken[N - 1] = 1;

	return isKPartitionPossibleRec(arr, subsetSum, taken,
									subset, K, N, 0, N - 1);
}

int main()
{
    int num,K,i;
    printf("Please enter how many elements do you want to create in your array : ");
    scanf("%d",&num);
    int arr[num];
    
    for(i=0;i<num;i++){
        printf("%d.Element : ",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("The Array:\n");
    for(i=0;i<num;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nPlease enter how many parts do you want to divide your array : ");
    scanf("%d",&K);
	
	int N = sizeof(arr) / sizeof(arr[0]);

	if (isKPartitionPossible(arr, N, K)==1)
		printf("Partitions into equal sum is possible.\n");
	else
		printf("Partitions into equal sum is not possible.\n");
}
