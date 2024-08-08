#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k,a,b;
    cin >>n>>k;
    vector<vector<int>> arr(n+1, vector<int> (n+1));
    vector<int> visit(n+1);

    for(int i=0;i<k;i++) {
        cin>>a>>b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    queue <int> q;

    int cnt =0;
    q.push(1);
    visit[1] = 1;

    while(!q.empty()) {
        for(int i=1;i<=n;i++) {
            if(arr[q.front()][i]==1&&visit[i]==0) {
                q.push(i);
                visit[i] = 1;
                cnt++;
            }
        }
        q.pop();
    }

    cout<<cnt;

    return 0;
}
