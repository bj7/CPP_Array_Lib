//
//  Array_Lib.cpp
//  CPP_Array_Lib
//
//  Created by Joshua Bernitt on 5/6/15.
//  Copyright (c) 2015 Joshua Bernitt. All rights reserved.
//

#include "Array_Lib.h"

template<class T>

Array<T>::Array(int size) {
    this->size = size;
    this->array = new T[size];
}

template<class T>
int Array<T>::get_size() {
    return this->size;
}