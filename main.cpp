/*
* Copyright (C) Josh Y. - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Josh Y. <joyang112@gmail.com>, June 2017
*/
//Libraries:
//================================
#include "Header.h"
//#include "Source2.cpp" ////DONT NEED TO INCLUDE IF NO STANDARD NAMESPACE IS BEING USED IN MAIN BODY(1)

//Documentations:
//================================
//[HelpUrl("URL")] Allows user to set a link to a documentation for reference

void marcoPrint()
{

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Marco ";
		Sleep(1000);
	}

}

void poloPrint()
{

	for(int i = 0; i < 10; i ++)
	{
		//Sleep(1000);
		std::cout << "Polo\n";
		Sleep(1000);
	}

}

int main(int argc, char* argv[])
{
	//Spawning Threads
	std::thread Marco(marcoPrint);
	std::thread Polo(poloPrint);
	
	//Joing Threads
	Marco.join();
	Polo.join();

	std::cout << "Thats all folks!.\n";

	//Return data
	return 0;
}

/*
Below would be how it is structured IF we needed to detach our threads after every join
void marcoPrint()
{
	Marco.join();
	std::cout << "Marco ";
	Marco.detach();
	//Sleep(2000);
	std::this_thread::sleep_for(std::chrono::seconds(n));
}

void poloPrint()
{
	Polo.join();
	std::cout << "Polo\n";
	Polo.detach();
	//Sleep(2000);
	std::this_thread::sleep_for(std::chrono::seconds(n));
}

int main(int argc, char* argv[])
{
	//Spawning Threads
	std::thread Marco(marcoPrint);

	std::thread Polo(poloPrint);

	std::cout << "Thats all folks!.\n";

	//Return data
	return 0;
}
*/

//References:
//system("pause");

//Algorithm Setup			|			Corresponding C++ Statements
//
//
//
//
//
//
//
//
//
//