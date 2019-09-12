#include <string>
#include "adt.h"

// Provide implementation for the first method
std::string adt::get_name()
{
    // Your implementation
    name = "Bimo";
    return name;
}

// Provide implementation for the first method
std::string adt::get_surname()
{
    // Your implementation
    surname = "irala";
    return name;
}

// Provide implementation for the first method
int adt::get_age()
{
    // Your implementation
    age = 1;
    return age;
}
int adt::random_number()
{
    int random = rand() % 10 + 1;
    return random;
}