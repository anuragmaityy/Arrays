//Merge 2 sorted arrays without using extra space

#include<bits/stdc++.h>
using namespace std;

int mergearray(int arr1[], int m, int arr2[], int n){
	int arr3[m+n];
	int i,c=0;
	for (i=0;i<m;i++){
		arr3[c++]=arr1[i];
	}
	for (i=0;i<n;i++){
		arr3[c++]=arr2[i];
	}
	sort(arr3,arr3+m+n);
	int k=0;
	for (i=0;i<m;i++)
	{
		arr1[i]=arr3[k++];
	}
	for (i=0;i<n;i++)
	{
		arr2[i]=arr3[k++];
	}
	cout<<"\nAfter Merge: ";
	for(i=0;i<m;i++)
	{
		cout<<arr1[i]<<" ";
	}
	for(i=0;i<n;i++)
	{
		cout<<arr2[i]<<" ";
	}
	return 0;
}

int main(){
	int m,i;
	cout<<"Enter the 1st array length:";
	cin>>m;
	int arr1[m];
	cout<<"Enter the 1st array elements:";
	for (i=0;i<m;i++){
		cin>>arr1[i];
	}
	int n;
	cout<<"Enter the 2nd array length:";
	cin>>n;
	int arr2[n];
	cout<<"Enter the 2nd array elements:";
	for (i=0;i<n;i++){
		cin>>arr2[i];
	}
	cout<<"Before Merge: ";
	for(i=0;i<m;i++)
	{
		cout<<arr1[i]<<" ";
	}
	for(i=0;i<n;i++)
	{
		cout<<arr2[i]<<" ";
	}
	mergearray(arr1,m,arr2,n);
	return 0;
}