#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int cur_cus=0,max_cus=0;

    vector<pair<int,int>> alc;
    for(int i=0;i<n;i++){
        int st,et;
        cin>>st>>et;
        alc.push_back({st,1});
        alc.push_back({et,-1});
    }
    sort(alc.begin(),alc.end());

    for(int i=0;i<2*n;i++){
        cur_cus+=alc[i].second;
        max_cus=max(cur_cus,max_cus);
    }
    cout<<max_cus<<endl;
    return 0;

}
