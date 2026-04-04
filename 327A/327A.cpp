#include<iostream>
#include <vector>
using namespace std;
#include<climits>

int main()
{   int n;
    cin>>n;
    vector<int> arr(n);
    int count1=0;
    int count0=0;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            count1++;
        }
        else
        {
            count0++;
        }
    }

    int mx_count=INT_MIN;

    for(int i = 0;i<n;i++)
    {
            int a = count1;
            int b = count0;
        for(int j = i;j<n;j++)
        {
            if(arr[j]==1)
            {
                a--;
                b++;
                mx_count = max(mx_count,a);
            }
            else
            {
                b--;
                a++;
                mx_count = max(mx_count,a);
            }
            
        }
    }

    cout<<mx_count<<endl;

    
}