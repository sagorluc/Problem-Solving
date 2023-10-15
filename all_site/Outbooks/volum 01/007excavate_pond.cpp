#include <iostream>
using namespace std;

int main() {
    int x,d1,d2;
    cin >> x >> d1 >> d2;

    int add_parson = (x*d1) / d2 - x;
    cout<< add_parson <<"\n";

    return 0;
}

