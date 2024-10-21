#include <iostream>


using namespace std;

float degreesToRadians (int degress) {
    const float PI = 3.14159274101257324219;
    float formula = degress * (PI / 180);
    return formula;
}

int main(){

    cout << "Grado a radianes \n";
    cout << "90 grados a radianes es " << degreesToRadians(90) <<endl;


    cout << "Grado      Radianes";
    cout << "\n 0       0.0000";
    cout << "\n 90      1.5708";
    cout << "\n 180     3.1416";
    cout << "\n 270     4.7124";
    cout << "\n 360     6.2832";
    return 0;
}