
#include "interface.h"
class adt : public interface
{
protected:
     int random_number();

public:
    virtual ~adt() {}
    std::string name;
    std::string surname;
    int age;
    int variable_miembro;
    virtual int miembro_f() = 0;

    virtual std::string get_name() override;
    virtual std::string get_surname() override;
    virtual int get_age() override;

    
};
