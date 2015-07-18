#include <iostream>
using namespace std;

int main()
{
	std::cout << "Hello Bill" << std::endl;
	std::shared_ptr<int> lcIntSharedPtr(new int);
	*lcIntSharedPtr = 50;
	std::cout << "Value =" << *lcIntSharedPtr << std::endl;
	return 0;

}
