#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char character;

	printf("Enter your character\n");
	scanf("%c",&character);



	switch(character)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':printf("This is a vowel"); break;
	
	/* In here when the compiler 1st checks a, then e, then i and so on. 
	
		Since we have removed the break the compiler goes to the next case and so on.
	
		Since all  the above cases has  should have the same output.
		Doing like this doesn't give mistakes */

		
	default : printf("Consonent");
	
	}

	return 0;
}