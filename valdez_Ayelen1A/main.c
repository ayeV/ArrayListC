#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

#include "ArrayList.h"
#include "Letra.h"
#include "parser.h"
#include "input.h"


int main()
{
    int opcion = 0;
    char seguir = 's';
    char guardar= 's';



    ArrayList *letras;
    ArrayList *pLetras;

    letras = al_newArrayList();
    pLetras = al_newArrayList();
    while(seguir=='s')
    {
        printf("1-Alta \n");
        printf("2-Completar\n");
        printf("3-Listar\n");
        printf("4-Generar\n");

        printf("5- Salir\n");

        scanf("%d",&opcion);


        switch(opcion)
        {
        case 1:
            if(parserLetras(letras) == -1)
            {
                printf("Error al leer el archivo\n");
            }
            else{
                letra_printAll(letras);
            }

            system("pause");

            break;
        case 2:

           if(completar(letras)==-1)
            {
                printf("Error\n");
            }
            else
            {
                letra_printAll(letras);

            }
            if(generarArchivoCompleto("completo.csv",letras)== -1)
            {
                printf("Error al generar el archivo\n");
            }
            system("pause");
            break;
        case 3:


            system("pause");
            break;
        case 4:

            system("pause");
            break;

        case 5:
                /*printf("\nGuardar cambios S/N ?: \n");
				guardar = tolower(getche());

				if(guardar == 's')
				{
				  if(guardarArchivo(lista) == 0 )
                  {
                      printf("Archivo guardado con exito\n");
                  }
                  else
                  {
                    printf("Error al guardar el archivo\n");
                  }

                }
                else
                {
                    printf("Ha cancelado guardar\n");
                }*/


            seguir = 'n';
            system("pause");
            break;
        default:
            printf("Opcion invalida\n");
            system("pause");
            break;
        }
    }

    return 0;
}
