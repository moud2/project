

#include "Komplexzahlen.h"
#include <iostream>
#include <cmath>



Komplexzahlen::Komplexzahlen() {
    real = 0;
    imag = 0;
}

Komplexzahlen::Komplexzahlen(double r, double i) {
    real = r;
    imag = i;
}



istream& operator>>(istream& is, Komplexzahlen& c) {

    char dummy;
    cout << "Komplex zahlen eingeben in form (real imag): ";
    is >> dummy >> c.real >>  c.imag>>dummy;
    return is;
    
}



ostream& operator<<(ostream& os, const Komplexzahlen& c) {
    os << "(" << c.real << " " << c.imag <<")";
    return os;
}



Komplexzahlen Komplexzahlen::operator+(const Komplexzahlen& other)const{
      
       Komplexzahlen result;
       result.real = real + other.real;
       result.imag = imag + other.imag;
       
        return result;

}



Komplexzahlen Komplexzahlen::operator*(const Komplexzahlen &other){
      
        Komplexzahlen result;
        result.real = (real*other.real)-(imag*other.imag);
        result.imag  = (real*other.imag)+(other.real*imag);
        
        return result;

 }

 Komplexzahlen Komplexzahlen::operator*(double scalar) {
    
        Komplexzahlen result;
        result.real =  real * scalar;
        result.imag  = imag * scalar;
        
        return result;
   }
   void Komplexzahlen::setPolar(){
        double magnitude = sqrt(real * real + imag * imag);
        double angel = acos( real/magnitude);
        if (imag < 0)
        {
            cout<< "Angel = " << -1 * angel << "Magnitude = " << magnitude<<endl;

        }else
        {
            cout<< "Angel = " << angel <<" "<< "Magnitude = " << magnitude<<endl;
        }
   }
