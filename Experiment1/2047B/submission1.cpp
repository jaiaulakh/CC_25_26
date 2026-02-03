#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    int length;
    string s;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        vector<int> freq(26, 0);
        for (char ch : s) freq[ch - 'a']++;
 
        int max = 0;
        char maxChar = s[0];
        for (int i = 0; i < 26; i++) {
            if (freq[i] > max) {
                max = freq[i];
                maxChar = char('a' + i);
            }
        }
 
        for (int i = 0; i < n; i++) {
            if (s[i] != maxChar) {
                s[i] = maxChar;
                break;
            }
        }
 
        cout << s << "\n";
    }
 
    
    return 0;
}