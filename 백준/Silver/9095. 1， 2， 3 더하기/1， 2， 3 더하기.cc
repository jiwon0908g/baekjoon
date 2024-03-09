 #include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k,n;
    cin >> n;
    vector<int> dp(12);

    int cnt = 0;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i=4;i<=11;i++) {
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }

    for(int i=0;i<n;i++) {
        cin >> k;
        cout << dp[k] <<"\n";
    }

    return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int k,n;
//    cin >> n;
//    vector<int> dp(n+1);
//    vector<int> arr(n+1);
//
//    int cnt = 0;
//
//    dp[1] = 1;
//    dp[2] = 2;
//    dp[3] = 4;
//
//    int maxi = 0;
//
//    for(int i=1;i<=n;i++) {
//        cin >> arr[i];
//    }
//    for(int i=1;i<=n;i++) {
//        if(arr[i]>maxi) maxi = arr[i];
//    }
//
//    for(int i=4;i<=maxi;i++) {
//        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
//    }
//
//    for(int i=1;i<=n;i++) {
//        cout << dp[arr[i]]<<"\n";
//    }
//
//
//    return 0;
//}
