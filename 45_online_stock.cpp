// https://leetcode.com/problems/online-stock-span/
// monotonic stack , design

class StockSpanner
{
public:
  stack<pair<int, int>> s;

  StockSpanner()
  {

    while (!s.empty())
    {
      s.pop();
    }
  }

  int next(int price)
  {
    int count = 1;
    while (!s.empty() and price >= s.top().first)
    {
      count = count + s.top().second;
      s.pop();
    }
    s.push({price, count});

    return count;
  }
};

