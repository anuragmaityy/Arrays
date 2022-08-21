#include<bits/stdc++.h>
using namespace std;

void sortwithoutalgo(int arr[], int len)
{
	int zero=0, one=0, two=0, i;
	for (i=0;i<len;i++)
	{
		if (arr[i]==0)
			zero++;
		else if(arr[i]==1)
			one++;
		else
			two++;
	}
	if (zero)
	{
		for (i=0;i<zero;i++){
			arr[i]=0;
		}
	}
	if (one)
	{
		for (i=zero;i<(zero+one);i++){
			arr[i]=1;
		}
	}
	if (two)
	{
		for (i=(zero+one);i<(zero+one+two);i++){
			arr[i]=2;
		}
	}
}

void printarray(int arr[], int len)
{
	int i;
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
	sortwithoutalgo(arr,len);
	cout<<"sorted Array without algo: ";
	printarray(arr,len);
	return 0;
}