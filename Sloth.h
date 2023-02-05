//
// Created by Jeremiah Hawthorne on 2/5/23.
//
#include "animal.h"

#ifndef ANIMALS_SLOTH_H
#define ANIMALS_SLOTH_H


class Sloth: public animal{
public:
    Sloth(int price, int cost, int age, int babiesNum, int foodCost, int revenue) : animal(price, cost, age, babiesNum, foodCost, revenue) {

    }
};


#endif //ANIMALS_SLOTH_H
