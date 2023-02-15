#include "KomplexND.h"
#include "Komplexzahlen.h"
#include <iostream>

using namespace std;



int main()
{



            Komplexzahlen c1, c2, c3, c4, c5, c6;
            double scalar1;
            double scalar2;


            while(!(cin >> c1)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Versuchen Sie noch mal: "<<endl;

            }

            while(!(cin >> c2)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Versuchen Sie noch mal: "<<endl;

            }
            cout <<endl<<"zahl eingeben für skalar multiplikation für erste Komplex zahl: ";

            while(!(cin >> scalar1)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Versuchen Sie noch mal: ";

            }

            cout<<"zahl eingeben für skalar multiplikation für zweite Komplexzahl: ";

            while(!(cin >> scalar2)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Versuchen Sie noch mal: ";

            }
            cout<<endl;
            c3 = c1 + c2;
            c4 = c1 * c2;
            c5 = c1 * scalar1;
            c6 = c2 * scalar2;
            c1.setPolar();


            cout <<"Addition: "<<c3 << endl <<"Multiplication: "<< c4 <<endl;
            cout<<"Multiplication scalar:"<< c5 << c6<<endl;




            int N;
            cout<<"Wie viel Komplex Zahlen in einem Vektor: ";
            cin>> N;
            while (N <= 0) {
            cout << "Bitte geben Sie eine positive Zahl größer als 0 ein: ";
            cin >> N;
            }
            KomplexND v(N);
            KomplexND v2(N);

            v.insert();
            v2.insert();

            KomplexND result = v + v2;

            result.display();
            cout<<endl;


}