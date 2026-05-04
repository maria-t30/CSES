#include<bits/stdc++.h>;
using namespace std;

#define nl "\n"
#define spa " "
#define ve vector<int>
#define vve vector<vector<int>>
#define vp vector<pair<int,int>>
#define pa pair<int ,int>
#define len(x) int((x).size())

vp offsets = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};

bool is_valid(int i,int j,int n){
    return i>=0 && i<n && j>=0 && j<n;
}

void bfs(vve& grid,pa start){
    int n = len(grid);
    queue<pa>q;
    q.push(start);
    int u = start.first;
    int v = start.second;
    grid[u][v] =0;

    while(!q.empty()){
        u=q.front().first;
        v=q.front().second;
        q.pop();

        for(auto p: offsets){
            int i=u+p.first;
            int j=v+p.second;

            if(is_valid(i,j,n) && grid[i][j]== -1){
                grid[i][j] = grid[u][v] + 1;
                q.push({i,j});
            }
        }
    }


}

void slv(){
    int n;
    cin>>n;

    vve grid(n,ve(n,-1));
    bfs(grid,{0,0});
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<grid[i][j]<<spa;
        }
        cout<<nl;
    }

}
int main(){
int t=1;

slv();
return 0;


}
