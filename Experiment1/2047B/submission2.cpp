#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        if (n == 1) {
            cout << s << '\n';
            continue;
        }
        vector<int> cnt(26, 0);
        for (char c : s) cnt[c - 'a']++;
        int maxChar = 0;
        for (int i = 1; i < 26; i++) {
            if (cnt[i] > cnt[maxChar]) {
                maxChar = i;
            }
        }
 
        int minChar = -1;
        for (int i = 0; i < 26; i++) {
            if (cnt[i] > 0 && i != maxChar) {
                if (minChar == -1 || cnt[i] < cnt[minChar]) {
                    minChar = i;
                }
            }
        }
        if (minChar == -1) {
            cout << s << '\n';
            continue;
        }
        for (char &c : s) {
            if (c - 'a' == minChar) {
                c = char('a' + maxChar);
                break;
            }
        }
        cout << s << '\n';
    }
    return 0;
}