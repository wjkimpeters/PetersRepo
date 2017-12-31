//============================================================================
// Name        : ReadXmlFile.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <boost/filesystem.hpp>
#include <tcReadCsvFile.hpp>

using namespace std;

int main() {
	cout << "!!!Hello there Will!!!" << endl; // prints !!!Hello World!!!

	boost::filesystem::path full_path( boost::filesystem::current_path() );
	std::cout << "Current path is : " << full_path << std::endl;

	tcReadCsvFile("../Data/MyFile.csv");

	int lnI = 0;
	while (lnI++ < 10 )
	{
	   std::cout << "lnI = " << lnI << std::endl;
	}

	return 0;
}
