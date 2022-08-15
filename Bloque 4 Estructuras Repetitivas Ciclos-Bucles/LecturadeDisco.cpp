// LECTURA Y  ESCRITURA ESTANDAR EN DISCO DURO.
#include <iostream>
#include <string>
#include <fstream> //Libreeria que lee el disco duro.

std::string pedirDatos(void); // declaracion de la funcion.  VOID se pone para evitar que agarre basura
void guardarenDisco(std::string n);
std::string leerdeDisco(void);

int main()
{
	std::string nombre = pedirDatos();

	guardarenDisco(nombre);
	std::string temp = leerdeDisco();

	std::cout << temp << std::endl;

	return 0;
}

std::string pedirDatos()
{
	std::string nombre;
	std::cout << "Ingrese su nombre: ";
	std::getline(std::cin,nombre);
}

void guardarenDisco(std::string n)
{
	std::ofstream file; //oftream es quien permite abror el archivo. 
	file.open("agenda.txt", std::fstream::out); 
	unsigned int s = n.length();
	
	if (file.is_open())
	{
		for (int i = 0; i < s; i++)
		{
			file << n[i] << std::endl;
		}
	}
	file.close();
}

std::string leerdeDisco()
{
	std::string line;
	std::ifstream file;
	file.open("Agenda.txt", std::fstream::in);
	
	if (file.is_open())
	{
		while (!file.eof()) //esa lectura se tiene que meter a un ciclo. Leera linea por linea siempre y cuando no termine el archivo
		{
			file >> line;
		}
		
	}
	file.close();

	return line;
}



