#include <iostream>
#include <stack>
using namespace std;

string reverseString(const string &input)
{
  stack<char> charStack;
  for (char c : input)
    charStack.push(c);
  string reversedString = "";
  while (!charStack.empty())
  {
    reversedString += charStack.top();
    charStack.pop();
  }
  return reversedString;
}

int main()
{
  string input;
  cin >> input;
  string reversed = reverseString(input);
  cout << reversed << endl;
  return 0;
}
