#ifndef _LETRA_H
#define _LETRA_H
struct
{
    char letra[4];
    int id;
    char nombre[21];
    int vocal;
    int consonante;
}typedef eLetra;

struct
{
    char letra[4];
    int id;
    char nombre[21];
    int vocal;
    int consonante;
}typedef eNuevaLetra;



char* letra_getLetra(eLetra* this);








#endif // _LETRA_H



