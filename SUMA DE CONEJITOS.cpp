// SUMA DE CONEJITOS.
//Nombre:Omar Emuiliano Gonzalez Ayala
//Grupo:1TM_13

#include <iostream>
#include "Eigen/Dense" 

using namespace std;
using namespace Eigen; 

int main() {
    int numeroConejos = 0;
    double alimentoTotal = 0;

    cout << "Ingrese el número de conejos: ";
    cin >> numeroConejos;

    alimentoTotal = numeroConejos * 50;

    cout << "Alimento necesario para " << numeroConejos << " conejos es de " << alimentoTotal << " gramos." << endl;

    MatrixXd A(3, 3);
    A << 1, 2, 3,
        4, 5, 6,
        1, 1, 1;

    cout << "Matriz A:" << endl;
    cout << A << endl << endl;

    MatrixXd B(3, 3);
    B << -1, 0, -1,
        2, 1, 5,
        1, 1, 1;

    cout << "Matriz B:" << endl;
    cout << B << endl << endl;


    MatrixXd C;

    cout << "Suma de matrices C = A + B:" << endl;
    C = A + B;
    cout << C << endl << endl;

    cout << "Resta de matrices C = A - B:" << endl;
    C = A - B;
    cout << C << endl << endl;

    cout << "Multiplicación de matrices C = A * B:" << endl;
    C = A * B;
    cout << C << endl << endl;

    cout << "Adjunta de la matriz A:" << endl;
    cout << A.adjoint() << endl << endl;

    return 0;
}
