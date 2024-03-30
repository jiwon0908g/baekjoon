#include<bits/stdc++.h>
using namespace std;

struct spot {
    int x;
    int y;
};

bool cmp(spot s1, spot s2) {
    if(s1.y == s2.y) return s1.x<s2.x;
    else return s1.y<s2.y;
}

int main() {
    int n;
    cin >> n;
    vector<spot> k(n);

    for(int i=0;i<n;i++) {
        cin >> k[i].x>>k[i].y;
    }

    stable_sort(k.begin(), k.end(), cmp);

    for(int i=0;i<n;i++) {
        cout << k[i].x<<" "<<k[i].y<<"\n";
    }

    return 0;
}
