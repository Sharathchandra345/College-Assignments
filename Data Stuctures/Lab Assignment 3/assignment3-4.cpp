#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char op)
{
  if (op == '+' || op == '-')
    return 1;
  if (op == '*' || op == '/')
    return 2;
  return 0;
}

string infixToPostfix(const string &infix)
{
  stack<char> opStack;
  string postfix = "";

  for (char c : infix)
  {
    if (isalnum(c))
      postfix += c;
    else if (c == '(')
      opStack.push(c);
    else if (c == ')')
    {
      while (!opStack.empty() && opStack.top() != '(')
      {
        postfix += opStack.top();
        opStack.pop();
      }
      opStack.pop();
    }
    else
    {
      while (!opStack.empty() && precedence(c) <= precedence(opStack.top()))
      {
        postfix += opStack.top();
        opStack.pop();
      }
      opStack.push(c);
    }
  }

  while (!opStack.empty())
  {
    postfix += opStack.top();
    opStack.pop();
  }
  return postfix;
}

int main()
{
  string infix;
  cin >> infix;
  cout << infixToPostfix(infix) << endl;
  return 0;
}
