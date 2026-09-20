#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfNumber(int n){
        int length =0;
        while(n>0){
            n=n/10;
            length++;
        }
        return length;
    }
    int smallestRepunitDivByK(int k) {
        if(k==1){
            return 1;
        }else if (k%2==0 || k%5==0){
            return -1;
        }else{
            int test = 1;
            while(test<k){
                test = (test*10)+1;
            }
            int length = lengthOfNumber(test);
            int remainder = test%k;
            while(remainder!=0){
                remainder = (remainder*10)+1;
                remainder = remainder%k;
                length++;
            }
            return length;
        }
        
    }
};