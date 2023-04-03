// https://leetcode.com/problems/sort-an-array/

// merge sort

class Solution
{
public:
  void Merge(vector<int> &nums, int l, int mid, int r)
  {
    vector<int> v(r - l + 1);
    int i = l;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= r)
    {
      if (nums[i] <= nums[j])
      {
        v[k++] = nums[i++];
      }
      else
      {
        v[k++] = nums[j++];
      }
    }

    while (i <= mid)
    {
      v[k++] = nums[i++];
    }
    while (j <= r)
    {
      v[k++] = nums[j++];
    }

    for (int i = 0; i < k; i++)
    {
      nums[l + i] = v[i];
    }
  }

  void MergeSort(vector<int> &nums, int l, int r)
  {
    if (l < r)
    {
      int mid = l + (r - l) / 2;
      MergeSort(nums, l, mid);
      MergeSort(nums, mid + 1, r);
      Merge(nums, l, mid, r);
    }
  }
  vector<int> sortArray(vector<int> &nums)
  {
    int n = nums.size();
    MergeSort(nums, 0, n - 1);
    return nums;
  }
};