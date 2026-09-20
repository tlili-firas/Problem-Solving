#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverseDegree(string s) {
        int RD = 0;

        for(int i =0;i<s.length();i++){
            int alphaPos = s[i]-'a';
            int revAlphaPos = 26 - alphaPos;
            RD += revAlphaPos * (i+1);
        }
        return RD;
    }
};