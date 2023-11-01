
#include "main.h"




/**


 * _memset - Program fills a block of memory with a specific value


 * @s: starting address of memory to be filled


 * @b: the desired value


 * @n: number of bytes to be changed


 *


 * Return: change array with new value for n bytes


 */


char *_memset(char *s, char b, unsigned int n)


{


   	int a = 0;


 


   	for (; n > 0; a++)


   	{


          	s[a] = b;


          	n--;


   	}


   	return (s);


}

 
============================
 
0-strcat.c
#include "main.h"




/**


 *  _strcat - function that concatenates two strings


 *  @dest: entered value


 *  @src: entered value


 *


 *  Return: void


 */


char *_strcat(char *dest, char *src)


{


        	int a;


        	int b;


 


        	a = 0;


        	while (dest[a] != '\0')


        	{


                    	a++;


        	}


        	b = 0;


        	while (src[b] != '\0')


        	{


                    	dest[a] = src[b];


                    	a++;


                    	b++;


        	}


 


        	dest[a] = '\0';


        	return (dest);


}


