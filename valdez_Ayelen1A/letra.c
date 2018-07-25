#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ArrayList.h"
#include "letra.h"
#include "input.h"


/*int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    int retorno = 0;
    Employee* auxiliarA;
    Employee* auxiliarB;

    if(pEmployeeA != NULL && pEmployeeB != NULL)
    {
        auxiliarA = (Employee*) pEmployeeA;
        auxiliarB = (Employee*) pEmployeeB;

        if(strcmp(auxiliarA->name,auxiliarB->name) > 0)
        {
            retorno = 1;
        }
        else
        {
            if(strcmp(auxiliarA->name,auxiliarB->name) < 0)
            {
                retorno = -1;
            }
        }

    }

    return retorno;
}*/


eLetra* letra_new(void)
{
    eLetra* returnAux = (eLetra*) malloc(sizeof(eLetra));

    return returnAux;
}




int letra_setLetra(eLetra* this, char* letra)
{
    int retorno = -1;

    if(this != NULL)
    {

        strcpy(this->letra, letra);
        retorno = 0;
    }


    return retorno;

}
char* letra_getLetra(eLetra* this)
{
    char* retorno;
    if(this != NULL)
    {
        retorno = this->letra;
    }
    return retorno;

}
//SET NAME
int letra_setName(eLetra* this, char* name)
{
    int returnAux = -1;
    int len;


    if(this != NULL && name != NULL)
    {

        len = strlen(name);
        if(len >21)
        {
            printf("Error\n");

        }
        else
        {

            strcpy(this->nombre, name);
        }

        returnAux = 0;

    }

    return returnAux;

}
//GET NAME
char* letra_getName(eLetra* this)
{
    char* retorno;

    if(this != NULL)
    {
        retorno = this->nombre;
    }

    return retorno;


}

int letra_setVocal(eLetra* this, char* vocal)
{
    int retorno = -1;
    int aux;
    if(this != NULL && vocal !=NULL)
    {
        aux = atoi(vocal);
        if( aux == 1 || aux == 0)
           {
                this->vocal = aux;
           }
           else
            {
                printf("Error\n");
            }

        retorno = 0;
    }


    return retorno;

}
//GET ID
int letra_getVocal(eLetra* this)
{
    int retorno= -1;
    if(this != NULL)
    {
        retorno = this->vocal;
    }
    return retorno;

}

int letra_setConsonante(eLetra* this, char* consonante)
{
    int retorno = -1;
    int aux;
    if(this != NULL && consonante !=NULL)
    {
        aux = atoi(consonante);
        if( aux == 1 || aux == 0)
           {
                this->consonante = aux;
           }
           else
            {
                printf("Error\n");
            }

        retorno = 0;
    }


    return retorno;

}
//GET ID
int letra_getConsonante(eLetra* this)
{
    int retorno= -1;
    if(this != NULL)
    {
        retorno = this->consonante;
    }
    return retorno;

}


void letra_print(eLetra* this)
{
    if(this !=NULL)
    {

        printf("%s\t%s\t%d\t%d\n\n",letra_getLetra(this),letra_getName(this),letra_getVocal(this),letra_getConsonante(this));
    }

}


void letra_printAll(ArrayList* this)
{
    int i;
    printf("LETRA\tNOMBRE\tVOCAL\tCONSONANTE\n");
    for(i=0;i<this->len(this);i++)
    {

            letra_print(this->get(this,i));

    }
}

int completar(ArrayList *this)
{
    int returnAux = -1;
    eLetra *letra;
    int i;
    if(this != NULL)
    {

        for(i=0; i<this->len(this); i++)
        {
            letra = this->get(this,i);


            if((strcmp(letra_getLetra(letra),"a") == 0) || (strcmp(letra_getLetra(letra),"e") == 0) || (strcmp(letra_getLetra(letra),"i") == 0) || (strcmp(letra_getLetra(letra),"o") == 0) || (strcmp(letra_getLetra(letra),"u") == 0) || (strcmp(letra_getLetra(letra),"A") == 0|| (strcmp(letra_getLetra(letra),"E") == 0 || (strcmp(letra_getLetra(letra),"I") == 0|| (strcmp(letra_getLetra(letra),"O") == 0|| (strcmp(letra_getLetra(letra),"U") == 0))))))
            {
                letra->vocal = 1;
            }
            else
            {
                letra->consonante = 1;
            }

        }
        returnAux = 1;

    }

    return returnAux;
}

