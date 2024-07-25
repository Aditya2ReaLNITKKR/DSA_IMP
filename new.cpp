#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        string first,second;
        cin>>first>>second;
        char temp=second[0];
        second[0]=first[0];
        first[0]=temp;
        cout<<first<<second<<endl;
    }
}