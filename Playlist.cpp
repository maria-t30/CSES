#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;

    vector<long long> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    set<long long> s;
    int ans=0;
    int i=0,j=0;
    for(i=0;i<n;i++){
        while(s.count(ar[i])){
            s.erase(ar[j]);
            j++;
        }
        s.insert(ar[i]);
        ans=max(ans,i-j+1);
    }
    cout<<ans<<endl;
    return 0;
}
