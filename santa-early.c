#include <stdio.h>
using namespace std;

/**
 * Early C++ attempt.
 */

void main() 
{
	std::list<std::list<Person>> directory;

	ifstream myReadFile;
 	myReadFile.open("text.txt");
 	char pName[100];
 	if (myReadFile.is_open()) 
 	{
 		while (!myReadFile.eof())
 		{
    		myReadFile >> pName;
    		pch = strtok (pName," ");
  			while (pch != NULL)
  			{
    			pch = strtok (NULL, " ,.-");
  			}
    	}
	}
}