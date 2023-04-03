// https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/
// Minimum Number of Arrows to Burst Balloons

class Solution
{
public:
  static bool comp(vector<int> &a, vector<int> &b)
  {
    return a[1] < b[1];
  }
  int findMinArrowShots(vector<vector<int>> &points)
  {
    int arrow = 1;
    sort(points.begin(), points.end(), comp);
    int end = points[0][1];
    for (int i = 1; i < points.size(); i++)
    {
      if (end < points[i][0])
      {
        arrow++;
        end = points[i][1];
      }
    }
    return arrow;
  }
};