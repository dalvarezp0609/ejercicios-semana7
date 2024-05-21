#define MAX_STR 60
#define MAX_REG 1000

typedef struct person{
    char cif[MAX_STR];
    char name[MAX_STR];
    char lastName[MAX_STR];
    int year;
};

person peoples[MAX_REG];
int pos= 0;
