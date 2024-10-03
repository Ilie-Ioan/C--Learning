#include <iostream>
#include <queue>

using namespace std;

int main()
{
	//declaration
	queue<int>queue1;

	// create a max heap
	priority_queue<int>queue2;

	//create  a min heap
	priority_queue<int, vector<int>, greater<int>>  queue3;

	//push
	queue1.push(22);
	queue1.push(29);
	queue1.push(56);

	queue2.push(22);
	queue2.push(29);
	queue2.push(56);

	queue3.push(22);
	queue3.push(29);
	queue3.push(56);
	//front element
	cout << "The front element is " << queue1.front()<<endl;

	//top element priority queue
	cout << "The top element is " << queue2.top() << endl;
	cout << "The top element is " << queue3.top() << endl;

	//back element
	cout << "The back element is " << queue1.back()<<endl;

	//pop
	queue1.pop();
	queue2.pop();
	queue3.pop();


	cout << "Now top element is " << queue2.top() <<endl;
	cout << "Now top element is " << queue3.top() << endl;

	//size
	cout << "Number of elements are " << queue1.size() << endl;;
	cout << "Number of elements are " << queue2.size() << endl;
	cout << "Number of elements are " << queue3.size() << endl;;
}