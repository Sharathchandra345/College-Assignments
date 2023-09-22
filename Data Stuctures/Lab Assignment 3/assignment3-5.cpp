#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char c) { return c == '+' || c == '-' || c == '*' || c == '/'; }

int evaluatePostfix(const string &postfix)
{
  stack<int> operandStack;

  for (char c : postfix)
  {
    if (isdigit(c))
      operandStack.push(c - '0');
    else if (isOperator(c))
    {
      int operand2 = operandStack.top();
      operandStack.pop();
      int operand1 = operandStack.top();
      operandStack.pop();

      int result = 0;

      switch (c)
      {
      case '+':
        result = operand1 + operand2;
        break;
      case '-':
        result = operand1 - operand2;
        break;
      case '*':
        result = operand1 * operand2;
        break;
      case '/':
        if (operand2 != 0)
          result = operand1 / operand2;
        else
        {
          cerr << "Error: Division by zero" << endl;
          exit(1);
        }
        break;
      default:
        cerr << "Error: Invalid operator" << endl;
        exit(1);
      }

      operandStack.push(result);
    }
  }

  if (operandStack.size() != 1)
  {
    cerr << "Error: Invalid postfix expression" << endl;
    exit(1);
  }
  return operandStack.top();
}

int main()
{
  string postfix;
  cout << "Enter a postfix expression: ";
  cin.ignore();
  getline(cin, postfix);

  int result = evaluatePostfix(postfix);

  cout << "Result: " << result << endl;

  return 0;
}
