#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int len){
	int i;
	int temp=arr[len-1];
	for (i=len-1;i>=0;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
	cout<<"After cyclical rotation:\t";
	for (i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
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
	rotate(arr,len);
	return 0;
}
