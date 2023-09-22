#include <iostream>
using namespace std;

#define MAX_SIZE 10

class CircularQueue
{
private:
  int arr[MAX_SIZE];
  int front;
  int rear;

public:
  CircularQueue()
  {
    front = -1;
    rear = -1;
  }

  bool isEmpty()
  {
    return (front == -1 && rear == -1);
  }

  bool isFull()
  {
    return ((rear + 1) % MAX_SIZE == front);
  }

  void enqueue(int item)
  {
    if (isFull())
    {
      cout << "Queue is full. Cannot enqueue." << endl;
      return;
    }
    if (isEmpty())
    {
      front = rear = 0;
    }
    else
    {
      rear = (rear + 1) % MAX_SIZE;
    }
    arr[rear] = item;
    cout << item << " enqueued successfully." << endl;
  }

  int dequeue()
  {
    int item;
    if (isEmpty())
    {
      cout << "Queue is empty. Cannot dequeue." << endl;
      return -1;
    }
    item = arr[front];
    if (front == rear)
    {
      front = rear = -1;
    }
    else
    {
      front = (front + 1) % MAX_SIZE;
    }
    cout << item << " dequeued successfully." << endl;
    return item;
  }

  int peek()
  {
    if (isEmpty())
    {
      cout << "Queue is empty. Peek operation failed." << endl;
      return -1;
    }
    return arr[front];
  }

  void display()
  {
    if (isEmpty())
    {
      cout << "Queue is empty." << endl;
      return;
    }
    cout << "Queue elements: ";
    int i = front;
    while (i != rear)
    {
      cout << arr[i] << " ";
      i = (i + 1) % MAX_SIZE;
    }
    cout << arr[rear] << endl;
  }
};

int main()
{
  CircularQueue cq;
  int choice, item;

  while (true)
  {
    cout << "\nCircular Queue Operations:" << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Check if Queue is Empty" << endl;
    cout << "4. Check if Queue is Full" << endl;
    cout << "5. Peek" << endl;
    cout << "6. Display" << endl;
    cout << "7. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "Enter element to enqueue: ";
      cin >> item;
      cq.enqueue(item);
      break;
    case 2:
      cq.dequeue();
      break;
    case 3:
      if (cq.isEmpty())
      {
        cout << "Queue is empty." << endl;
      }
      else
      {
        cout << "Queue is not empty." << endl;
      }
      break;
    case 4:
      if (cq.isFull())
      {
        cout << "Queue is full." << endl;
      }
      else
      {
        cout << "Queue is not full." << endl;
      }
      break;
    case 5:
      item = cq.peek();
      if (item != -1)
      {
        cout << "Front element: " << item << endl;
      }
      break;
    case 6:
      cq.display();
      break;
    case 7:
      cout << "Exiting the program." << endl;
      exit(0);
    default:
      cout << "Invalid choice. Please try again." << endl;
    }
  }

  return 0;
}
