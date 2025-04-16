/***********************************************************************************
 Autor: Isabel de Jesus Castro
 Actividad 1, se realiza un programa que nos pide la edad y tiene que determinar
 si es mayor o menor de edad y se debe visualizar la leyenda correspondiente
 
************************************************************************************/

#include <stdio.h> //Biblioteca standar funcion de entrada y salida
#include <iostream> //Biblioteca standar de entrda y salida std::cin y std::cout

int main()
{
    int edad; //declaramos la variable edad
    std::cout << "ingrese su edad: "; //Solicita la edad
    std::cin >> edad; //Escribe su edad
    
    //se usa el ciclo if si es verdadero si la edad es mayor o igual a 18 
    //saldra la leyenda usted es mayor de edad
    if (edad >= 18) {
        std::cout << "usted es mayor de edad." << std::endl;
    } else { //Si es falso su usa el ciclo else si es menor a 18 saldra 
    //la leyenda usted es menor de edad
        std::cout << "usted es menor de edad." << std::endl;
    }
    return 0; //final del programa 
}