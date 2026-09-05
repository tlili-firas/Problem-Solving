#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0 ;i<n;i++){
			cin>>arr[i];
		}
		int right = 0;
		int left = n-1;
		int oneRight = false;
		int oneLeft = false;
		
		while((right<n-1) && (!oneRight)){
			if(arr[right]==1 || arr[right]==-1){
				arr[right] = 1;
				oneRight=true;
			}
			right++;
		}
		while((left>=0) && (!oneLeft)){
			if(arr[left]==1 || arr[left]==-1){
				arr[left] = 1;
				oneLeft=true;
			}
			left--;
		}
		for(int i = 0 ; i<n ;i++){
			if(arr[i]==-1){
				arr[i]=0;
			}
		}
		
		for(int i = 0 ;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}