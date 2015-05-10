//
//  debug.cpp
//  CPP_Master_Mind
//
//  Created by Joshua Bernitt on 5/4/15.
//  Copyright (c) 2015 Joshua Bernitt. All rights reserved.
//

#include "debug.h"
#include <iostream>
using namespace std;
template<class T>
void print_array(T array[], int size) {
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << array[i] << ", ";
    }
    cout << "]";
}