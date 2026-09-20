#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSelfDividing(int n){
        int t = n;
        while(t>0){
            int x = t%10;
            t=t/10;
            if(x==0 || n%x!=0){
                return false;
            }
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i = left ; i<=right ; i++){
            if(isSelfDividing(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};