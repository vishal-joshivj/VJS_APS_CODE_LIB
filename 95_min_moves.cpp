// https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/

//

class Solution
{
public:
  int minMoves2(vector<int> &nums)
  {
    int n = nums.size();
    int moves = 0;
    sort(nums.begin(), nums.end());
    int med = nums[n / 2];
    for (int i = 0; i < n; i++)
    {
      moves += abs(med - nums[i]);
    }
    return moves;
  }
};