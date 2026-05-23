#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n),pos(n+1);

    for(int i=0;i<n;i++){
        cin>>a[i];
        pos[a[i]]=i;
    }


    int rund=1;
    for(int i=2;i<=n;i++){
        if(pos[i]<pos[i-1]) rund++;
    }
    cout<<rund;
    return 0;
}
