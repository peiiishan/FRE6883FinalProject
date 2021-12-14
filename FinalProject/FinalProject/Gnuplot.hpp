

//  Created by PeishanLiu on 2021-12-10.

#ifndef Gnuplot_hpp
#define Gnuplot_hpp

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

vector<Matrix> get_computation_result(vector<Stock*> BEAT,vector<Stock*> MISS,vector<Stock*> MEET,const StockPrice& benchmark, const int n);
void Gnuplot_CAAR(vector<Matrix> computation_result);


#endif /* Gnuplot_hpp */
