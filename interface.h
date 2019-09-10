#include <string>
class interface
{
    //no tiene estados
public:
    //interfaces no tienen que tener constructor ni destructor
    //son publicas porque tienen que ser accesibles
    virtual int miembro_f() = 0;
    ~interface(){}

    virtual std::string get_name()=0;
    virtual std::string get_surname()=0;
    virtual int get_age()=0;
};