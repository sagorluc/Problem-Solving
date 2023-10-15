#include <iostream>
using namespace std;

int main()
{
    int n, notas[] = {100, 50, 20, 10, 5, 2, 1};
    cin >> n;
    cout<< n << "\n";
    for (int i = 0; i < 7; i++)
    {
        int qt_notas = n / notas[i];
        cout << qt_notas << " nota(s) de R$ " << notas[i] << ",00" << endl;
        n -= qt_notas * notas[i];
    }

    return 0;
}
