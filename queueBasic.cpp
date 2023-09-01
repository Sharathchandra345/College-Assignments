#include<iostream>
using namespace std;

class queue{
	
	
	public:
		
	int front=-1;
	int rear=-1;
	int n=5;
	int arr[];
	
	
	bool isFull(){
	if (rear==n-1){
		cout<<endl<<"Queue Overflow"<<endl;
		return true;
	}
	
	else
	{
	cout<<endl<<"You got some space"<<endl;
	return false;
	}
}

	bool isEmpty(){
	if (front==-1){
		cout<<endl<<"Queue Underflow"<<endl;
		return true;
	}
	
	else
	{
	cout<<endl<<"You got some space"<<endl;
	return false;
	}
}
	
	
	void enqueue(int item){
	
	if(rear==n-1)
	cout<<endl<<"Queue Overflow"<<endl;
	else{
	
	
	if (front==-1 && rear==-1){
		front=0;
		rear=0;
	    arr[rear]=item;
	}
	
	else{
	rear+=1;
	arr[rear]=item;
}
}
}

	int dequeue(){
	if (front==-1)
	cout<<endl<<"Queue Underflow"<<endl;
	
	else{
	int item=arr[front];
	front+=1;
	return item;
}
}

void display(){
	for (int i=front;i<=rear;i++){
		cout<<arr[i]<< " ";
	}
	cout<<endl<<endl;
}

void peek(){
	cout<<"Peek is : "<<arr[front]<<endl;
}
};




int main(){
queue q1;
q1.enqueue(5);
q1.enqueue(6);
q1.enqueue(67);
q1.enqueue(87);
q1.enqueue(7);
cout<<q1.isFull();
q1.enqueue(4);
q1.display();
q1.dequeue();
q1.dequeue();
q1.display();
q1.peek();
}
