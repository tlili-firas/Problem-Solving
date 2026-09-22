#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool judgeCircle(string moves) {
        int h = 0 , v = 0;
        for(char c : moves){
            switch(c){
                case 'U':
                    v++;
                    break;
                case 'D':
                    v--;
                    break;
                case 'R':
                    h++;
                    break;
                case 'L':
                    h--;
                    break;
            }
        }
        return (h==0 && v==0);
    }
};