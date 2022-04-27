#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

using   std::cout;
using   std::string;
using   std::cerr;
using   std::istreambuf_iterator;
using   std::ofstream;
using   std::ifstream;
using   std::transform;
using   std::endl;

class Replace
{
public:
	bool setFile ( string newFile );
	bool replace ( string stringToReplace, string replacement );
	void outputToFile ( string fileContent );
private:
	string      stringToReplace;
	string      replacement;
	string      fileName;
	ifstream    inputFileStream;
};

#endif //REPLACE_HPP
