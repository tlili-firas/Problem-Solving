#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfNumber(int n){
        int size = 0;
        while(n>0){
            n=n/10;
            size++;
        }
        return size;
    }
    int countCommas(int n) {
        int size = lengthOfNumber(n);
        int ans =0;
        if(size<4){
            return 0;
        }else{
            return n-1000+1;
        }
    }
};