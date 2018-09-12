//
// Created by Денис Гребенюк on 12.09.2018.
//

#include "SortFunc.h"
#include "treeFunc.h"
#include "string"
#include <fstream>
#include <iostream>
#include <list>
#include "iterator"
using namespace std;

void SortFunc::  sort(list<Cars> &cars, Cars *&FirstTemp){
    Cars *FT = FirstTemp;

    int i =0;
    cout << endl;
    while(FirstTemp -> next!=NULL){
        i++;
        if(i == 3){break;}
        while(FT->next!=NULL){
            FT = FT->next;


            if (std::string::npos != FT->nomer.find("df", 2) && FirstTemp->age == FT->age) {
                cars.push_back(*FT);

            }

        }
        FT = FirstTemp->next;
        FirstTemp = FirstTemp->next;
    }
    sort2(cars);

}

void SortFunc:: sort2(list<Cars> &cars){
    list<Cars>::iterator itr ;
    list<Cars>::iterator itr1;

    char *temp;
    for(itr = cars.begin(); itr != cars.end(); itr++){

        for(itr1 = itr; itr1 != cars.end(); ++itr1){
            if(strcmp((*itr).mark, (*itr1).mark) > 0){
                strcpy (temp,(*itr).mark);
                strcpy ((*itr).mark,(*itr1).mark);
                strcpy ((*itr1).mark,temp);
            }

        }

    }
}

void SortFunc:: sortnomer(list<Cars> &cars, Cars *&FirstTemp){
    cout << endl;

    sort(cars, FirstTemp);
    list<Cars>::iterator itr;
    for(itr = cars.begin(); itr != cars.end(); itr++){
        cout << (*itr).fam << " " << (*itr).name << " "  << (*itr).mark << " " << (*itr).nomer << " " <<(*itr).age << endl;

    }


}