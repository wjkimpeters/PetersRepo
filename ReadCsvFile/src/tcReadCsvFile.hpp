#include <string>
#include <vector>

class tcReadCsvFile
{
public:
   tcReadCsvFile( std::string acCsvFullPathFileName );

   ~tcReadCsvFile();

private:

   void ReadFile( std::string acCsvFullPathFileName );

   std::vector< std::vector <double> > mcCsvData;

};
