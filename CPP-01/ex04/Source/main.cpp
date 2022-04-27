// Created by Onur Dursun on 4/25/22.

#include "../Include/Replace.hpp"

int fileError(string message)
{
	if (message != "")
		cerr << "Error: " << message << "\n./replace <your_fileName> <stringToReplace> <replacement>" << endl;
	return (1);
}

int main(int argc, char **argv)
{
	Replace replace;

	if (argc != 4)
			return (fileError("Wrong argument"));
	if (!replace.setFile(argv[1]))
		return (fileError(""));
	if (!replace.replace(argv[2], argv[3]))
		return (fileError(""));
	return  (0);
}