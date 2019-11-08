#include <stdio.h>
#include <conio.h>
char * s1 = "Emilia";			// variabeln s1 �r en variabel som g�r att �ndra, och vid
								// start tilldelas v�rdet av adressen till 'E�.

char s2[] = "Roger";			// v�rdet p� s2 k�nt vid compile time. s2 �r konstant, dvs
								// ingen variabel som g�r att �ndra. �r adressen till �R�.
int main()
{
	printf("Kul med pekare\n");

	char **pp, *p = s1;
	pp = &p;
	printf("p = %s\n", p);		// p == s1, s� ekvivalent med att skicka s1 som argument.
	printf("*pp = %s\n", *pp);


	*pp = s2;					// *pp ekvivalent med p. �ndrar p till s2
	printf("p = %s\n", p);


	*p = 'T';					// (p == s2). *s2 ekv. med s2[0]. �ndrar s2[0] till �T�
	**pp = 'J';					// *pp ekv med p. p==s2. -> *s2 = �J�. �ndrar s2[0] till 'J�
	*(*pp + 2) = 'k';			// �ndrar s2[2] till 'k�
	printf("%s\n", p);


	(*pp)[0] = 'P';				// *pp ekv med p (== s2). s2[0]. �ndrar s2[0] till 'P'
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

