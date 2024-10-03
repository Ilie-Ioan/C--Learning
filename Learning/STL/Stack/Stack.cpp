#include <iostream>
#include <stack>

using namespace std;


int main()
{

	//declaration
	stack<int> stack1;

	//push values

	stack1.push(20);
	stack1.push(66);
	stack1.push(32);

	//top

	cout << "The top element is : " << stack1.top()<<endl;

	//pop

	stack1.pop();
	
	//size
	cout << "The number of elements: " << stack1.size();

}