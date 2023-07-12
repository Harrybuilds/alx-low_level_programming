#include "main.h"

/**
 *create_file - function to create a file
 *@filename: name of file to be created
 *@text_content: string to be inserted into the file
 *
 *Return: returns 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
	mode_t mode;
	size_t len, n;
	int r;
	char *str;
	FILE *file;

	file = fopen(filename, "w");
	if (filename == NULL || file == NULL)
		return (-1);

	str = text_content;
/**<<<<<<< HEAD
 *	if (str != NULL)
 *	{
 *		strlength = strlen(str);
 *		n = dprintf(fileno(file), "%s", str);
 *		if (n != strlength)
 *		{
 *			fclose(file);
 *			return (-1);
 *		}
 *		fclose(file);
 *	}
 *=======
 *	dprintf(fileno(file), "%s", str);
 *	fclose(file);
 *>>>>>>> parent of 12f0a02 (correction on task 1 of file i/o in c)
 */


	if (str != NULL)
	{
		len = strlen(str);
		n = dprintf(fileno(file), "%s", str);
		if (n != len)
		{
			fclose(file);
			return (-1);
		}
	}
			
/**	dprintf(fileno(file), "%s", str);
	fclose(file);
*/
	
	/*setting file permission for file owner*/
	mode = S_IRUSR | S_IWUSR;
	r = chmod(filename, mode);
	if (r != 0)
		return (-1);

	return (1);
}
