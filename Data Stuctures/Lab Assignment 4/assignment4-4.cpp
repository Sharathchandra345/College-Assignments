#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

char findFirstNonRepeatingChar(const string &str)
{
  queue<char> charQueue;
  unordered_map<char, int> charCount;

  for (char c : str)
  {
    charCount[c]++;
    charQueue.push(c);

    while (!charQueue.empty() && charCount[charQueue.front()] > 1)
    {
      charQueue.pop();
    }
  }

  if (!charQueue.empty())
  {
    return charQueue.front();
  }

  return -1;
}

int main()
{
  string input;
  cout << "Enter a string: ";
  cin >> input;

  char result = findFirstNonRepeatingChar(input);

  if (result != -1)
  {
    cout << "First non-repeating character: " << result << endl;
  }
  else
  {
    cout << "No non-repeating character found." << endl;
  }

  return 0;
}
