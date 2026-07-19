#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    multiset<int> tw;

    for(int i = 0; i < n; i++){
        int h;
        cin>>h;

        auto it = tw.upper_bound(h);

        if(it != tw.end()){
            tw.erase(it);
        }
        tw.insert(h);
    }

    cout<<tw.size();

    return 0;
}
