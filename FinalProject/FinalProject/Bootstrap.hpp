//
//  Bootstrap.hpp
//  6883FinalProject
//
//  Created by 张环欣 on 2021-12-10.
//

#ifndef Bootstrap_hpp
#define Bootstrap_hpp

#include <stdio.h>
#include <vector>
#include "Stock.hpp"
#include <iostream>
#include <vector>
#include <random>
#include <map>

using namespace std;


map<string, vector<Stock*>> bootstrapping(vector<Stock*> stock_list, int i);

#endif /* Bootstrap_hpp */
