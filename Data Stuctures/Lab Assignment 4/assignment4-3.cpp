#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void interleaveQueue(queue<int> &q)
{
  int size = q.size();
  if (size % 2 != 0)
  {
    cout << "Queue size must be even for interleaving." << endl;
    return;
  }

  int mid = size / 2;
  stack<int> stack;

  for (int i = 0; i < mid; ++i)
  {
    stack.push(q.front());
    q.pop();
  }

  while (!stack.empty())
  {
    q.push(stack.top());
    stack.pop();
    q.push(q.front());
    q.pop();
  }
}

int main()
{
  queue<int> myQueue;
  myQueue.push(4);
  myQueue.push(7);
  myQueue.push(11);
  myQueue.push(20);
  myQueue.push(5);
  myQueue.push(9);

  interleaveQueue(myQueue);

  while (!myQueue.empty())
  {
    cout << myQueue.front() << " ";
    myQueue.pop();
  }
  cout << endl;

  return 0;
}
