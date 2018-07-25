#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "ArrayList.h"
#include "letra.h"
#include "input.h"

int parserLetras(ArrayList* this)
{
    char name[50],vocal[50],consonante[50];
    char let[5];
    FILE *pFile;

    eLetra *letra;

    int cant;
    int returnAux = -1;

    if(this != NULL)
    {
        pFile = fopen("datos.csv","r");
        if(pFile == NULL)
        {
            printf("Error, no se puede abrir el archivo\n");
        }

        fscanf(pFile, "%[^,] , %[^,], %[^,],%[^\n] \n",let,name,vocal,consonante);

        while( !feof(pFile))
        {
            cant =  fscanf(pFile, "%[^,] , %[^,], %[^,],%[^\n] \n",let,name,vocal,consonante);

            if(cant != 4)
            {
                if(feof(pFile))
                {
                    break;
                }
                else
                {
                    printf("No se pudo leer el ultimo registro\n");
                    break;
                }
            }
            letra = letra_new();
            letra_setConsonante(letra,consonante);
            letra_setLetra(letra,let);
            letra_setName(letra,name);
            letra_setVocal(letra,vocal);

            this->add(this,letra);

            returnAux = 0;

        }


    }
    fclose(pFile);
    return returnAux;
}








