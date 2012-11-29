/**
 * Ofuscador de c�digo
 */
#include <stdio.h>

FILE * entrada; // Almacenar� nuestro archivo C de entrada
FILE * salida; // Apuntador al resultado final


/**
 * 
 * @param argc
 * @param argv Por este medio se enviar�n los archivos necesarios para la ejecuci�n, la forma ser� [Ofuscador entrada.c salida.c]
 * @return 
 */
int main( int argc, char **argv )
{	

	++argv, --argc; 

	if ( argc > 1 ){
		/* Lector de la entrada */
		entrada = fopen( argv[0], "r" );
		/* Abrimos(creamos) el archivo sobre el cual vamos a escribir nuestro codigo ofuscado */
		salida = fopen(argv[1], "w");
                
                // TODO: C�digo del ofuscador
                
                fclose(entrada);
		fclose(salida);
	}else{
            printf("Error en la ejecucion del programa (malos parametros de entrada)\n");
            return 1;
        }	

	return 0;
}