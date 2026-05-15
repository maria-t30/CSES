#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,x;
    cin>>n>>x;
    map<long long int,long long int> arr;


    for(long long int i=1;i<=n;i++){
        long long int num;
        cin>>num;

        if(arr.find(x-num) != arr.end()){
            cout<<arr[x-num]<<" "<<i<<endl;
            return 0;
        }
        else arr[num]=i;

    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
