#include<bits/stdc++.h>
using namespace std;

int getpairscount(int arr[], int len, int k){
	int i,s=0,count;
	for (i=0;i<len;i++){
		s=0;
		s+=arr[i]+arr[i+1];
		if (s==k)
		count++;
	}
	return count;
}

int main()
{
	int len,i,k;
	cout<<"Enter the array length:";
	cin>>len;
	int arr[len];
	cout<<"Enter the value of k:";
	cin>>k;
	cout<<"Enter the array elements:";
	for (i=0;i<len;i++){
		cin>>arr[i];
	}
	cout<<"No. of pairs with given sum: "<<getpairscount(arr,len,k);
	return 0;
}