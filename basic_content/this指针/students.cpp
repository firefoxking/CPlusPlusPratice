#include "students.h"
using namespace std;

students& students::set_age(int age)
{
    this->age = age;
    return *this;
}