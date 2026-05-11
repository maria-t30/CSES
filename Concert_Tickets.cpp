#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    multiset<int> p;

    for(int i=0;i<n;i++){
        int pa;
        cin>>pa;
        p.insert(pa);
    }

    for(int i=0;i<m;i++){
        int th;
        cin>>th;

        auto it=p.upper_bound(th);

        if(it==p.begin()){
                cout<<-1<<endl;
        }
        else{
            it--;
            cout<<*it<<endl;
            p.erase(it);
        }
    }
}
