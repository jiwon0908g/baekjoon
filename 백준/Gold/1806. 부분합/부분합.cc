#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n>>m;
    vector<int> arr(n+1);
    for(int i=0;i<n;i++) {
        cin >>arr[i];
    }
    int s=0;
    int e=0;
    int sum=arr[0];
    int mini = 1000000;

    while(s<n&&e<n) {
        if(sum<m) {
            e++;
            sum+=arr[e];
        }
        else if(sum>=m) {
            if(e>=s&&e-s<mini) {
                mini = e-s+1;
            }
            sum-=arr[s];
            s++;
        }
    }
    if(mini==1000000) cout << 0;
    else cout << mini;

    return 0;
}
