// https://leetcode.com/problems/median-of-two-sorted-arrays/

// modified binary search

class Solution
{
public:
  double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
  {
    int m = nums1.size();
    int n = nums2.size();

    int total = n + m;

    vector<int> res;
    double r;
    int i = 0, j = 0;
    while (res.size() != (total / 2) + 1 && i < nums1.size() && j < nums2.size())
    {
      if (nums1[i] < nums2[j])
      {
        res.push_back(nums1[i]);
        i++;
      }
      else
      {
        res.push_back(nums2[j]);
        j++;
      }
    }

    if (i < nums1.size())
    {
      while (res.size() != (total / 2) + 1)
      {
        res.push_back(nums1[i]);
        i++;
      }
    }
    if (j < nums2.size())
    {
      while (res.size() != ((total / 2) + 1))
      {
        res.push_back(nums2[j]);
        j++;
      }
    }

    int t = res.size();

    double temp = 0;

    if (total % 2 == 0)
    {

      temp = (res[t - 1] + res[t - 2]) / 2.00000;
      return temp;
    }

    temp = res[t - 1];
    return temp;
  }
};