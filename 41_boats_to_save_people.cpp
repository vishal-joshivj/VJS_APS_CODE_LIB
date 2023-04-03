// https://leetcode.com/problems/boats-to-save-people/description/

// two pointers , sorting 

class Solution
{
public:
  int numRescueBoats(vector<int> &people, int limit)
  {
    int j = people.size() - 1;
    sort(people.begin(), people.end());
    int i = 0;
    int count = 0;
    while (i < j)
    {
      if (people[i] + people[j] <= limit)
      {
        count++;
        i++;
        j--;
      }
      else
      {
        count++;
        j--;
      }

      if (i == j)
      {
        count++;
        break;
      }
    }
    return count;
  }
};