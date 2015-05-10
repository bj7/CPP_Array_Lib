//
//  Array_Lib.cpp
//  CPP_Array_Lib
//
//  Created by Joshua Bernitt on 5/6/15.
//  Copyright (c) 2015 Joshua Bernitt. All rights reserved.
//

#include "Array_Lib.h"
#include <stdio.h>

template <typename T>
Array<T>::Array(int size) {
    this->size = size;
    this->array = new T[size]();
}

template <typename T>
int Array<T>::get_size() {
    return this->size;
}

template <typename T>
void Array<T>::set(int i, T a) {
    
    this->array[i] = a;
}

template<class T>
T* Array<T>::get() {
    return this->array;
}