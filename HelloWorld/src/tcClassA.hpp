// Comment for class A
#include <mutex>

class tcClassA
{
public:

   tcClassA();

	struct tsMyStruct
	{
	   int  mnNumber;
	   float mrValue;
	   bool mbValid;
	};

	void SetStruct(tsMyStruct& arsMyStruct);
	tsMyStruct GetStruct() const;

private:
   tsMyStruct msStruct;
   tsMyStruct masStruct[2];
   tsMyStruct maasStruct[2][2];
   tsMyStruct maaasStruct[2][2][2];

   mutable std::mutex mcMutex;

};
