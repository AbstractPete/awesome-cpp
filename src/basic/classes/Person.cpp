//
// Created by Arthur Abramov on 26.08.2017.
//

#include "Person.h"
#include "iostream"
using namespace std;


// okay, initialization of static private fields is crazy as fuck :D
unsigned int Person::count = 0;

// public static function for class Person
unsigned int Person::getCount() {
    return count;
}

Person::Person(){
    id = count;
    count++;

}

// public unsigned int method, fill the difference with implementation of static functions  :D
unsigned int Person::getId() {
    return id;
}
