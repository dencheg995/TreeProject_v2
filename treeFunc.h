//
// Created by Денис Гребенюк on 11.09.2018.
//

#ifndef UNTITLED4_TREEFUNC_H
#define UNTITLED4_TREEFUNC_H
#include "string"
#include "list"

struct Cars{

    std::string fam;
    std::string name;
    char mark[40];
    std::string nomer;
    int age;
    Cars *next;



};




class treeFunc {

public:
    void create(Cars *&FirstTemp, std::list<Cars> &cars);
    void out(Cars *&FirstTemp);
};


#endif //UNTITLED4_TREEFUNC_H
