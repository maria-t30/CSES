#include<bits/stdc++.h>
using namespace std;

void fun(){
    int n,k,m;
    cin>>n>>m>>k;

    vector <int> ap(n),sz(m);
    for(int i=0;i<n;i++){
        cin>>ap[i];
    }
    for(int i=0;i<m;i++){
        cin>>sz[i];
    }
    sort(ap.begin(),ap.end());
    sort(sz.begin(),sz.end());

    int total=0,i=0,j=0;
    while(i<n && j<m){
        if(sz[j]<ap[i]-k) j++;
        else if(sz[j]>ap[i]+k) i++;
        else{
            total++;
            i++;
            j++;
        }

    }
    cout<<total<<endl;
}


int main(){
    int t=1;
    fun();

    return 0;
}
