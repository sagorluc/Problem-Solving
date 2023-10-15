#include<bits/stdc++.h>
using namespace std;
int main()
{
    string temp;
    int start_d, end_d, start_h, end_h, start_m, end_m, start_s, end_s;

    cin >> temp >> start_d;
    cin >> start_h >> temp >> start_m >> temp >> start_s;

    cin >> temp >> end_d;
    cin >> end_h >> temp >> end_m >> temp >> end_s;

    start_d = end_d - start_d;
    start_h = end_h - start_h;
    start_m = end_m - start_m;
    start_s = end_s - start_s;

    if(start_s < 0)
    {
        start_s += 60;
        start_m--;
    }

    if(start_m < 0)
    {
        start_m += 60;
        start_h--;
    }

    if(start_h < 0)
    {
        start_h += 24;
        start_d--;
    }

    cout<< start_d <<"  dia(s)\n";
    cout<< start_h <<"  hora(s)\n";
    cout<< start_m <<"  minuto(s)\n";
    cout<< start_s <<"  segundo(s)\n";


    return 0;
}
