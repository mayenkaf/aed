/*
 * Date: 08-11-2019
 * Authors: Team Chupetines
 * Speaker: Diomar
 */
#include <iostream>
#include <string>    //"strings" (cadenas de texto)
#include <map> // Cabecera necesaria para usar map
//contenedor asociativo para contener en orden una lista de parejas de valores únicos asociados como clave/valor
int main()
{
  // Creamos un map de string (clave) e int (valor)
	std::map<std::string, int> m;

	m["uno"] = 4;
	m["dos"] = 2;
	m["tres"] = 3;

	std::cout << m["uno"] << std::endl;
	std::cout << m["dos"] << std::endl;
	std::cout << m["tres"] << std::endl;
}
