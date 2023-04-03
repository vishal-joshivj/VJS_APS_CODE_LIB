// https://leetcode.com/problems/island-perimeter/

class Solution
{
public:
  int islandPerimeter(vector<vector<int>> &grid)
  {
    int res = 0;
    for (int i = 0; i < grid.size(); i++)
    {
      for (int j = 0; j < grid[0].size(); j++)
      {
        if (grid[i][j] == 1)
        {
          res += 4;
          if (i - 1 >= 0)
          {
            if (grid[i - 1][j] == 1)
            {
              res -= 2;
            }
          }
          if (j - 1 >= 0)
          {
            if (grid[i][j - 1] == 1)
            {
              res -= 2;
            }
          }
        }
      }
    }
    return res;
  }
};