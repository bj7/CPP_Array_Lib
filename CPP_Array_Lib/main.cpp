//
//  main.cpp
//  CPP_Array_Lib
//
//  Created by Joshua Bernitt on 5/6/15.
//  Copyright (c) 2015 Joshua Bernitt. All rights reserved.
//

#include <iostream>
#include "Array_Lib.cpp"
#include "Array_Lib.h"
#include "debug.h"
#include "debug.cpp"
#include <libc.h>
#include <stdlib.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    Array<int> array = *new Array<int>(5);
    array.set(3, 7);
    print_array(array.get(), array.get_size());
    
    return 0;
}
