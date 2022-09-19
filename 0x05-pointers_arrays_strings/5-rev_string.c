#include "main.h"                                                                                                          
                                                                                                                        
/**                                                                                                                         
 * print_rev prints a string in reverse                                                                                     
 * @s: string to be printed                                                                                                 
 * Return: returns nothing                                                                                                  
 */                                                                                                                         
                                                                                                                
void print_rev(char *s)                                                                                                     
{                                                                                                                           
        char rev = s[0];                                                                                                    
        int counter = 0;                                                                                                    
        int i;                                                                                                              
                                                                                                             
        while (s[counter] i = '\n')                                                                                         
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;                                                                                                  
		rev = s[i];                                                                                                 
		s[i] = s[counter];                                                                                          	    }                                                                                                                   
}
