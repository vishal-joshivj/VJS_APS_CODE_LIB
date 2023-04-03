// https://leetcode.com/problems/implement-queue-using-stacks/

// implement-queue-using-stacks

class MyQueue
{
public:
  stack<int> input;
  stack<int> output;
  MyQueue()
  {
  }

  void push(int x)
  {
    input.push(x);
  }

  int pop()
  {
    if (output.empty())
    {
      while (!input.empty())
      {
        int x = input.top();
        input.pop();
        output.push(x);
      }
    }
    int x = output.top();
    output.pop();
    return x;
  }

  int peek()
  {
    if (output.empty())
    {
      while (!input.empty())
      {
        int x = input.top();
        input.pop();
        output.push(x);
      }
    }
    return output.top();
  }

  bool empty()
  {
    if (!input.empty() or !output.empty())
    {
      return false;
    }
    return true;
  }
};
