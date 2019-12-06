//
//  chunks
//  Read_Pattern
//
//  Created by simi on 12/5/19.
//  Copyright © 2019 simi. All rights reserved.
//

#include "Read_Pattern.h"

vector<string>Read_Pattern::chunks()
{
	vector<string> lines;
	int start=0;
    int n=0;
    vector<string> result;
    
    //Edge cases
    if (offset.size()<1)
        return {};
    
    if (matches.size()<1)
        return {};
    
    //------------------------------------------------------------
    // Read all lines based on offset
    // -----------------------------------------------------------
	for(int i=0;i<offset.size();i++)
	{
		int end = offset[i] - start;
		lines.push_back(text.substr(start, end));
		start = offset[i]+1;
	}	

	lines.push_back(text.substr(start)); //last line in the string
	
	
	//matches:{lineno,numberOfPatterns,starIdx,length}
	for(int m=0;m<lines.size(); m++)
	{
		string str = lines[m];
		int ln = matches[n];
		
		//If line matches with given line for patterns
		if(m==ln)
		{
			n+=1; //Pattern Count
			int pattern_count = matches[n];
			n+=1; //start of pattern
			for(int k=0;k<pattern_count;k++)
			{
				string sub = str.substr(matches[n],matches[n+1]);
				result.push_back(sub);
				n+=2; //Next pattern start	
			
			}
			
		}
	
	}
	
	return result;
}
