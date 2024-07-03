#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   void dfs(vector<int>adj[],int par,int n,vector<int>&visi,vector<vector<int>>&ans){
        visi[n]=true;
       
        for(auto i:adj[n]){
            if(!visi[i]){
                 ans[par].push_back(i);
                 dfs(adj,par,i,visi,ans);
            }
            
        }

    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<vector<int>>ans(n,vector<int>());
        for(int i=0;i<n;i++){
            vector<int>visi(n,false);
            dfs(adj,i,i,visi,ans);
        }
        for(int i=0;i<n;i++){
            sort(begin(adj[i]),end(adj[i]));
        }
        return ans;
        
    }
};