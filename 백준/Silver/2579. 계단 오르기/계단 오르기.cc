#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >>n;

    vector<int> arr(n);
    vector<int> dp(n);

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }


    dp[0] = arr[0];
    if(n>1) {
        dp[1] = arr[0]+arr[1];
            if(n>2) {
                dp[2] = max(arr[0]+arr[2],arr[1]+arr[2]);
            }
    }

    for(int i=3;i<n;i++) {
        dp[i] = max(arr[i]+arr[i-1]+dp[i-3], arr[i]+dp[i-2]);
    }

    cout << dp[n-1];


    return 0;
}
