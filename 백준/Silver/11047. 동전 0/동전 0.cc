#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n>>k;
    vector<int> arr(n);

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int cnt=0;

    for(int i=n-1;i>=0;i--) {
        if(arr[i]<=k) {
            cnt+=k/arr[i];
            k%=arr[i];
        }
    }

    cout << cnt;

    return 0;
}
