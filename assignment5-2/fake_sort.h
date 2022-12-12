// Lunghezza massima campi testuali
#define TEXT_LEN  20 
// Numero persone nell'array
#define NUM_PEOPLE 10 

// Tipi di ordinamento
typedef enum {
    NAME_ASC = 'N',
    NAME_DES = 'n',
    SURNAME_ASC = 'S',
    SURNAME_DES = 's',
    AGE_ASC = 'A',
    AGE_DES = 'a',
} SortType;

// Struttura che rappresenta una persona
typedef struct {
    char name[TEXT_LEN];
    char surname[TEXT_LEN];
    int  age;
} Person;
