//
// Created by Jeremiah Hawthorne on 2/3/23.
//

#ifndef ANIMALS_ANIMAL_H
#define ANIMALS_ANIMAL_H


/*
 * Review of OOP basics:
 *
 * WHat is an object?
 *
 * Objects are indepdent units right, they are seperate from their class blueprints.
 * A class is the blueprint of an building, and the builiding is an object.
 * The object is the cookie, and the class is the cookie cutter.
 * An object is an instance of the class, and it is different and
 * seperate than that class and other objects. The object is different than the
 * class, and is form of the class it is an instance off.
 * Each object is different than the class blueprint. This is primarily
 * done with constructors, which are used to intalize the class mebers.
 *
 */


// Project specs link: https://classes.engr.oregonstate.edu/eecs/fall2021/cs162-020/assignments/Assignment3_F21.pdf

class animal {
  // so in our zootychoon project we will have
    // constructor format:
    // classname() {};
    // do not forget the };

    // This will be an abstract class to enable us to in inherit and requrie
    // that all of our animals have different features. And the same variable
    // names.

    // Every object has certain traits.
    // For example an object of the car class could have color, spped, size, cost
    // as its variables those are the object's traits.

private:
    int price;
    int cost;
    int age;
    int babiesNum;
    int foodCost;
    int revenue;
public:
    animal(int price, int cost, int age, int babiesNum, int foodCost, int revenue) {
        this -> price = price;
        this -> cost = cost;
        this -> age = age;
        this -> babiesNum = babiesNum;
        this -> foodCost = foodCost;
        this -> revenue = revenue;
    }
    // like this. in java this -> points to the instance variable when a local
    // and instance var have the same  name.


};


#endif //ANIMALS_ANIMAL_H
