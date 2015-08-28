// comment for class A
// Class A dev branch update
// Class A dev bracnch updated in remote repo

#include <tcClassA.hpp>

tcClassA::tcClassA()
{
   int lanArray1[2] = {1,2};
   int lanArray2[2];
   std::copy(std::begin(lanArray1), std::end(lanArray1), std::begin(lanArray2) );


   msStruct.mnNumber = 3;
   msStruct.mrValue = 4;
   msStruct.mbValid = true;

   tcClassA::tsMyStruct lasStruct1[2] =
   {
         {1, 1.1, false}, {2, 2.2, true}
   };
   tcClassA::tsMyStruct lasStruct2[2];

   std::copy(std::begin(lasStruct1), std::end(lasStruct2),
         std::begin(lasStruct2));

   tcClassA::tsMyStruct laasStruct1[2][2] =
   {
         {{1, 1.1, false}, {2, 2.2, false}},
         {{3, 3.3, true}, {4, 4.4, true} }

   };

   tcClassA::tsMyStruct laasStruct2[2][2];

   //std::copy(std::begin(laasStruct1), std::end(laasStruct1),
   //      std::begin(laasStruct2));

}

tcClassA::tsMyStruct tcClassA::GetStruct() const
{
   std::lock_guard<std::mutex> lcLock(mcMutex);
   return msStruct;
}
