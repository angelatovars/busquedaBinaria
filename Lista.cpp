#include <iostream>
#include <vector>

int main() {
	std::vector<int> lista;
	
	for (int i = 0; i <3; ++i) {
		std::cout << "Estimado ususrio ingrese los datos: ";
		int datos;
		std::cin >> datos;
		
		lista.push_back(datos);
		std::cout << "Datos ingresados correctamente" << std::endl;
	}
	
	std::cout << "\nDatos ingresados a la lista:" << std::endl;
	for (int dato : lista) {
		std::cout << dato << std::endl;
	}
	
	return 0;
}