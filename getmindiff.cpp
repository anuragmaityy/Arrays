#include<bits/stdc++.h>
using namespace std;

int getmindiff(int arr[], int n, int k){
	sort(arr,arr+n);
	int ans=arr[n-1]-arr[0];
	int small=arr[0]+k, large=arr[n-1]-k, i;
	for (i=0;i<n-1;i++){
		int minn=min(small, arr[i+1]-k);
		int maxx=max(large, arr[i]+k);
		if (minn<0) continue;
		ans=min(ans, maxx-minn);
	}
	return ans;
}

int main()
{
	int len,i,k;
	cout<<"Enter the array length:";
	cin>>len;
	cout<<"Enter the value of k:";
	cin>>k;
	int arr[len];
	cout<<"Enter the array elements:";
	for (i=0;i<len;i++){
		cin>>arr[i];
	}
	cout<<"Minimization of max difference between heights: "<<getmindiff(arr,len,k);
	return 0;
}

