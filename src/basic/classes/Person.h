//
// Created by Arthur Abramov on 26.08.2017.
//

#ifndef AWESOME_CPP_PERSON_H
#define AWESOME_CPP_PERSON_H

#include <iostream>
using namespace std;

class Person {
    private:
        static unsigned int count;
        unsigned int id;

    protected:
        string name;

    public:
        //public static method
        static unsigned int getCount();
        //public method
        unsigned int getId();
        std::string getName();
        //constructor
        Person();

};


#endif //AWESOME_CPP_PERSON_H
