#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n1,n2,n3,n4;
    cin >> n1 >> n2 >> n3 >> n4;

    double avg = ((n1*2.0) + (n2*3.0) + (n3*4.0) + (n4*1.0))/10.00;
    cout<< fixed<<setprecision(1)<<"Media: "<<avg<<"\n";

    if(avg >= 7.0)
        cout<<"Aluno aprovado."<<"\n";

    else if(avg < 5.0)
        cout<<"Aluno reprovado."<<"\n";

    else if(avg >= 5.0 && avg <= 6.9)
    {
        cout<< "Aluno em exame."<<"\n";

        double exmscor;
        cin >> exmscor;
        cout<< "Nota do exame: " << exmscor <<"\n";

        avg = (avg + exmscor)/2;

        if(avg > 5.0)
            cout<<"Aluno aprovado."<<"\n";
        else
            cout<<"Aluno reprovado."<<"\n";

        cout<<fixed<<setprecision(1)<< "Media final: " <<avg<<"\n";



    }


    return 0;
}
