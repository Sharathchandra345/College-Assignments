#include <iostream>
#include <queue>

using namespace std;

class StackUsingOneQueue
{
public:
  void push(int x)
  {
    q.push(x);
    int n = q.size();
    while (n > 1)
    {
      q.push(q.front());
      q.pop();
      n--;
    }
  }

  int pop()
  {
    int top_element = q.front();
    q.pop();
    return top_element;
  }

  int top()
  {
    return q.front();
  }

  bool empty()
  {
    return q.empty();
  }

private:
  queue<int> q;
};

int main()
{
  StackUsingOneQueue stack;
  stack.push(1);
  stack.push(2);
  stack.push(3);

  cout << stack.top() << endl; // Output: 3
  cout << stack.pop() << endl; // Output: 3

  stack.push(4);
  cout << stack.top() << endl; // Output: 4

  return 0;
}
