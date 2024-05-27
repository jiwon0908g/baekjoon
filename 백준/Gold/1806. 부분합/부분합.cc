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
    int mini = 100000;
    int flag = 0;
    while(s<n&&e<n) {
        if(sum<m) {
            e++;
            sum+=arr[e];
        }
        else if(sum>=m) {
            if(e>=s&&e-s<mini) {
                mini = e-s+1;
                flag = 1;
            }
            else if(s>=e&&s-e<mini) {
                mini = s-e+1;
                flag = 1;
            }
            sum-=arr[s];
            s++;
        }
    }
    if(flag==0) cout << 0;
    else cout << mini;

    return 0;
}
