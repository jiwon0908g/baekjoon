#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,a,b;
    cin >> n>>m;
    vector<int> arr(n+2);
    vector<int> sum(n+2);
    for(int i=1;i<=n;i++) {
        cin >> arr[i];
    }
    sum[1] = arr[1];
    for(int i=2;i<=n;i++) {
        sum[i] = sum[i-1]+arr[i];
    }

    for(int i=0;i<m;i++) {
        cin >> a>> b;
        cout << sum[b]-sum[a-1]<<"\n";
    }


    return 0;
}
