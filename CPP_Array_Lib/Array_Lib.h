//
//  Array_Lib.h
//  CPP_Array_Lib
//
//  Created by Joshua Bernitt on 5/6/15.
//  Copyright (c) 2015 Joshua Bernitt. All rights reserved.
//

#ifndef __CPP_Array_Lib__Array_Lib__
#define __CPP_Array_Lib__Array_Lib__

#include <stdio.h>
template <class T> class Array {
private:
    int size;
    T *array;
    
public:
    Array(int size);
    
    int get_size();
    
};

#endif /* defined(__CPP_Array_Lib__Array_Lib__) */
