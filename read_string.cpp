#include "read_string.h"
#include <iostream>
#include <vector>

using namespace std;

vector<string> chunks(string str,int arr[])
{
	int num = arr[0];
	//cout<<"Received :"<<str<<endl;
	
	vector<string> result;
	
	for(int i=1;i<num*2;i+=2)
	{
		string sub = str.substr(arr[i],arr[i+1]);
		result.push_back(sub);
	}

	return result;

}

