//Kadane's Algorithm

#include<bits/stdc++.h>
using namespace std;

int maxsubarraysum(int arr[], int len){
	int i,j;
	int max_sum=arr[0];	
	for (i=0;i<len;i++){
		int curr_max=0;
		for (j=i;j<len;j++){
			curr_max+=arr[j];
		}
		if (curr_max>max_sum)
			max_sum=curr_max;
	}
	return max_sum;
}

int main()
{
	int len,i;
	cout<<"Enter the array length:";
	cin>>len;
	int arr[len];
	cout<<"Enter the array elements:";
	for (i=0;i<len;i++){
		cin>>arr[i];
	}
	cout<<"Max subarray sum is: "<<maxsubarraysum(arr,len);
	return 0;
}