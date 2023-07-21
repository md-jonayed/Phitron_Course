class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        int sz = nums.size();
        vector<int> leftsum(sz), rightsum(sz), ans(sz);
        for (int i = 1; i < sz; i++)
        {
            leftsum[i] = leftsum[i - 1] + nums[i - 1];
        }

        for (int i = sz - 2; i >= 0; i--)
        {
            rightsum[i] = rightsum[i + 1] + nums[i + 1];
        }

        for (int i = 0; i < sz; i++)
        {
            ans[i] = abs(leftsum[i] - rightsum[i]);
            cout << ans[i] << " ";
        }

        return ans;
    }
};