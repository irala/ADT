 
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
    virtual int miembro_f() = 0;

    virtual std::string get_name();
    virtual std::string get_surname();
    virtual int get_age();
};
