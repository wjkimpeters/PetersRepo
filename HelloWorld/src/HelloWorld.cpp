#include <iostream>
#include <tcClassA.hpp>
using namespace std;

int main()
{
   std::cout << "Happy Friday!!!" << std::endl;
	std::cout << "Hello Bill" << std::endl;
	std::shared_ptr<int> lcIntSharedPtr(new int);
	*lcIntSharedPtr = 10;
	std::cout << "Value =" << *lcIntSharedPtr << std::endl;

	tcClassA lcClassA;
	tcClassA::tsMyStruct lsMyStruct = lcClassA.GetStruct();
	std::cout << "The int is " << lsMyStruct.mnNumber << std::endl;
	std::cout << "The float is " << lsMyStruct.mrValue << std::endl;

	return 0;

}
