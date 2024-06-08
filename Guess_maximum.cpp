#include<bits/stdc++.h>
using namespace std;

int compute(vector<int>&v){
    
    int mini=INT_MAX;
    for(int i=0;i<v.size()-1;i++){
        int maxi=v[i];
        for(int j=i+1;j<v.size();j++){
            maxi=max(maxi,v[j]);
            mini=min(mini,maxi);
        }
        
    }
    return mini-1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
           arr.push_back(val);
        
        }
        cout<<compute(arr)<<endl;

    }
}