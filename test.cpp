//#include <iostream>
#include "read_string.h"
#include <vector>

//using namespace std;

int main()
{
	string str="Hello CUDA World!";
	int arr[] = {2,6,4,10,3};

	vector<string> result = chunks(str,arr);
	
	for(int i=0;i<result.size();i++)
	{
		cout<<"Chunk "<<i<<":"<<result[i]<<endl;
	}
	return 0;

}
