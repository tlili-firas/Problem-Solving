#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		int cp[3];
		cp[0]=0;//odd
		cp[1]=0;//2
		cp[2]=0;//4
			
		int arr[n];
		for(int i = 0;i<n;i++){
			int x;
			cin>>x;
			if(x%2!=0){
				cp[0]++;
			}else{
				if(x%4==0){
					cp[2]++;
				}else{
					cp[1]++;
				}
			}
			
		}
		int ans = cp[0];
		for(int i = 0 ; i<3;i++){
			if(cp[i]>ans)
				ans=cp[i];
		}
		cout<<ans<<endl;
	}
}