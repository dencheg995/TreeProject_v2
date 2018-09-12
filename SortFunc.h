//
// Created by Денис Гребенюк on 12.09.2018.
//

#ifndef UNTITLED4_SORTFUNC_H
#define UNTITLED4_SORTFUNC_H
#include "treeFunc.h"
#include "string"
#include <fstream>
#include <iostream>
#include <list>
#include "iterator"
using namespace std;

class SortFunc {
public:
    void sort(std::list<Cars> &cars,Cars *&FirstTemp);
    void sort2(std::list<Cars> &cars);
    void sortnomer(std::list<Cars> &cars, Cars *&FirstTemp);

};


#endif //UNTITLED4_SORTFUNC_H
