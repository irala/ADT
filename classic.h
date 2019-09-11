#include "adt.h"
class classic : public adt
{
private:
    /* data */
    //variables y funciones miembro
    int variable;
    //no puede tener metodos puros (declarados .h),si metodos definido(con cuerpo  .cpp)
public:
    virtual ~classic() {}
    // classic() = default;
    // virtual ~classic() = default;
     friend class main;

    virtual int miembro_f() override;

    virtual std::string get_name();
};