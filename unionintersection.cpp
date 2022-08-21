#include<bits/stdc++.h>
using namespace std;

int uni_inter(int arr[], int m, int arr1[], int n)
{
	int i,j,k=0;
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++){
			if (arr1[j]==arr[i])
			{
				k++;
			}
		}
	}
	cout<<"Total union elements: "<<m+n-k<<endl;
	cout<<"Total intersection elements: "<<k<<endl;
	return 0;
}

int main()
{
	int m,i;
	cout<<"Enter the 1st array length:";
	cin>>m;
	int arr[m];
	cout<<"Enter the 1st array elements:";
	for (i=0;i<m;i++){
		cin>>arr[i];
	}
	int n;
	cout<<"Enter the 2nd array length:";
	cin>>n;
	int arr1[n];
	cout<<"Enter the 2nd array elements:";
	for (i=0;i<n;i++){
		cin>>arr1[i];
	}
	uni_inter(arr,m,arr1,n);
	return 0;
}