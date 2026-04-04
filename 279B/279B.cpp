#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
    long long n,t;
    cin>>n>>t;
    vector<long long> nums(n);

    for(long long i = 0;i<n;i++)
    {
        cin>>nums[i];
    }

    long long left = 0;
    long long currentsum=0;
    long long maxlen=0;

    for(long long r = 0;r<n;r++)
    {
        currentsum+=nums[r];
        while(currentsum>t)
        {
            currentsum-=nums[left];
            left++;
        }
        maxlen=max(maxlen,r-left+1);
    }
    cout<<maxlen<<endl;
    return 0;
}