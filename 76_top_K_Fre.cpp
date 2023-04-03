// https://leetcode.com/problems/top-k-frequent-elements/

// heap (priority queue based questions)

class Solution
{
public:
  vector<int> topKFrequent(vector<int> &nums, int k)
  {
    map<int, int> m;
    vector<int> res;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
      m[nums[i]]++;
    }

    priority_queue<pair<int, int>> pq;
    auto it = m.begin();
    while (it != m.end())
    {
      pq.push(make_pair(it->second, it->first));
      it++;
    }

    for (int i = 0; i < k; i++)
    {
      pair<int, int> top = pq.top();
      res.push_back(top.second);
      pq.pop();
    }
    return res;
  }
};