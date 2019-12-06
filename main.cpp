//
//  main.cpp
//  CUDARegEx
//
//  Created by simi on 12/6/19.
//  Copyright © 2019 simi. All rights reserved.
//

#include <iostream>
#include "Read_Pattern.h"

int main(int argc, const char * argv[]) {
    Read_Pattern pat;
    pat.text = "Welcome to CUDA World! This is a Test File. We are working on it. Good Bye";
    pat.matches = {0,1,12,4,1,2,0,5,11,5,31,5,4};
    pat.offset = {22,44,65};

    vector<string> result = pat.chunks();
    cout<<"Matched Patterns"<<endl;
    for(int i=0;i<result.size();i++)
    {
        cout<<"#"<<i<<":"<<result[i]<<endl;
    }
    return 0;
}
