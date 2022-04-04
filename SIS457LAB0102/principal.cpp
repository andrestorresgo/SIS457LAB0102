#include <iostream>
using namespace std;

int flag;
int main() {
	do {
		cout << "Mi nombre es Andrés Alejandro Torres González, tengo 19 años, nací y actualmente vivo en Sucre, Bolivia" << "\n"
			"soy estudiante de Ingeniería en Ciencias de la Computación y actualmente curso el 3er semestre en la USFX." << "\n";
			cout << "Ingrese 1 si desea volver a mostrar la biografía, y cualquier otro caracter para salir:" "\n";
			cin >> flag;
	} while (flag == 1);

	system("pause");
	return 0;
}