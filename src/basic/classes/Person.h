//
// Created by Arthur Abramov on 26.08.2017.
//

#ifndef AWESOME_CPP_PERSON_H
#define AWESOME_CPP_PERSON_H


class Person {
    private:
        static unsigned int count;
        unsigned int id;

    public:
        static unsigned int getCount();

        unsigned int getId();
        Person();
};


#endif //AWESOME_CPP_PERSON_H
