#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    vector<int> a(n+1);
    unordered_map<int, int> pos;
    pos[0]=0;
    pos[n+1]=n+1;

    for(int i=1;i<=n;i++){
        cin>>a[i];
        pos[a[i]]=i;
    }

    int rund=1;
    for(int i=2;i<=n;i++){
        if(pos[i]<pos[i-1]) rund++;
    }
    while(m--){
        int i,j;
        cin>>i>>j;
        if(i>j) swap(i,j);
        int x=a[i];
        int y=a[j];

        if(pos[x+1]>i && pos[x+1]<j) rund++;
        if(pos[x-1]>i && pos[x-1]<j) rund--;
        if(pos[y+1]>i && pos[y+1]<j) rund--;
        if(pos[y-1]>i && pos[y-1]<j) rund++;

        if(x==(y+1)) rund--;
        if(x==(y-1)) rund++;

        cout<<rund<<endl;

        swap(a[i],a[j]);
        pos[x]=j;
        pos[y]=i;
    }

    return 0;
}
