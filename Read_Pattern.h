#include <iostream>
#include <vector>

using namespace std;

class Read_Pattern
{
	public:
		string text;
		vector<int> offset;
		vector<int> matches;
	
		vector<string> chunks();
};
