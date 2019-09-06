#include <functional>
///todos pueden declaradas funciones miembre pero no todos pueden tener definiciones
class interface
{
    //no tiene estados
public:
    //interfaces no tienen que tener constructor ni destructor
    //son publicas porque tienen que ser accesibles
    virtual int miembro_f() = 0;
};
//variable -> parte de la memoria
//espacio en memoria no anonimo que puede ser interpretado en alguno o varios tipos
//miembro -> cualquier elemento que pertenezca a una categoria (clase, struct, funcion...)

class adt
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
};

class real
{
private:
    /* data */
    //variables y funciones miembro
    int variable;
    int miembro_f();
    //no puede tener metodos puros (declarados .h),si metodos definido(con cuerpo  .cpp)
public:
    real(/* args */);
    ~real();
    virtual int miembro_f()
    {
    }
};
//variables y funciones libres (estructuradas)
int variable_libre;
int free_f();
int main()
{
    //interface and adt cant be instanciated only if have puntero
    interface *i;
    adt *a;
    real r;

    //variable local
    int variable_l;
    std::function<int()> local_f = []() -> int {
        int v;
        return v;
    };
    return 1;
}