int validate_IsOnlyLetters(char* string){
    int returnAux = 0;
    int i;
    for(i = 0; i < strlen(string)-1; i++){
        if((string[i] < 'a' || string[i] > 'z') && (string[i] < 'A' || string[i] > 'Z')){
            returnAux = -1; //Si un caracter no es una letra, devuelve -1.
            break;
        }
    }
    return returnAux;
}

int nuevaletra_setLetra(eNuevaLetra* this, char* letra)
{
    int retorno = -1;

    if(this != NULL)
    {

        strcpy(this->letra, letra);
        retorno = 0;
    }


    return retorno;

}
char* nuevaletra_getLetra(eNuevaLetra* this)
{
    char* retorno;
    if(this != NULL)
    {
        retorno = this->letra;
    }
    return retorno;

}
//SET NAME
int nuevaletra_setName(eNuevaLetra* this, char* name)
{
    int returnAux = -1;
    int len;


    if(this != NULL && name != NULL)
    {

        len = strlen(name);
        if(len >21)
        {
            printf("Error\n");

        }
        else
        {

            strcpy(this->nombre, name);
        }

        returnAux = 0;

    }

    return returnAux;

}
//GET NAME
char* nuevaletra_getName(eNuevaLetra* this)
{
    char* retorno;

    if(this != NULL)
    {
        retorno = this->nombre;
    }

    return retorno;


}

int nuevaletra_setVocal(eNuevaLetra* this, int vocal)
{
    int retorno = -1;
    int aux;
    if(this != NULL)
    {

        if( vocal == 1 || vocal == 0)
           {
                this->vocal = vocal;
           }
           else
            {
                printf("Error\n");
            }

        retorno = 0;
    }


    return retorno;

}
//GET ID
int nuevaletra_getVocal(eNuevaLetra* this)
{
    int retorno= -1;
    if(this != NULL)
    {
        retorno = this->vocal;
    }
    return retorno;

}

int nuevaletra_setConsonante(eNuevaLetra* this, int consonante)
{
    int retorno = -1;
    int aux;
    if(this != NULL )
    {

        if( consonante == 1 || consonante == 0)
           {
                this->consonante = consonante;
           }
           else
            {
                printf("Error\n");
            }

        retorno = 0;
    }


    return retorno;

}
//GET ID
int nuevaletra_getConsonante(eNuevaLetra* this)
{
    int retorno= -1;
    if(this != NULL)
    {
        retorno = this->consonante;
    }
    return retorno;

}
void listar(ArrayList* this, ArrayList *pLetras)
{
    eLetra* letra;
    eNuevaLetra* aux;
    char cadena[50];
    //ArrayList *arrayLetras = al_newArrayList();
    int i;

    getString(cadena,"Ingrese una palabra: ","Rango valido 2-50, reingrese: ",2,50);
    if( validate_IsOnlyLetters(cadena) == 0)
    {
        for(i= 0; i<this->len(this); i++)
        {
            letra = this->get(this,i);
            if( strcmp(cadena,letra_getLetra(letra)) == 0)
            {
                aux= letra_new();
                nuevaletra_setConsonante(aux,letra_getConsonante(letra));
                nuevaletra_setLetra(aux,letra_getLetra(letra));
                nuevaletra_setName(aux,letra_getName(letra));
                nuevaletra_setVocal(aux,letra_getVocal(letra));
                pLetras->add(pLetras,aux);

            }
        }
    }




}
int generarArchivoCompleto(char* path, ArrayList* this)
{
    FILE* f;


    eLetra* aux;
    aux = letra_new();

    int returnAux = -1;
    int i;

    if(this != NULL)
    {
        f = fopen(path, "w");
        if(f != NULL)
        {
            fprintf(f,"ID\tLETRA\tNOMBRE\tVOCAL\tCONSONANTE\n");
            for(i=0; i<this->len(this); i++)
            {

                aux = this->get(this,i);
                aux->id = i+1;



                fprintf(f,"%d\t%s\t%s\t%d\t%d\n",aux->id,letra_getLetra(aux),letra_getName(aux),letra_getVocal(aux),letra_getConsonante(aux));

            }



            fclose(f);

        }
        returnAux = 1;
    }

    return returnAux;




}
