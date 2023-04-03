// https://leetcode.com/problems/hamming-distance/

class Solution
{
public:
  int hammingDistance(int x, int y)
  {
    int t = x ^ y;
    int count = 0;
    while (t)
    {
      count += (t & 1);

      t = t >> 1;
    }

    return count;
  }
};