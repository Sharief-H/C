// Demonstrating Primary Data Types in C Language
#include<stdio.h>

int main()
{

    int in;
    short int si;
    long int li;
    long long int lli;
    signed short int ssi;
    unsigned short int usi;
    unsigned int uin;

    char ch;
    signed char sch;
    unsigned char uch;

    float fl;
    double dl;


    long double ldl;
    printf("\n Data Type\t\tSize.");
    printf("\n =========\t\t=====");
    printf("\n int occupies..........%d bytes.",sizeof(in));
    printf("\n unsigned int occupies.%d bytes.",sizeof(uin));
    printf("\n Short int occupies....%d bytes.",sizeof(si));
    printf("\n Long int occupies.....%d bytes.",sizeof(li));
    printf("\n Long Long int ........%d bytes.",sizeof(lli));
    printf("\n signed short int .....%d bytes.",sizeof(ssi));
    printf("\n unsigned short int....%d bytes.",sizeof(usi));
    printf("\n char occupies.........%d bytes.",sizeof(ch));
    printf("\n signed char ..........%d bytes.",sizeof(sch));
    printf("\n unsigned char ........%d bytes.",sizeof(uch));
    printf("\n float occupies........%d bytes.",sizeof(fl));
    printf("\n double occupies.......%d bytes.",sizeof(dl));
    printf("\n long double occupies..%d bytes.\n",sizeof(ldl));

    return 0;

}
