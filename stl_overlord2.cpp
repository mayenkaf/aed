/*
 * Date: 08-11-2019
 * Authors: Team Overlord del C++
 * Speaker: Alexis
 */
#include <cstdlib>
#include <iostream>
#include <set>
#include <string>

using namespace std;

void set01()
{
  set<string> colores;
  set<string>::iterator i = colores.begin();

  colores.insert("amarillo");
  colores.insert("blanco");
  colores.insert("celeste");
  colores.insert("dorado");
  colores.insert("granate\n\n");

  /// ya que "dorado" ya existe es ignorada
  colores.insert("dorado");///como se repite se eliminara
  colores.insert("negro");///se agreara
  colores.insert("verde");///se agregara

  i = colores.begin();

  cout << "Numero de colores: " << colores.size() << endl;
  while(i != colores.end() ) cout << "\t" << *i++ << endl;
}

int main(int argc, char *argv[])
{
  set01();
  system("PAUSE");
  return EXIT_SUCCESS;
}
