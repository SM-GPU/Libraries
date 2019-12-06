#include <iostream>
#include <string>
#include "Read_Pattern.h"


int main()
{
	Read_Pattern pat;
	//int arr[] = {22,44,65};
	//int n = sizeof(arr)/sizeof(arr[0]);

	pat.offset.push_back(22);
	pat.offset.push_back(44);
	pat.offset.push_back(65);
	pat.text = "Welcome to CUDA World! This is a Test File. We are working on it. Good Bye";
	//pat.matches = {0,1,12,4,1,2,0,5,11,5,31,5,4};
	pat.matches.push_back(0);
	pat.matches.push_back(1);
	pat.matches.push_back(12);
	pat.matches.push_back(4);
	pat.matches.push_back(1);
	pat.matches.push_back(2);
	pat.matches.push_back(0);
	pat.matches.push_back(5);
	pat.matches.push_back(11);
	pat.matches.push_back(5);
	pat.matches.push_back(3);
	pat.matches.push_back(1);
	pat.matches.push_back(5);
	pat.matches.push_back(4);
	
	vector<string> result = pat.chunks();
	cout<<"Matched Patterns"<<endl;
	for(int i=0;i<result.size();i++)
	{	
		cout<<"#"<<i<<":"<<result[i]<<endl;
	}
	return 0;


}
