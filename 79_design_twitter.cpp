// https://leetcode.com/problems/design-twitter/
// design - twitter 
class Twitter
{
public:
  map<int, set<int>> friends;
  int count = 0;
  priority_queue<vector<int>> pq;
  Twitter()
  {
    friends.clear();
    count = 0;
    pq = priority_queue<vector<int>>();
  }

  void postTweet(int userId, int tweetId)
  {
    pq.push({count++, userId, tweetId});
  }

  vector<int> getNewsFeed(int userId)
  {
    vector<int> feed;
    int t = 0;
    priority_queue<vector<int>> extra = pq;
    while (!extra.empty() and t < 10)
    {
      auto temp = extra.top();
      extra.pop();

      if (temp[1] == userId || friends[userId].count(temp[1]))
      {
        feed.push_back(temp[2]);
        t++;
      }
    }
    return feed;
  }

  void follow(int followerId, int followeeId)
  {
    friends[followerId].insert(followeeId);
  }

  void unfollow(int followerId, int followeeId)
  {
    friends[followerId].erase(followeeId);
  }
};
