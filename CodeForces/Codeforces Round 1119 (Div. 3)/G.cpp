#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		cout<<0<<" ";
		for(int i = 1;i<n-1;i++){
			int operations;
			int diff = arr[i+1]-arr[i-1];
			if(diff>k){
				operations = diff-k;
				int newnumber = arr[i+1]-operations;
				if( ((i+2)<=(n-1))&&((arr[i+2]-newnumber)>k) ){
					operations++;
				}
				cout<<operations<<" ";
			}else{
				cout<<0<<" ";
			}
		}
		cout<<0<<endl;
	}
}