#include <iostream>
using namespace std;
   int main () {

 int opcion;

   do {

     cout << "--- menu de opciones ---" << endl;

            cout << "1. anio bisiesto" << endl ;
            cout << "2. tabla de multiplicar inversa" << endl;
            cout << "3. fizzbuzz" << endl;
            cout << "4. salir " << endl;
            cout << " seleccione una opcion: ";
            cin >> opcion;


    switch  (opcion){


    case 1:
    int anio;
    cout<<"ingrese el anio:";
     cin>> anio;
     if(anio<=2024){
     cout << "el anio es" <<  anio<< "bisiesto" ;

  } else if ( anio<= 2024 && anio=> 2023) {

  cout << "el anio es" << anio << "no bisiesto"

  }




     }


        break;

     case 2:
        int tablaDeMultiplicar;
        cout << endl;

        break;

       case 3:
        int FizzBuzz;
        cout << endl;

        break;

   }


} while ( opcion != 4) ;
    cout<< "saliste del programa" << endl;






    return 0;


}





