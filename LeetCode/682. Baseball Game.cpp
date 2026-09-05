#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans = 0;
        int n = operations.size();
        vector<int>scores;
        for(int i = 0 ;i<n ; i++){
            char op = operations[i][0];
            if(op=='C'){
                scores.pop_back();
            }else if(op=='D'){
                scores.push_back(scores.back()*2);
            }else if(op=='+'){
                int z = scores.size();
                scores.push_back(scores[z-1]+scores[z-2]);
            }else{
                scores.push_back(stoi(operations[i]));
            }
        }
        for(int i = 0 ;i<scores.size();i++){
            ans+=scores[i];
        }
        return ans;
    }
};