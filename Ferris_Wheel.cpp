#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    while(t--){

    int n,x;
    cin>>n>>x;
    vector <int> wt(n);

    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    sort(wt.begin(),wt.end());

    int i=0,j=n-1,ccount=0;
    while(i<=j){
        if(i!=j){
            if(wt[i]+wt[j]<=x){
                i++;
                j--;
            }
            else j--;
        }
        else{
            i++;
            j--;
        }
        ccount++;
    }
    cout<<ccount<<" ";
    }
    return 0;

}
