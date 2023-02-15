
#pragma once
#include "Komplexzahlen.h"

#include <iostream>
#include <cmath>
#include <vector>


using namespace std;



class KomplexND
{
private: 

int N;
vector<Komplexzahlen> v;

public:

int size();
/**
 * \brief Konstruktor.
 * \param s Die Dimension der komplexen Zahl.
 */
KomplexND(int s);
/**
 * \brief Gibt eine Referenz auf die i-te Komponente zurück.
 * \param i Der Index der Komponente.
 * \return Eine Referenz auf die i-te Komponente.
 */
Komplexzahlen& at(int i);
/**
 * \brief Führt eine Addition mit einer anderen komplexen Zahl aus.
 * \param other Die andere komplexe Zahl.
 * \return Das Ergebnis der Addition.
 */
KomplexND operator+(KomplexND& other);

/**
 * \brief Fügt  komplexe Zahlen hinzu.
 */
void insert();
/**
 * \brief Gibt die komplexe Zahlen aus.
 */
void display();


    
    
    
    
    
   
    
};