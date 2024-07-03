#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
         vector<int>adj[n];
         for(int i=0;i<roads.size();i++){
            adj[roads[i][0]].push_back(roads[i][1]);
            adj[roads[i][1]].push_back(roads[i][0]);
         }
         vector<pair<int,int>>node_val;
         for(int i=0;i<n;i++){
            node_val.push_back({adj[i].size(),i});
         }
         sort(begin(node_val),end(node_val),greater<pair<int,int>>());
         unordered_map<int,int>mp;
         int cnt=n;
         for(auto i:node_val){
            mp[i.second]=cnt;
            cnt--;
         }
         long long res=0;
         for(int i=0;i<roads.size();i++){
            res+=(mp[roads[i][0]]+mp[roads[i][1]]);

         }
         return res;
    }
};