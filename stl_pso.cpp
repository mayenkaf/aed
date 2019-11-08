/*
 * Date: 07-11-2019
 * Authors: Team PSO
 * Speaker: Sharmelly
 */
#include <cstdlib>
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> deq;
        deq.push_back(5); //añadir después del final
        deq.push_back(10);
        deq.push_back(17);
        deq.push_front(3); //insertar al principio

    for (int i = 0; i < deq.size(); i++)

        cout << "deq ["<< i<<"]="<< deq[i] << endl;
        cout << endl;
            deq.pop_back(); //borrar primer elemento
            deq[2] = 25; //reemplazar último elemento

        for (int i = 0; i < deq.size(); i++)

            cout << "deq ["<< i <<"] =" << deq [i] << endl;

    return 0;
}
