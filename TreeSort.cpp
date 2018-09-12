//
// Created by Денис Гребенюк on 12.09.2018.
//

#include "TreeSort.h"

#include "treeFunc.h"
#include "string"
#include <fstream>
#include <iostream>
#include <list>
#include "iterator"
using namespace std;


void TreeSort :: TreeRoot(string x, Tree **tmp) {
    int a = 1 + rand() % 100;
    if(*tmp == NULL){
        *tmp = new Tree; // выделяем память под указатель корня
        (**tmp).TreeElement = x; //

        (**tmp).left = NULL;
        (**tmp).right = NULL;

    }
    else {
        if(a < 50) TreeRoot(x, &(**tmp).left);// если х меньше, чем предыдущее число в дереве, то помещаем число слева
        else TreeRoot(x, &(**tmp).right); // иначе справа

    }
}


void TreeSort::SoutTree(Tree **Sout, int l) {


    if (*Sout != NULL) {

            SoutTree(&((**Sout).right), l + 1);
            for (int i = 1; i <= l; i++) cout << "    "; // цикл для пробелов
            cout << (**Sout).TreeElement << endl;// выводим значение дерева
            SoutTree(&((**Sout).left), l + 1);
        }
    }



void TreeSort::CreateTree(list<Cars> &cars){
    list<Cars>::iterator itr = cars.begin();
    cout << endl;
    for(itr; itr != cars.end(); itr++){
        TreeRoot((*itr).fam, &TREE);
    }



}














