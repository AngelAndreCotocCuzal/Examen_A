// Espacio de trabajo inge
#include <iostream>
#include <string>

    using namespace std;

int main()
{
    /*
     * Escriba un programa que reciba una cadena de texto y que muestre en pantalla cual es la palabra más común en el texto
     * Ejemplo 1: "todos los numeros que son pares son divisibles entre dos" ---> "son" es la palabra más repetida
     * Ejemplo 2: "ayer no trabajé porque ayer era día del trabajo no importa ayer era lunes" ---> "ayer" es la palabra más repetida
     * Consejo: El docente solo va a probar textos en minisculas y que solo tengan letras y espacios
     */
    cout << "Challenge #3" << endl;
    int texf;
    string texto = "";
    cout << "Ingrese un texto cualquiera:" << endl;
    getline(cin, texto);
  
    
    for (int i = 0; i < texto.length(); i++)
    {
        // Esto hace una busqueda en todo el texto ahora solo queda comparar
        if(texto[i] == texto.length())
        {
            cout << "la palabra repetida es: " << i << endl;
        }
        else {
            cout << "la palabra repetida es: " << i << endl;
        }
        // no salio :(
    }
 //   cout << texto;

    // Comience a programar desde aquí
    system("pause");
    return 0;
}