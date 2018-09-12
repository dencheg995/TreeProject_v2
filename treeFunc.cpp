//
// Created by Денис Гребенюк on 11.09.2018.
//

#include "treeFunc.h"
#include "string"
#include <fstream>
#include <iostream>
#include <list>
#include "iterator"
using namespace std;




void  treeFunc:: create(Cars *&FirstTemp, list<Cars> &cars){
    Cars *FT;
    FT = FirstTemp;
    ifstream fs("test.txt");

    fs >> FT->fam >> FT->name >> FT-> mark >> FT->nomer >> FT->age;

    while(fs) {
        FT->next = new Cars();
        FT = FT->next;
        fs >> FT->fam >> FT->name >> FT-> mark >> FT->nomer >> FT->age;


    }
    fs.close();


}




void treeFunc :: out(Cars *&FirstTemp){
    Cars *FT;

    FT = FirstTemp;

    ofstream of("out.txt");

    of << FT->fam << " "  << FT->name << " " << FT->mark << " " << FT->nomer << " " << FT->age << " " << endl;

    while(FT->next){

        FT = FT -> next;
        of << FT->fam << " "  << FT->name << " " << FT->mark << " " << FT->nomer << " " << FT->age << " " << endl;

    }
    of.close();
}



