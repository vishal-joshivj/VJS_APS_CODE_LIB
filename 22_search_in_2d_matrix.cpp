// https://leetcode.com/problems/search-a-2d-matrix/

// binary search algorithm

class Solution
{
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target)
  {
    int row = 0;
    int col = 0;
    while (row < matrix.size())
    {
      vector<int> temp = matrix[row];
      int l = 0;
      int r = matrix[0].size() - 1;
      while (l <= r)
      {
        int mid = l + (r - l) / 2;
        if (temp[mid] == target)
        {
          return true;
        }

        else if (temp[mid] > target) 
        {
          r = mid - 1;
        }

        else
        {
          l = mid + 1;
        }
      }

      row++;
    }

    return false;
  }
};