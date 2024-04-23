#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
class Solution {
public:
    void fillQueue(queue<string>q,string front,unordered_set<string>st){
        
        for(int i=0;i<4;i++){
            char ch=front[i];
            char in=(ch=='9')?'0':ch+1;
            front[i]=ch;
            if(st.find(front)!=st.end()){
                q.push(front);
            }
            char dec=(ch=='0')?'9':ch-1;
            front[i]=dec;
            if(st.find(front)!=st.end()){
                q.push(front);
            }
            front[i]=ch;
            
        }
    }
    int openLock(vector<string>& deadends, string target) {
        string ans="0000";
        unordered_set<string>st;
        queue<string>q;
        q.push(ans);
        int level=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                string front=q.front();
                q.pop();

                if(front==target){
                    return level;
                }
                fillQueue(q,front,st);
               level++;
            }
        }
    }
};