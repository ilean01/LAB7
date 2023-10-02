
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 //Escriba una función que cuenta la cantidad de vocales en una cadena decaracteres.
int CantVocal (char *cadena, int cant){
	int longCad=strlen(cadena);
	char vocales []={'a','e','i','o','u','A','E','I','O','U'};
	int longVoc=strlen(vocales);

	for (int i=0, j=0; ;i++)
		if (*(cadena+i)==*(vocales+j)){
			cant++;
		}
		else if (j==longVoc)
				break;
		else if (i==longCad){
			i=0;
			j++;
		}

	return cant;
}

//Escriba la función int strlen(char *str) la cual debe retornar la cantidad de caracteres de la cadena str.

int Strlen (char *str){
	int cant2=0;
	for (int i=0; *(str+i)!= '\0' ;i++)
		cant2++;
	return cant2;
}

//Escriba la función strend(char *s, char *t) que retorna 1 si la cadena t se encuentra al final de la cadena s. Retorna 0 si no se encuentra.

int strend(char *s, char *t){
	int longCad1=strlen(s)-1;
	int longCad2=strlen(t)-1;
	int n=longCad2+1;
	int final=0, cont=0;
	if (longCad1>=longCad2){
		for (; ;){
			if (*(s+longCad1)==*(t+longCad2)){
				longCad1--;
				longCad2--;
				cont++;
					if (cont==n)
						return final=1;
			}
			else
				return final=0;
		}
	}

		return final=0;
}

//Escriba su versión de la función estándar strncpy(char *s, char *t, int n) que copia como máximo n caracteres de la cadena t al final de la cadena s.

void Strncpy(char *s, char *t, int n){
	int longCad=strlen(s);
	int z=longCad+n;
	char *a=malloc(longCad*sizeof(int));
	a=realloc(a,z*sizeof(char));
	for (int i=0, q=0; i<z ;i++)
		if (i<=(longCad-1))
			*(a+i)=*(s+i);
		else{
			*(a+i)=*(t+q);
			q++;
			}
	printf("La nueva cadena es: %s\n\n",a);
}

int main(void) {
	int cant=0, cant2=0, final=0, n=2;
	char cadena [] = {"pena"};
	char cadena2 [] = {"ma"};
	cant=CantVocal(cadena, cant);
	cant2=Strlen (cadena);
	final=strend(cadena, cadena2);

	printf("La cantidad de vocales son: %d\n",cant);
	printf("La cantidad de caracteres son: %d\n",cant2);
	printf("El valor retorno de la cadena es: %d\n",final);

	Strncpy(cadena, cadena2, n);
	//Crear un programa que cree un arreglo de dimensión n con memoria dinámica, se carguen valores para luego imprimir en la terminal.

	int h, *k;
	printf("Ingrese la dimension: "); scanf("%d",&h);
	k=malloc(h*sizeof(int));
	for (int i=0; i<h; i++){
		printf("Ingrese los valores: "); scanf("%d",&k[i]);
	}
	for (int i=0; i<h; i++){
			printf("%d", k[i]);
		}
	return EXIT_SUCCESS;
}
//Soy ceci

