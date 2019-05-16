// Logger.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#pragma warning(disable : 4996)
#include <iostream>
#include <ctime>

using namespace std;

class Logger {
	
	// Member Functions() 
public:
	void printLog(string message)
	{
		time_t now = time(0);

		// convert now to string form
		char* dt = ctime(&now);

		cout << "Date: " << dt << "Message: " << message << endl;
	}
};
