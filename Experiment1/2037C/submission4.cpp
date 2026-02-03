#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n <= 3) {
            cout << -1 << '\n';
            continue;
        }

        vector<int> p;
        int l = 1, r = n;

        while (l <= r) {
            if (l == r) {
                p.push_back(l);
                break;
            }
            p.push_back(l);
            p.push_back(r);
            l++;
            r--;
        }

        for (int x : p) cout << x << " ";
        cout << '\n';
    }
    return 0;
}
