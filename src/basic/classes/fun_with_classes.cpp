//
// Created by Arthur Abramov on 26.08.2017.
//

#include <gtest/gtest.h>
#include "iostream"
#include "Person.h"
using namespace std;


TEST(Classes, SimpleClass){

    cout << "\nPerson Count is " << Person::getCount() << endl;
    Person person0;
    cout << "Person Count is " << Person::getCount() << endl;
    cout << "Person Id is " << person0.getId() << endl;
    Person person1;
    cout << "Person Count is " << Person::getCount() << endl;
    cout << "Person Id is " << person1.getId() << endl;

}