#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin >> a >> b >> c;

    double area_a = (a*c)/2;

    double area_b = 3.14159 * pow(c,2);

    double area_c = (a + b)/2;
           area_c = area_c * c;

    double area_d = pow(b, 2);

    double area_e = a * b;

    cout<< fixed<<setprecision(3) << "TRIANGULO: "<< area_a<<"\n";
    cout<< fixed<<setprecision(3) << "CIRCULO: "<< area_b<<"\n";
    cout<< fixed<<setprecision(3) << "TRAPEZIO: "<< area_c<<"\n";
    cout<< fixed<<setprecision(3) << "QUADRADO: "<< area_d<<"\n";
    cout<< fixed<<setprecision(3) << "RETANGULO: "<< area_e <<"\n";


    return 0;
}
