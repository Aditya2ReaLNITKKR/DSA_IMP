#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(int i,vector<int>&reward,int x,vector<int>&visi){
        if(i>=reward.size())return x;
        int left=INT_MIN,right=INT_MIN;
        if(reward[i]>x && !visi[i]){
            x+=reward[i];
            visi[i]=true;
            left= solve(i+1,reward,x,visi);
            visi[i]=false;
           x-=reward[i];
        }
        right=solve(i+1,reward,x,visi);
        return max(left,right);
    }
    int maxTotalReward(vector<int>& rewardValues) {
        vector<int>visi(rewardValues.size(),false);
        sort(rewardValues.begin(),rewardValues.end());
        return solve(0,rewardValues,0,visi);
    }
};