#include <iostream>

using namespace std;
 
#define SIZE 50

class Stack
{
	int	stackArray[SIZE];
	int tos; // current value of the stack
	public:
		Stack()
		{
			tos = 0;
		}
		void push(int);
		int pop();
		void set(int);
};
void Stack::push(int value)
{
	if (tos < SIZE)
	{
		stackArray[tos++] = value;

	}
	else
	{
		cout << "Stack Overflow" << endl;

	}
}
void Stack::set(int a)
{
	tos = a;
}
int Stack::pop()
{
	if (tos == 0)
	{
		cout << "Stack Underflow" << endl;
		
	}
	else
	{
		return stackArray[--tos];
	}
}
int main()
{
	Stack s;
	int i;
	for (i = 0; i < 50; i++)
		s.push(i);
	for (i = 0; i < 51; i++)
		cout << s.pop() << " " << i << endl;
}