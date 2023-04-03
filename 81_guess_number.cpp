// https://leetcode.com/problems/guess-number-higher-or-lower/

// binary search

int guessNumber(int n)
{
  int l = 1;
  int h = n;
  int mid;
  int target;
  while (l <= h)
  {
    mid = l + ((h - l) / 2);
    target = guess(mid);
    if (target == (-1))
    {
      h = mid - 1;
    }
    else if (target == (1))
    {
      l = mid + 1;
    }
    else
    {
      return mid;
    }
  }
  return -1;
}