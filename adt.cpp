#include <string>
#include "interface.h"
class adt : public interface
{
    //las adt pueden ser o no accesibles
    //tienen constructor y destructor
    //puede tener estados, es adt en el momento en el que hay un metodo puro.
private:
    /* data */
public:
    adt(/* args */);
    ~adt();

    int variable_miembro;
    std::string name;
    virtual int miembro_f() = 0;

    std::string get_name();
    std::string get_surname();
    int get_age();

    // Provide implementation for the first method
    std::string adt::get_name()
    {
        // Your implementation
        name = "Bimo";
        return name;
    }
};
