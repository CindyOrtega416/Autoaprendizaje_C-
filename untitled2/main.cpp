#include <iostream>


using namespace std;

int main() {


    float salario, horas, tarifa, tarifa_2, salario_2;

    cout <<"Ingrese la tarifa: " <<endl;

    cin>>tarifa;

    cout <<"Ingrese la cantidad de horas que trabajo: " <<endl;

    cin>>horas;

    salario=horas*tarifa;

    if(horas>40)
    {
        tarifa_2=tarifa*2;
        salario_2=horas*tarifa_2;

        cout << "El salario del empleado es: " << salario_2 << "Y la tarifa es: "<<tarifa<<endl;

    }
    else{

        cout<<"El salario del empleado es: "<<salario << " y la tarifa es: " <<tarifa<<endl;
    }

    return 0;
}