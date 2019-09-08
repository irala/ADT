 #include "adt.cpp"
class classic :public adt
{
private:
    /* data */
    //variables y funciones miembro
    int variable;
    int miembro_f();
    //no puede tener metodos puros (declarados .h),si metodos definido(con cuerpo  .cpp)
public:
    classic(/* args */);
    ~classic();
    virtual int miembro_f();

    
};