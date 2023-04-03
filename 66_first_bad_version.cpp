// https://leetcode.com/problems/first-bad-version/

// binary search

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
  int firstBadVersion(int n)
  {
    int l = 1;
    int h = n;
    int res;

    while (l <= h)
    {
      int mid = l + (h - l) / 2;
      if (isBadVersion(mid))
      {
        res = mid;
        h = mid - 1;
      }
      else
      {
        l = mid + 1;
      }
    }

    return res;
  }
};