#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int prev=-1;
  int dp[501][26][501];
  int solve(int i,vector<int>&nums,int k){
    if( i>=nums.size()){
        return 0;
    }
    if(dp[i][k][prev+1]!=-1)return dp[i][k][prev+1];
       int left=INT_MIN,middle=INT_MIN;
    if(prev!=-1 && k>0 && nums[prev]!=nums[i]){
        int temp=prev;
        prev=i;
         left=1+solve(i+1,nums,k-1);
        prev=temp;
    }else if(prev==-1 || (  nums[prev]==nums[i])){
         int temp=prev;
        prev=i;
        left=1+solve(i+1,nums,k);
        prev=temp;
    }
       
    
    int right=solve(i+1,nums,k);
    return dp[i][k][prev+1]=max(left,right);
   }
    int maximumLength(vector<int>& nums, int k) {
         memset(dp, -1, sizeof(dp));
        return solve(0,nums,k);
    }
};