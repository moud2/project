

#ifndef KOMPLEXZAHLEN_H
#define KOMPLEXZAHLEN_H

#include<iostream>
#include <cmath>


using namespace std;



class Komplexzahlen
{
private:

   double real;
   double imag;
   
   
  

public:
   
/**
* @brief Standardkonstruktor, initialisiert die komplexe Zahl auf `(0,0)`
* 
*/
Komplexzahlen();
/**
 * * @brief Konstruktor, initialisiert die komplexe Zahl auf `(r,i)`
* 
* @param r Realteil der komplexen Zahl
* @param i Imaginaerteil der komplexen Zahl
*/
Komplexzahlen (double r, double i);
   
 /**
     * @brief Überladener Stream-Operator, liest die komplexe Zahl aus einem Eingabestream ein
     * 
     * @param is Eingabestream
     * @param c Komplexzahl, welche aus dem Eingabestream gelesen wird
     * @return Referenz auf den Eingabestream
     */
friend istream& operator>>(istream& is, Komplexzahlen& c);
/**
* @brief Überladener Stream-Operator, schreibt die komplexe Zahl in einen Ausgabestream
* 
* @param os Ausgabestream
* @param c Komplexzahl, welche in den Ausgabestream geschrieben wird
* @return Referenz auf den Ausgabestream
*/
friend ostream& operator<<( ostream& os, const Komplexzahlen& c);
 /**
* @brief Überladener Additions-Operator, addiert zwei komplexe Zahlen
* 
* @param other Andere komplexe Zahl
* @return Summe der beiden komplexen Zahlen
*/
Komplexzahlen operator+( const Komplexzahlen& other) const;
/**
 * @brief Überladener Multiplikations-Operator, multipliziert zwei komplexe Zahlen
 * 
 * @param other Andere komplexe Zahl
 * @return Produkt der beiden komplexen Zahlen
 */
 Komplexzahlen operator*(const Komplexzahlen& other);
/**
* @brief Überladener Multiplikations-Operator, multipliziert eine komplexe Zahl mit einem Skalar
* 
* @param scalar Skalar, mit dem die komplexe Zahl multipliziert wird
* @return Produkt der komplexen Zahl und des Skalars
*/
Komplexzahlen operator*(double scalar);
/**
 * @brief Setzt die komplexe Zahl in Polarkoordinaten
 * 
 * Berechnet die Magnitude und den Winkel der komplexen Zahl und gibt sie auf der Konsole aus.
 */
void setPolar();
     

   
};

#endif