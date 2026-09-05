#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int ans = 0;
		int n,k;
		cin>>n>>k;
		string field;
		cin>>field;
		//extract farm
		//count number of ones
		//if number of ones == farm size => ans ++;
		int start = 0,finish=k;
		while(finish<=n){
			int ones = 0;
			for(int i = start;i<finish;i++){
				if(field[i]=='1'){
					ones++;
				}
			}
			if(ones==k){
				ans++;
			}
			start+=k;
			finish+=k;
		}
		
		cout<<ans<<endl;
	}
}