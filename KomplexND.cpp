#include "KomplexND.h"
#include "Komplexzahlen.h"
#include <iostream>
#include <vector>

using namespace std;

KomplexND::KomplexND(int s):N(s),v(s){}

int KomplexND::size()
{
    return N;
}

Komplexzahlen& KomplexND::at(int i)
{    
   if (i >= N)
        {
            cout << "Error: Index " << i << " is greater than vector size " << N << endl;
            exit(1);
        }
        return v.at(i);

}
  

KomplexND KomplexND::operator+(KomplexND& other)
{
if (N != other.N)
        {
            cout << "Error: Both vectors must have the same size for addition." << endl;
            exit(1);
        }
        KomplexND result(N);
        for (int i = 0; i < N; i++)
        {
            result.v[i] = v[i] + other.v[i];
        }
        return result;
}


void KomplexND::insert()
{
    cout<< "komplexzahlen für vektor eingeben: "<<endl;
   Komplexzahlen x;
        for (int i = 0; i < N; i++)
        {
            cin >> x;
            v[i] = x;
        }
}

void KomplexND::display()
{
    cout<<"result: ";
    for(vector<int>::size_type i = 0; i< v.size(); ++i)
 {
   cout<< v.at(i);
 }
}


    
 
 
