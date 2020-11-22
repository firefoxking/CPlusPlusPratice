#ifndef STUDENTS_H
#define STUDENTS_H
#include <string>
using namespace std;

class students{
public:
    typedef enum{
        BOY = 0,
        GIRL
    }SexType;

    int get_age() const{
        return this->age;
    }

    students& set_age(int age);

private:
    int age;
    SexType sex;
    string ss;
};

// students& students::set_age(int age)
// {
//     this->age = age;
//     return *this;
// }
#endif