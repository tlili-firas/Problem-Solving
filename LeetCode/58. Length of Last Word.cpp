#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int test = s.find(' ');
        if(test==string::npos){
            return s.length();
        }
        else{
            int lastDigit = s.length()-1;
            while(s[lastDigit]==' '){
                lastDigit--;
            }
            while(lastDigit>=0 && s[lastDigit]!=' '){
                ans++;
                lastDigit--;
            }
        }
        return ans;
    }
};