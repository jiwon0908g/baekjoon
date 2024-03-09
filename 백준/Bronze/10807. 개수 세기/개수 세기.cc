#include <iostream>

using namespace std;

int main()
{
    int n,i;

    cin >> n;
    int a;
    int arr[100] = {0};
    for (i=0;i<n;i++) {
        cin >> a;
        arr[i] = a;
    }
    int v;
    cin >> v;
    int cnt = 0;
    for (i=0;i<n;i++) {
        if (arr[i] == v) {
            cnt++;
        }
    }
    cout << cnt;
}
