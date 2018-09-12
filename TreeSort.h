//
// Created by Денис Гребенюк on 12.09.2018.
//

#ifndef UNTITLED4_TREESORT_H
#define UNTITLED4_TREESORT_H

#include "treeFunc.h"
#include "string"
#include <fstream>
#include <iostream>
#include <list>
#include "iterator"
using namespace std;

#include <clocale>

 struct Tree{
    std:: string TreeElement;
    Tree *left;
    Tree *right;
};

class TreeSort{

private:
    Tree *TREE; //указатель на корень дерева

public:
    TreeSort() //иницилизируем конструктор
    {
        TREE = NULL;
    }

    Tree** getValue(){
        return &TREE;
    }; // возвращаем значение корня дерева

    void TreeRoot(string, Tree**); //метод для распределения данных по дереву
    void SoutTree(Tree**, int); // метод для вывода дерева на консоль
    void CreateTree(list<Cars> &cars); // метод для чтения дерева из файла

};


#endif //UNTITLED4_TREESORT_H
