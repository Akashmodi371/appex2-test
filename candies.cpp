#include<bits/stdc++.h>
using namespace std;

int main(){
    long int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            v.push_back(t);
        }
        sort(v.begin(),v.end());
        int min=v[0];
        int cnt=0;
        for(int i=0;i<n;i++){
            if(v[i]==min) continue;
            else if(v[i]>min){
                cnt+=v[i]-min;
            }
            else continue;
        }
        cout<<cnt<<"\n"; 
    }
}