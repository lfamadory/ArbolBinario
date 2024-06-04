
#include "TNodoArbol.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;



ref class ArbolBinario {
public:
    TNodoArbol^ raiz;

    ArbolBinario() {
        raiz = nullptr;
    }

    bool vacio() {
        return raiz == nullptr;
    }

    void InsertarRaiz(TNodoArbol^ a) {
        if (vacio()) {
            raiz = a;
        }
    }

    void Insertar(TNodoArbol^ a, TNodoArbol^ padre) {
        if (padre->EnlaceIzquierdo == nullptr) {
            padre->EnlaceIzquierdo = a;
        }
        else {
            padre->EnlaceDerecho = a;
        }
    }

    void InsertarIzq(TNodoArbol^ a, TNodoArbol^ padre) {
        if (padre->EnlaceIzquierdo == nullptr) {
            padre->EnlaceIzquierdo = a;
        }
        else {
            MessageBox::Show("Error: enlace lleno");
        }
    }

    void InsertarDer(TNodoArbol^ a, TNodoArbol^ padre) {
        if (padre->EnlaceDerecho == nullptr) {
            padre->EnlaceDerecho = a;
        }
        else {
            MessageBox::Show("Error: enlace lleno");
        }
    }

    void EliminarDerecho(TNodoArbol^ padre) {
        TNodoArbol^ aux;
        aux = padre->EnlaceDerecho;
        padre->EnlaceDerecho = nullptr;
        MessageBox::Show("El elemento eliminado es = " + aux->info);
    }

    void EliminarIzquierdo(TNodoArbol^ padre) {
        TNodoArbol^ aux;
        aux = padre->EnlaceIzquierdo;
        padre->EnlaceIzquierdo = nullptr;
        MessageBox::Show("El elemento eliminado es = " + aux->info);
    }

private:
    String^ PreOrden1(TNodoArbol^ r) {
        String^ result = "";
        if (r != nullptr) {
            result += r->info + "  ";
            result += PreOrden1(r->EnlaceIzquierdo);
            result += PreOrden1(r->EnlaceDerecho);
        }
        return result;
    }

public:
    String^ PreOrden1() {
        return PreOrden1(raiz);
    }

    String^ EntreOrden(TNodoArbol^ r) {
        String^ result = "";
        if (r != nullptr) {
            result += EntreOrden(r->EnlaceIzquierdo);
            result += r->info + "  ";
            result += EntreOrden(r->EnlaceDerecho);
        }
        return result;
    }

    String^ PosOrden(TNodoArbol^ r) {
        String^ result = "";
        if (r != nullptr) {
            result += PosOrden(r->EnlaceIzquierdo);
            result += PosOrden(r->EnlaceDerecho);
            result += r->info + "  ";
        }
        return result;
    }

private:
    TNodoArbol^ buscar(TNodoArbol^ r, String^ nombre) {
        if (r != nullptr) {
            if (r->info == nombre) {
                return r;
            }
            TNodoArbol^ aux = buscar(r->EnlaceIzquierdo, nombre);
            if (aux != nullptr) {
                return aux;
            }
            else {
                return buscar(r->EnlaceDerecho, nombre);
            }
        }
        return nullptr;
    }

public:
    TNodoArbol^ buscar(String^ nombre) {
        return buscar(raiz, nombre);
    }
};


