#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    int arr[] = {a,b,c};
    sort(arr, arr+3);

    cout<< arr[0] <<"\n";
    cout<< arr[1] <<"\n";
    cout<< arr[2] <<"\n\n";

    cout<< a <<"\n";
    cout<< b <<"\n";
    cout<< c <<"\n";

    return 0;
}
