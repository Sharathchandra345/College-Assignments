#include<iostream>
using namespace std;

class stack{
	public:
		
	stack(){
		top=-1;
		randomValue();
	}
	
	int size=10;
	int top;
	int item[10];
	bool isFull(){
		return (top==size-1);
	}
	
	
	bool isEmpty(){
		return (top==-1);
	}
	
	void push(int x){
		if(isFull())
		cout<<"Stack Overflow";
		
		else{
			top++;
			item[top]=x;
			}
		}
		
	int pop(){
		if(isEmpty())
		cout<<"Stack Underflow";
		
		else{
			int x;
			x=item[top];
			top--;
			return x;
			}
	}
	
	void display(){
		int i;
		for(i=0;i<=top;i++){
			cout<<item[i]<<" ";
		}
		cout<<endl<<endl;
	}
	
	int peek(){
		return item[top];
	}
	
	void randomValue(){
		int i;
		for(i=0;i<size;i++)
		{
			top++;
			item[i]=rand()%100;
		}
	}
	};
	
	
	int main(){
		stack ob1;
		ob1.isFull();
		ob1.display();
		ob1.isEmpty();
		ob1.pop();
		ob1.display();
		ob1.push(69);
		ob1.display();
		return 0;
	}
