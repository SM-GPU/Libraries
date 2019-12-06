//
//  Read_Pattern
//
//  Created by simi on 12/5/19.
//  Copyright © 2019 simi. All rights reserved.
//
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
