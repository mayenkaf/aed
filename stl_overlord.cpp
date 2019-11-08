/*
 * Date: 07-11-2019
 * Authors: Team Overlord del C++
 * Speaker: Jhordy
 */

#include <iostream>
#include <list>             // bliblioteca lis
#include <algorithm> // compenente algorimo

using namespace std;

int main()
{
    list<int>  l;           //lista con valor "L"
    l.push_back(0);             // MARCA EL INICIO DE LA LISTA
    for(int i=0;i<10;i++){      ////SE PONE UN FOR PARA OBTENER LOS VALORES DE LA LISTA
        l.push_back(i+1);
    }
    list<int>::iterator itr=find(l.begin(),l.end(),8); //COMIENZA DE NUEVO EN EL VALOR 8
    l.insert(itr,5); // SE INSERTA EL VALOR 5
    itr=find(l.begin(),l.end(),7); // CAMBIANDOLO POR EL VALOR 7
    l.erase(itr); // BORRA EL VALOR CAMBIADO

    for(list<int>::iterator it=l.begin();it!=l.end();it++){ // ORGANIZA LA LISTA EN FORMA VERTICAL
        cout<<*it<<endl; // MUESTRA LA LISTA
    }
    //cout << "Hello world!" << endl;
    return 0;
}