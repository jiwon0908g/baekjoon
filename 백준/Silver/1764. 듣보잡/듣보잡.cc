#include<bits/stdc++.h>
using namespace std;

//bool cmp(string a,string b) {
  //  return a<b;
//}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    int fa = 0;
    int fb = 0;
    cin >> n>> m;
    vector<string> hear(n);
    vector<string> see(m);
    vector<string> hese;

    for(int i=0;i<n;i++) {
        cin >> hear[i];
    }
    for(int i=0;i<m;i++) {
        cin >> see[i];
    }

    sort(hear.begin(),hear.end());
    sort(see.begin(),see.end());

    while(fa<n&&fb<m) {
        if(hear[fa]==see[fb]) {
            hese.push_back(hear[fa]);
            fa++;
        }
        else if(hear[fa]>see[fb]) fb++;
        else fa++;
    }

    cout << hese.size() <<"\n";
    for(int i=0;i<hese.size();i++) {
        cout << hese[i]<<"\n";
    }

    return 0;
}
