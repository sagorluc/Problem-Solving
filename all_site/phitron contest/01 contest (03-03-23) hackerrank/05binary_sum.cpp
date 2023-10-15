#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int y;

    cin >> y;

    if(y == 1)
        cout<< 1 <<"\n";
    else
    {
        long long int a = round(pow(2, y-2));
        long long int b = round(pow(2, y-1));

        cout<< a*b<<"\n";
    }



    return 0;
}
