#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int limit;
    int solve(int i,vector<int>nums,int prev,int cnt){
        if(cnt==limit){
            return 1;
        }
        if(i>=nums.size()) return 0;
        int left=0,right=0;
        if(prev!=nums[i])left=solve((i+1)%nums.size(),nums,nums[i],cnt+1);
         right=solve((i+1),nums,nums[i],1);
        return left+right;
    }
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        limit=k;
        return solve(0,colors,-1,0);
    }
};