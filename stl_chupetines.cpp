/*
 * Date: 07-11-2019
 * Authors: Team Chupetines
 * Speaker: Yanner
 */

#include <iostream>
#include <vector> //cabecera nesesaria para usar vectores
int main()
{
    //declaramos un vector de tipo int llamado v
    std::vector<int>v;
    //añaedir valores al final con push back
    v.push_back(5);
    v.push_back(8);
    v.push_back(2);
    v.push_back(3);
    // podemos usar el operador[] para aceder alas diferentes posisiones del vector
    std::cout<<"pos 0:"<<v[0]<<std::endl;
    std::cout<<"pos 3:"<<v[3]<<std::endl;
    //la funcion size nos dice el tamaño del vector
    std::cout<<"tamanio de v:"<< v.size()<< std::endl;
    //podemos usar size para recor el vector.
    for(int i =0;i<v.size();i++)
    {
        std::cout<<"pos"<<i<<":"<<v[i]<< std::endl;
    }
    //usamos la funcion pop_back para quitar el ultimo elemento
    v.pop_back();
    //comprobamos el nuevo tamaño
    std::cout<<"tamanio de v:"<<v.size()<<std::endl;
    return 0;
}