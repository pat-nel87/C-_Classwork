//
// Created by Patrick on 4/21/2021.
//

#ifndef UNTITLED_VALUEVIOLATION_H
#define UNTITLED_VALUEVIOLATION_H
#include <iostream>
#include <string>


using namespace std;


class valueViolation
{
public:
    valueViolation()
    {
        message = "A non positive number is entered";
    }

    valueViolation(string str)
    {
        message = str;
    }
    string what()
    {
        return message;
    }

private:
    string message;

};








#endif //UNTITLED_VALUEVIOLATION_H
