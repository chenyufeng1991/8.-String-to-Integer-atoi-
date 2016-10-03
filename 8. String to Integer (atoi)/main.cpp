//
//  main.cpp
//  8. String to Integer (atoi)
//
//  Created by chenyufeng on 10/3/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int myAtoi(string str)
{
    istringstream is(str);
    int result = 0;
    is >> result;

    return result;
}

int main(int argc, const char * argv[])
{
    int result = myAtoi("");
    cout << result;

    return 0;
}
