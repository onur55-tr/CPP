// Created by Onur Dursun on 4/25/22.

#include "../Include/Replace.hpp"

bool    Error(string message)
{
	if (message != "")
		cerr << "Error: " << message << endl;
	return  (false);
}

bool    Replace::setFile( string newFile ){
	if (inputFileStream.is_open())
		inputFileStream.close();
	if (newFile == "")
	{
		cerr << "The file to open can't be an empty string" << endl;
		return  (false);
	}
	inputFileStream.open(newFile);
	fileName = newFile;
	cout << "Input file set to " << newFile << endl;
	return (true);
}

bool    Replace::replace( string stringToReplace, string replacement ){
	string  result;
	size_t  replaceLen;

	replaceLen = stringToReplace.length();
	if (stringToReplace == "" || replacement == "")
		Error("Strings can't be empty");
	result.assign(istreambuf_iterator<char>(inputFileStream), istreambuf_iterator<char>());
	for (size_t pos = 0; pos < result.length(); pos++)
		if (result.compare(pos, replaceLen, stringToReplace) == 0)
		{
			result.erase(pos, replaceLen);
			result.insert(pos, replacement);
			//result.replace(pos, replaceLen, replacement);
		}
	outputToFile(result);
	return (true);
}

void    Replace::outputToFile( string fileContent ){
	ofstream    fileStream;
	string      outFileName;

	outFileName = fileName;
	transform(outFileName.begin(), outFileName.end(), outFileName.begin(), ::toupper);
	outFileName += ".replace";
	fileStream.open(outFileName);
	cout << "Writing modified content to be \"" << outFileName << "\"" << endl;
	fileStream << fileContent;
}
