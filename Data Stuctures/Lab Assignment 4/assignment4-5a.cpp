#include <iostream>
#include <queue>

using namespace std;

class StackUsingTwoQueues
{
public:
  void push(int x)
  {
    q1.push(x);
  }

  int pop()
  {
    while (q1.size() > 1)
    {
      q2.push(q1.front());
      q1.pop();
    }
    int top_element = q1.front();
    q1.pop();
    swap(q1, q2); // Swap the names of q1 and q2 to maintain the order for future operations
    return top_element;
  }

  int top()
  {
    while (q1.size() > 1)
    {
      q2.push(q1.front());
      q1.pop();
    }
    int top_element = q1.front();
    q2.push(top_element);
    q1.pop();
    swap(q1, q2); // Swap the names of q1 and q2 to maintain the order for future operations
    return top_element;
  }

  bool empty()
  {
    return q1.empty();
  }

private:
  queue<int> q1;
  queue<int> q2;
};

int main()
{
  StackUsingTwoQueues stack;
  stack.push(1);
  stack.push(2);
  stack.push(3);

  cout << stack.top() << endl; // Output: 3
  cout << stack.pop() << endl; // Output: 3

  stack.push(4);
  cout << stack.top() << endl; // Output: 4

  return 0;
}
