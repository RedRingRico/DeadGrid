#include <iostream>
#include <GitVersion.hpp>

int main( int p_Argc, char **p_ppArgv )
{
	std::cout << "DeadGrid [Rev. " << GIT_COMMITHASH << "]" << std::endl;
	
	return 0;
}

