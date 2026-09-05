#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        int n = s.length();
        for(int i = 0;i<n;i++){
            if(isupper(s[i]))
                s[i]=tolower(s[i]);
        }
        return s;
    }
};