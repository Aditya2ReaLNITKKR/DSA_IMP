#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;


class Solution {
public:
  
    int solve(int i,int prev,vector<int>&power){
        if(i>=power.size())return 0;
        int left=INT_MIN,right=INT_MIN;
        if(power[i]+1 !=prev && power[i]+2!=prev){
            left=power[i]+solve(i+1,power[i],power);
        }
        right=solve(i+1,prev,power);
        return max(left,right);
    }
    long long maximumTotalDamage(vector<int>& power) {
         sort(begin(power),end(power));
        return solve(0,-2,power);
    }
};