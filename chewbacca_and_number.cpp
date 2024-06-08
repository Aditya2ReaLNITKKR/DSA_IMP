#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    int f=s[0]-'0';
    if(f>4 && f!=9){
        s[0]='0'+9-f;
    }
    for(int i=1;i<s.length();i++){
        int ch=s[i]-'0';
        if(ch>4 ){
             s[i]='0'+9-ch;
             
        }
    }
    cout<<s<<endl;
}