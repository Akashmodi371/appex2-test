#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        bool p=true;
        string s;
        cin>>s;
        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']+=1;
        }
        for(int i=0;i<26;i++){
            if(arr[i]==1 || arr[i]%2!=0){
                p=false;
                break;
            }
        }
        if(p){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}