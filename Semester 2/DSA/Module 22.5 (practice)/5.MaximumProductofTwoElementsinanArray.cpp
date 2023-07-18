class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int max = INT_MIN;
        sort(nums.begin(), nums.end());
        int last = nums[nums.size() - 1] - 1;
        int sLast = nums[nums.size() - 2] - 1;
        max = last * sLast;
        return max;
    }
};
