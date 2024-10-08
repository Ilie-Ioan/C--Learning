#include <iostream>
#include <thread>

using namespace std;
  //1.Thread Functions
 void ThreadFunction1(int start, int end)
 {
 	for (int i = start; i <= end; i++)
 	{
 		cout << "Hello \n";
 
 	}
 
 }
 void ThreadFunction2(int start, int end)
 
 {
 	for(int i = start;i<=end;i++)
 	{
 		cout << "Hi \n";
 	}
 }

class test {
public:
	void ThreadFunction1(int start, int end)
		{
			for (int i = start; i <= end; i++)
			{
				cout << "Hello \n";
		
			}
		
		}
	void ThreadFunction2(int start, int end)
	{
		for (int i = start; i <= end; i++)
		{
			cout << "Hi \n";

		}

	}
};

int main()
{


	  //1.Thread functions
	 clock_t start, end;

	 start = clock();   
	 
	  ThreadFunction1(1, 25000);
	 ThreadFunction2(25001, 50000); 

	  //pass the function to thread

	  thread funcTest1(ThreadFunction1, 1, 25000);
	  thread funcTest2(ThreadFunction2, 25001, 50000);
	  funcTest1.join();
	  funcTest2.join(); 

	 end = clock();

	 double totaltime = (end - start) / double(CLOCKS_PER_SEC);

	 cout << "Total time is : " << totaltime << endl;
	 cout << CLOCKS_PER_SEC;


	 //##################################### 2.Thread class

	start = clock();
	test obj;
	thread t1(&test::ThreadFunction1,&obj, 1, 50);
	thread t2(&test::ThreadFunction2, &obj, 50, 100);
	t1.join();
	t2.join();

	end = clock();

	totaltime = (end - start) / double(CLOCKS_PER_SEC);

	cout << "Total time is : " << totaltime << endl;
	cout << CLOCKS_PER_SEC;

	//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ 3.Thread Lambda function
	start = clock();
	
	thread th1([] {std::cout << "Ilie "; });
	thread th2([] {std::cout << "Ioan"; });
	th1.join();
	th2.join();

	end = clock();

	totaltime = (end - start) / double(CLOCKS_PER_SEC);

	cout << "Total time is : " << totaltime << endl;
	cout << CLOCKS_PER_SEC;




	return 0;
}