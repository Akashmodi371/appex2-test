#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string t;
        cin>>t;
        v.push_back(t);
    }
    int arr[26]={0};
    int x=0;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        string p=v[i];
        arr[p[0]-'a']+=1;
    }
    for(int i=0;i<26;i++){
        if(arr[i]%2==1){
            x=arr[i]-1;
            break;
        }
    }
    cout<<x;

}