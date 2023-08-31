#include <iostream>

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;

	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	while(i < argc)
	{
		while(argv[i][j] !=  '\0')
		{
			std::cout << (char)(std::toupper(argv[i][j]));
			j++;
		}
		if (i != argc - 1)
			std::cout << " ";
		i++;
		j = 0;		
	}
	std::cout << std::endl;
	return(0);
}
