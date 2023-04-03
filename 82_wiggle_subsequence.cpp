// https://leetcode.com/problems/wiggle-subsequence/
// . Wiggle Subsequence

class Solution
{
public:
  int wiggleMaxLength(vector<int> &nums)
  {
    vector<char> c;
    int down = 1;
    int up = 1;

    for (int i = 1; i < nums.size(); i++)
    {
      if (nums[i] - nums[i - 1] > 0)
      {
        c.push_back('U');
      }

      else if (nums[i] - nums[i - 1] < 0)
      {
        c.push_back('D');
      }

      else
      {
        c.push_back('E');
      }
    }

    for (int i = 0; i < c.size(); i++)
    {
      cout << c[i] << endl;
      if (c[i] == 'U')
      {
        up = down + 1;
      }

      else if (c[i] == 'D')
      {
        down = up + 1;
      }
    }

    cout << down << endl;
    cout << up << endl;
    return max(down, up);
  }
};