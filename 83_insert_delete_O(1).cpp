// https://leetcode.com/problems/insert-delete-getrandom-o1/

//  Insert Delete GetRandom O(1)

class RandomizedSet
{
public:
  unordered_map<int, int> mp;
  vector<int> arr;
  RandomizedSet()
  {
  }

  bool insert(int val)
  {
    if (mp.find(val) != mp.end())
    {
      return false;
    }
    arr.push_back(val);
    mp[val] = arr.size() - 1;
    return true;
  }

  bool remove(int val)
  {
    if (mp.find(val) != mp.end())
    {
      int ind = mp[val];
      int t = arr.back();
      arr[ind] = t;
      arr.pop_back();
      mp[t] = ind;
      mp.erase(val);
      return true;
    }
    return false;
  }

  int getRandom()
  {
    int ind = rand() % arr.size();
    return arr[ind];
  }
};
