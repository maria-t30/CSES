#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<long long> ar(n);

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    long long current_sum=ar[0];
    long long max_sum=ar[0];
    for(int i=1;i<n;i++){
        current_sum=max(ar[i],current_sum + ar[i]);
        max_sum=max(max_sum,current_sum);
    }
    cout<<max_sum;
    return 0;
}
