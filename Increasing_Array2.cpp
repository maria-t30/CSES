#include<bits/stdc++.h>
using namespace std;

int main(){

long long int N;
cin>>N;
long long int arr[N], m_moves=0;
for(long long int i=0;i<N;i++){
 cin>>arr[i];
}
for(int i=1;i<N;i++){
    if(arr[i-1]>arr[i]){
        m_moves+=(arr[i-1]-arr[i]);
        arr[i]=arr[i-1];
    }
}
cout<<m_moves;
return 0;
}

