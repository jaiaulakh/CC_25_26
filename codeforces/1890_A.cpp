#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n; 
        cin >> n;
        vector<int> arr(n);
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        if(mp.size() == 2) 
        {
            auto it = mp.begin();
            int f1 = it->second;
            ++it;
            int f2 = it->second;
            int diff = abs(f1 - f2);

            if(diff <= 1) cout << "YES\n";
            else cout << "NO\n";
        }
        else if(mp.size() == 1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
