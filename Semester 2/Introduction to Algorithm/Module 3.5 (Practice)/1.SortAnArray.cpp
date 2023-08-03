class Solution
{
public:
    void merge(vector<int> &nums, int left, int mid, int right)
    {
        int l = (mid - left + 1);
        int r = (right - mid);
        vector<int> lv;
        vector<int> rv;
        for (int i = 0; i < l; i++)
        {
            lv.push_back(nums[left + i]);
        }

        for (int i = 0; i < r; i++)
        {
            rv.push_back(nums[mid + 1 + i]);
        }
        int i = 0, j = 0, k = left;
        while (i < l && j < r)
        {
            if (lv[i] <= rv[j])
            {
                nums[k] = lv[i];
                i++;
                k++;
            }
            else
            {
                nums[k] = rv[j];
                j++;
                k++;
            }
        }
        while (i < l)
        {
            nums[k] = lv[i];
            i++;
            k++;
        }

        while (j < r)
        {
            nums[k] = rv[j];
            j++;
            k++;
        }
    }
    void mergesort(vector<int> &nums, int left, int right)
    {
        if (left == right)
        {
            return;
        }
        int mid = (left + right) / 2;
        mergesort(nums, left, mid);
        mergesort(nums, mid + 1, right);
        merge(nums, left, mid, right);
    }
    vector<int> sortArray(vector<int> &nums)
    {
        int left = 0;
        int right = nums.size() - 1;
        mergesort(nums, left, right);
        return nums;
    }
};