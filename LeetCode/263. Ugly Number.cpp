#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isUgly(int n) {
        if(n<=0)
            return false;
        int div[5] = {2,3,5,7,11};
        int i = 0;
        while(n>1){
            if(n%div[i]==0){
                n=n/div[i];
            }else{
                i++;
            }
            if(i>2){
                return false;
            }
        }
        return true;
    }
};