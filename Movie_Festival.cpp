#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<pair<int ,int>> t;
    for(int i=0;i<n;i++){
        int s_time,e_time;
        cin>>s_time>>e_time;
        t.push_back({e_time,s_time});
    }

    sort(t.begin(),t.end());

    int pe_time=t[0].first;
    int ccount=1;
    for(int i=0;i<n;i++){
        if(t[i].second>=pe_time){
            ccount++;
            pe_time=t[i].first;
        }
    }
    cout<<ccount<<endl;


}
