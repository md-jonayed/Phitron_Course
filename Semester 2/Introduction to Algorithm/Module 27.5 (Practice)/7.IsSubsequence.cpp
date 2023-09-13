class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int x = 0;
        bool ans = false;
        if (s.size() == 0 && t.size() == 0)
        {
            return true;
        }
        for (char c : t)
        {
            if (c == s[x])
            {
                x++;
            }
            if (x == s.size())
            {
                ans = true;
                break;
            }
        }
        return ans;
    }
};