#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int len)
{
	int st=0,temp,end=0;
	end=len-1;
	while (st<end)
	{
		temp =arr[st];
		arr[st]=arr[end];
		arr[end]=temp;
		end--;
		st++;
	}
	
	/*cout<<"Reverse of Array:\t";
	for (i=0;i<len;i++)
	{
		cout<<arr[i]<<" ";
	}*/
}

void reverse_print(int arr[],int len)
{
	int i;
	cout<<"Reverse of Array:\t";
	for (i=0;i<len;i++)
	{
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
	reverse(arr,len);
	reverse_print(arr,len);
	return 0;
}