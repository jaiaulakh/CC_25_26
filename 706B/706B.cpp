#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> cost(n);
    for(int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    int d;
    cin >> d;
    sort(cost.begin(),cost.end());
    for(int i = 0; i < d; i++)
    {
        int target;
        cin >> target;
        int left = 0;
        int right = n - 1 ;
        int ans = n;
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            if (cost[mid] > target) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        cout << ans << "\n";
    }
}





