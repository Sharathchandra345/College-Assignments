#include <iostream>
using namespace std;

class Stack
{
private:
  int top;
  int capacity;
  int *arr;

public:
  Stack(int size)
  {
    top = -1;
    capacity = size;
    arr = new int[size];
  }

  bool isFull()
  {
    return top == capacity - 1;
  }

  bool isEmpty()
  {
    return top == -1;
  }

  void push(int data)
  {
    if (isFull())
    {
      cout << "Stack is full. Cannot push." << endl;
      return;
    }
    arr[++top] = data;
    cout << "Pushed " << data << " onto the stack." << endl;
  }

  void pop()
  {
    if (isEmpty())
    {
      cout << "Stack is empty. Cannot pop." << endl;
      return;
    }
    cout << "Popped " << arr[top--] << " from the stack." << endl;
  }

  void peek()
  {
    if (isEmpty())
    {
      cout << "Stack is empty." << endl;
      return;
    }
    cout << "Top element: " << arr[top] << endl;
  }

  void display()
  {
    if (isEmpty())
    {
      cout << "Stack is empty." << endl;
      return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main()
{
  int size;
  cout << "Enter the size of the stack: ";
  cin >> size;
  Stack stack(size);

  int choice, data;
  while (true)
  {
    cout << "Menu:\n";
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. isEmpty\n";
    cout << "4. isFull\n";
    cout << "5. Display\n";
    cout << "6. Peek\n";
    cout << "7. Quit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "Enter data to push: ";
      cin >> data;
      stack.push(data);
      break;
    case 2:
      stack.pop();
      break;
    case 3:
      if (stack.isEmpty())
        cout << "Stack is empty." << endl;
      else
        cout << "Stack is not empty." << endl;
      break;
    case 4:
      if (stack.isFull())
        cout << "Stack is full." << endl;
      else
        cout << "Stack is not full." << endl;
      break;
    case 5:
      stack.display();
      break;
    case 6:
      stack.peek();
      break;
    case 7:
      cout << "Exiting program." << endl;
      exit(0);
    default:
      cout << "Invalid choice. Try again." << endl;
    }
  }

  return 0;
}
