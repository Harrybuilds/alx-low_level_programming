#include <stdio.h>
#include <stdarg.h>

char * charc()
{
	return("char");
}

char * str()
{
	return ("char *");
}

char * inte()
{
	return ("int");
}

char * flo()
{
	return ("float");
}

/**
 * char (

int main(int argc, char **argv)
{
	char var;
	char *j;

	printf("Enter a character\n");
	scanf("%c", &var);

	if (var == 'c')
		j = charc();
	else if (var == 's')
		j = str();
	else if (var == 'i')
		j = inte();
	else if (var = 'f')
		j = flo();

	printf("%s\n", j);


	return 0;
}
