// https://leetcode.com/problems/valid-perfect-square/

//  Valid Perfect Square

class Solution
{
public:
  bool isPerfectSquare(int num)
  {
    int l = 0;
    int h = sqrt(num);
    while (l <= h)
    {
      int mid = (l + h) >> 1;
      if (sqrt(num) == mid)
      {
        return true;
      }
      else if (sqrt(num) > mid)
      {
        l = mid + 1;
      }
      else
      {
        h = mid - 1;
      }
    }
    return false;
  }
};