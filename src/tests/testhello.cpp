#include <iostream>
#include <string>
#include <hello.h>

#include "config-hello.h"

using namespace std;

int main(int argc, char** argv)
{
    cout << "Testing " << endl;
	const string expected("Hello.");
	if(expected != hello)
	{
		cout << "Expected = '" << expected << "', but actual = '" << hello << "'." << endl;
		return 1;
	}
	
	cout << "Test passed." << endl;
	return 0;
}
