#include <tcReadCsvFile.hpp>
#include <iostream>
#include <fstream>
#include <sstream>


tcReadCsvFile::tcReadCsvFile( std::string acCsvFullPathFileName )
{
   std::cout << "In constructor" << std::endl;

   ReadFile( acCsvFullPathFileName );
   int lnNumRows = mcCsvData.size();
   for ( int lnI = 0; lnI < lnNumRows; ++lnI )
   {
      std::cout << "Num elements in row " << lnI << " is " <<
            mcCsvData[lnI].size() << std::endl;
   }
}

tcReadCsvFile::~tcReadCsvFile()
{

}

void tcReadCsvFile::ReadFile( std::string acCsvFullPathFileName )
{
   std::fstream lcFile(acCsvFullPathFileName);
   std::string lcStringData;

   if ( lcFile )
   {
      while ( std::getline( lcFile, lcStringData ) )
      {
         std::vector<double> lcVector;
         std::stringstream lcStringStream1( lcStringData );

         std::string lcTempString;
         while ( std::getline( lcStringStream1, lcTempString, ',') )
         {
            std::stringstream lcStringStream2( lcTempString );
            double lrValue;
            lcStringStream2 >> lrValue;
            lcVector.push_back( lrValue );
            std::cout << "lrValue = " << lrValue << std::endl;
         }
         mcCsvData.push_back( lcVector );
      }
   }
   else
   {
      std::cout << "Could not open " << acCsvFullPathFileName << std::endl;
   }
}
