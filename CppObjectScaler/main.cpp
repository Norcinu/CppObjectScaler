#include <iostream>
#include <string>
#include "tinyxml2/tinyxml2.h"

using std::string;
using std::cin;
using std::getline;
using std::endl;
using std::cout;

using namespace tinyxml2;

int main(int argc, char **argv)
{
	string line = "";

	if (argc == 1) {
		cout << "Enter file location: " << std::endl;
		while (line == "")
			getline(cin, line);
	}
	
	XMLDocument document;
	document.LoadFile(argc > 1 ? argv[1] : line.c_str());
	
	if (document.ErrorID() > 0)
		return document.ErrorID();
	else {
		document.Parse(line.c_str());
		auto element = document.FirstChild();
		int a =0;
	}
}