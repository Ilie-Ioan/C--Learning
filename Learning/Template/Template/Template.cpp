#include <iostream>
#include <string>

using namespace std;


template<class t>
class suma
{
private:
	t var1;
	t var2;
public:
	suma(t x, t y)
	{
		var1 = x;
		var2 = y;
	}
	void add()
	{
		cout << var1 + var2<<endl;
	}
};
int main()
{
	/*cout <<"SUM WITH INT TYPES: " << sum<int>(3, 7) << endl;
	cout <<"SUM WITH FLOAT TYPES: " << sum<float>(3.4f, 7.9f) << endl;
	cout << "SUM WITH DOUBLE TYPES: " << sum<double>(3.0, 7.0) << endl;
	cout << "SUM WITH STRING TYPES: " << sum<string>("Ilie ", "Ioan") << endl;*/

	suma<int> obj1(2, 3);
	suma<float> obj2(2.9f, 3.1f);
	suma<string> obj3("Roman ", "Alin");
	obj1.add();
	obj2.add();
	obj3.add();

	return 0;
}