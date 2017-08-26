//
// Created by Arthur Abramov on 26.08.2017.
//

#include <gtest/gtest.h>
#include "iostream"
#include "Person.h"
#include "King.h"
using namespace std;


TEST(Classes, SimpleClass){

    cout << "\nPerson Count is " << Person::getCount() << endl;
    Person person0;
    cout << "Person Count is " << Person::getCount() << endl;
    cout << "Person Id is " << person0.getId() << endl;
    Person person1;
    cout << "Person Count is " << Person::getCount() << endl;
    cout << "Person Id is " << person1.getId() << endl;

    King king;

    cout << "Person(King) count is " << King::getCount() << endl;
    cout << "Person(King) Id is " << king.getId() << endl;
    king.rename("Harald Rada");
    cout << "Person(King) Name is " << king.getName() << endl;


}