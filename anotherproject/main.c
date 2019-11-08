#include <stdio.h>
#include <conio.h>
char * s1 = "Emilia";			// variabeln s1 är en variabel som går att ändra, och vid
								// start tilldelas värdet av adressen till 'E’.

char s2[] = "Roger";			// värdet på s2 känt vid compile time. s2 är konstant, dvs
								// ingen variabel som går att ändra. Är adressen till ‘R’.
int main()
{
	printf("Kul med pekare\n");

	char **pp, *p = s1;
	pp = &p;
	printf("p = %s\n", p);		// p == s1, så ekvivalent med att skicka s1 som argument.
	printf("*pp = %s\n", *pp);


	*pp = s2;					// *pp ekvivalent med p. Ändrar p till s2
	printf("p = %s\n", p);


	*p = 'T';					// (p == s2). *s2 ekv. med s2[0]. Ändrar s2[0] till ’T’
	**pp = 'J';					// *pp ekv med p. p==s2. -> *s2 = ’J’. Ändrar s2[0] till 'J’
	*(*pp + 2) = 'k';			// ändrar s2[2] till 'k’
	printf("%s\n", p);


	(*pp)[0] = 'P';				// *pp ekv med p (== s2). s2[0]. Ändrar s2[0] till 'P'
	printf("%s\n", p);

	*(p + 1) = 'A';
	(*pp)[3] = 'p';
	printf("%s\n", p);

	s1 = *p;
	**pp = s1;
	
	printf("%s\n", *pp);

	system("pause");
	return 0;
}

