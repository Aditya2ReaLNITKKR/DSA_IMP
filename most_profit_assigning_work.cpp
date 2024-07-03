#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int high=difficulty.size()-1;
        int low=0;
        int  size=worker.size();
        priority_queue<pair<int,int>>pq;
        priority_queue<int>labour;
        for(int i=0;i<high+1;i++){
            pq.push({profit[i],difficulty[i]});
        }
        for(int i=0;i<worker.size();i++){
            labour.push(worker[i]);
        }
        int profit_curr=0;
        while(!labour.empty()){
            auto front=labour.top();
            labour.pop();
            while(pq.top().second>front){
                pq.pop();
            }
            profit_curr+=pq.top().first;
        }
        return profit_curr;


    }
};