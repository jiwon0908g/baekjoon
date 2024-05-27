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
    int cnt=0;
    while(s<n&&e<n) {
        if(sum<m) {
            e++;
            sum+=arr[e];
        }
        else if(sum>m) {
            sum-=arr[s];
            s++;
        }
        else {
            cnt++;
            e++;
            sum+=arr[e];
        }
    }

    cout << cnt;

    return 0;
}
