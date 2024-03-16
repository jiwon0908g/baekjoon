#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mini = 5000;

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(5*i+3*j==n) {
                if(i+j<mini) mini = j+i;
            }
        }
    }
    if(mini == 5000) mini = -1;

    cout << mini;

    return 0;
}
