class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int arraySum = 0;
        for(int x:nums)
        {
            arraySum+=x;
        }

        int maxSum = arraySum - x;
        if(maxSum < 0) return -1;
        if(maxSum == 0) return n;

        int l = 0;
        int sum = 0;
        int maxLength = -1;

        for(int r = 0; r < n; r++)
        {
            sum += nums[r];
            while(sum > maxSum)
            {
                sum -= nums[l];
                l++;
            }
            if(sum == maxSum) 
            {
                maxLength = max(maxLength, r - l + 1);
            }
        }
        if(maxLength == -1) return -1;
        return n - maxLength;
    }
};