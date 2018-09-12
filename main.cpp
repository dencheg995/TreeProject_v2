#include <iostream>
#include "TreeSort.h"
#include "treeFunc.h"
#include "string"
#include <fstream>
#include "list"
#include "SortFunc.h"
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    Cars *FirstTemp = new Cars;
    list<Cars> list;
    treeFunc treeFunc1;
    treeFunc1.create(FirstTemp, list);
    treeFunc1.out(FirstTemp);
    SortFunc sortFunc;
    sortFunc.sortnomer(list, FirstTemp);

    TreeSort TREE;// создаем экземляр класса tree
    TREE.CreateTree(list);// вызываем метод и считываем данные в дерево
    TREE.SoutTree(TREE.getValue(), 1);// выводим наше дерево

    return 0;
}



