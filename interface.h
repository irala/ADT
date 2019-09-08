#include <string>
class interface
{
    //no tiene estados
public:
    //interfaces no tienen que tener constructor ni destructor
    //son publicas porque tienen que ser accesibles
    virtual int miembro_f() = 0;

    virtual std::string get_name();
    virtual std::string get_surname();
    virtual int get_age()=0;
};