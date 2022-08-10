#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int sortedSquares(int num[], int numsize){
	int i=0,temp,j;
	for (i=0;i<numsize;i++)
	{
		num[i]=pow(num[i],2);
	}
	printf("Unsorted squares: ");
	for (i=0;i<numsize;i++)
	{
		printf("%d ",num[i]);
	}
	printf("/n");
	for (i=0;i<numsize;i++)
	{
		for (j=0;j<numsize-i-1;j++)
		{
			if (num[j]>num[j+1])
			{
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}
	printf("The sorted squares: ");
	for (i=0;i<numsize;i++)
	{
		printf("%d ",num[i]);
	}
	return 0;
}

int main()
{
	int len,i;
    printf("Enter the length of array:");
    scanf("%d",&len);
    int nums[len];
    printf("Enter the array elements:");
    for (i=0;i<len;i++)
    {
        scanf("%d",&nums[i]);
	}
	sortedSquares(nums,len);
	return 0;
}