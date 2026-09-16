#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		bool quit = false;
		int n;
		cin>>n;
		int arr[i];
		for(int i =0;i<n;i++){
			cin>>arr[i];
		}
		int previous = -1, current;
		for(int i = 0;i<n;i++){
			int x = arr[i];
			if(x!=i+1){
				if(previous==-1){
					previous = arr[i];
					continue;
				}
				current = arr[i];
				if(previous<current){
					quit = true;
					break;
				}else{
					previous = current;
				}
			}
		}
		if(quit){
			cout<<"no"<<endl;
		}else
			cout<<"yes"<<endl;
	}
}