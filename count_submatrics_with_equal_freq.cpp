#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<pair<int,int>>>prefix(r,vector<pair<int,int>>(c,{0,0}));
        int cnt=0;
       
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                prefix[i][j].first=(i>=0?prefix[i-1][j].first:0)+(j>=0 ?prefix[i][j-1].first:0)-((i>=0 && j>=0 )? prefix[i-1][j-1].first:0)+(grid[i][j]=='X');
                prefix[i][j].second=(i>=0?prefix[i-1][j].second:0)+(j>=0 ?prefix[i][j-1].second:0)-((i>=0 && j>=0 )? prefix[i-1][j-1].second:0)+(grid[i][j]=='Y');
                // prefix[i][j].second=prefix[i-1][j].second+prefix[i][j-1].second-prefix[i-1][j-1].second;
                if(  prefix[i][j].first==prefix[i][j].second){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};