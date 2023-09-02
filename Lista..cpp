#include <iostream>
#include <vector>
using namespace std;

class Lista {
private:
    std::vector<int> lista;

public:
    // Método para insertar un elemento en la lista
    void insertar(int dato) {
        lista.push_back(dato);
        cout << "Dato ingresado correctamente" << endl;
    }

    // Método para buscar un elemento en la lista
    bool buscar(int dato) {
        for (size_t i = 0; i < lista.size(); ++i) {
            if (lista[i] == dato) {
                cout << "Dato encontrado en la posición " << i << endl;
                return true;
            }
        }
        cout << "Dato no encontrado en la lista" << endl;
        return false;
    }

    // Método para borrar un elemento de la lista
    bool borrar(int dato) {
        for (size_t i = 0; i < lista.size(); ++i) {
            if (lista[i] == dato) {
                lista.erase(lista.begin() + i); // Borra el elemento en la posición i
                cout << "Dato borrado correctamente" << endl;
                return true;
            }
        }
        cout << "Dato no encontrado en la lista" << endl;
        return false;
    }

    // Método para actualizar un elemento en la lista
    bool actualizar(int datoAntiguo, int datoNuevo) {
        for (size_t i = 0; i < lista.size(); ++i) {
            if (lista[i] == datoAntiguo) {
                lista[i] = datoNuevo; // Actualiza el elemento en la posición i
                cout << "Dato actualizado correctamente" << endl;
                return true;
            }
        }
        cout << "Dato antiguo no encontrado en la lista" << endl;
        return false;
    }

    // Método para mostrar la lista
    void mostrar() {
        cout << "\nDatos en la lista:" << endl;
        for (int dato : lista) {
            cout << dato << endl;
        }
    }
};

int main() {
    Lista miLista;

    for (int i = 0; i < 3; ++i) {
        int dato;
        cout << "Numero a insertar: ";
        cin >> dato;
        miLista.insertar(dato);
    }

    int datoBuscar;
    cout << "Numero a buscar: ";
    cin >> datoBuscar;
    miLista.buscar(datoBuscar);

    int datoBorrar;
    cout << "Numero a borrar: ";
    cin >> datoBorrar;
    miLista.borrar(datoBorrar);

    int datoAntiguo, datoNuevo;
    cout << "Numero a actualizar: ";
    cin >> datoAntiguo;
    cout << "Nuevo numero: ";
    cin >> datoNuevo;
    miLista.actualizar(datoAntiguo, datoNuevo);

    miLista.mostrar();

    return 0;
}