/*
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        while (k)
        {
            int n = nums.size();
            int temp = nums[n - 1];

            for (int i = n - 2; i >= 0; i--)
            {
                nums[i + 1] = nums[i];
            }
            nums[0] = temp;
            k--;
        }
    }
};

*/

// link https://leetcode.com/problems/rotate-array/?envType=problem-list-v2&envId=array