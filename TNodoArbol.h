
using namespace std;
using namespace System;
using namespace System::Windows::Forms;

// Definición de la clase TNodoArbol
ref class TNodoArbol {
public:
    String^ info;
    TNodoArbol^ EnlaceIzquierdo;
    TNodoArbol^ EnlaceDerecho;

    TNodoArbol(String^ info) {
        this->info = info;
        EnlaceDerecho = nullptr;
        EnlaceIzquierdo = nullptr;
    }
};



