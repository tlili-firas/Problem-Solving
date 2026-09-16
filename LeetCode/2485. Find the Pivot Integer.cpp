#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int suiteArith(int n){
        return ((n+1)*n)/2;
    }
    int pivotInteger(int n) {
        if(n==1){
            return 1;
        }
        int ans = 1;
        while(ans<n){
            ans++;
            if(suiteArith(ans)==(suiteArith(n)-suiteArith(ans-1))){
                return ans;
            }
        }
        return -1;
    }
};