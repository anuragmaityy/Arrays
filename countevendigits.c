#include<stdio.h>
#include<stdlib.h>

void findNumbers(int nums[], int numssize){
	int i,c=0,e=0,temp;
	for (i=0;i<numssize;i++)
	{
		temp=nums[i];
		while (temp!=0){
			temp=temp/10;
			c++;
		}
		if (c%2==0)
		{
			e++;
		}
		c=0;
	}
	printf("Total even number of digits:%d",e);
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
	findNumbers(nums,len);
	return 0;
}