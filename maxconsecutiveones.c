#include<stdio.h>
#include<stdlib.h>

int findMaxConsecutiveOnes(int nums[], int numsSize){

    int i,j,c=0,n=0;
    n=0;
    for (i=0;i<numsSize; i++){
        c=0;
        for (j=i;j<numsSize;j++){
            if (nums[j]==1)
            {
                c++;
            }
        else
            break;
        }
        if (c>n)
            n=c;
    }
    printf("MAx Consecutive ones:%d",n);
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
    findMaxConsecutiveOnes(nums, len);
    return 0;
}