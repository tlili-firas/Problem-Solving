#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.push_back({1});
        for(int i = 1;i<numRows;i++){
            vector<int>v;
            if(i==1){
                v.push_back(1);
                v.push_back(1);
            }else{
                v.push_back(1);
                for(int j = 1 ;j<ans[i-1].size();j++){
                    v.push_back(ans[i-1][j]+ans[i-1][j-1]);
                }
                v.push_back(1);
            }
            ans.push_back(v);
        }

        return ans;
    }
};