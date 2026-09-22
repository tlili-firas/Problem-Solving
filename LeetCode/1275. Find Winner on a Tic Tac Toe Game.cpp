#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int game[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                game[i][j]=0;
            }
        }
        int u = 1;
        for(int i = 0;i<moves.size();i++){
            int x = moves[i][0];
            int y = moves[i][1];
            game[x][y]=u;
            u=-u;
        }
        bool a1 = game[0][0]==1&&game[0][1]==1&&game[0][2]==1;
        bool a2 = game[1][0]==1&&game[1][1]==1&&game[1][2]==1;
        bool a3 = game[2][0]==1&&game[2][1]==1&&game[2][2]==1;

        bool a4 = game[0][0]==1&&game[1][0]==1&&game[2][0]==1;
        bool a5 = game[0][1]==1&&game[1][1]==1&&game[2][1]==1;
        bool a6 = game[0][2]==1&&game[1][2]==1&&game[2][2]==1;

        bool a7 = game[0][0]==1&&game[1][1]==1&&game[2][2]==1;
        bool a8 = game[2][0]==1&&game[1][1]==1&&game[0][2]==1;
        
        bool b1 = game[0][0]==-1&&game[0][1]==-1&&game[0][2]==-1;
        bool b2 = game[1][0]==-1&&game[1][1]==-1&&game[1][2]==-1;
        bool b3 = game[2][0]==-1&&game[2][1]==-1&&game[2][2]==-1;

        bool b4 = game[0][0]==-1&&game[1][0]==-1&&game[2][0]==-1;
        bool b5 = game[0][1]==-1&&game[1][1]==-1&&game[2][1]==-1;
        bool b6 = game[0][2]==-1&&game[1][2]==-1&&game[2][2]==-1;

        bool b7 = game[0][0]==-1&&game[1][1]==-1&&game[2][2]==-1;
        bool b8 = game[2][0]==-1&&game[1][1]==-1&&game[0][2]==-1;

        bool A = (a1||a2||a3||a4||a5||a6||a7||a8);
        bool B = (b1||b2||b3||b4||b5||b6||b7||b8);
        if(A){
            return "A";
        }else if (B){
            return "B";
        }else if(moves.size()==9){
            return "Draw";
        }else{
            return "Pending";
        }
    }
};