#ifndef UNIV_H_
#define UNIV_H_

#include <stdbool.h>

// Lunghezza massima campi testuali
#define TEXT_LEN  20 
// Numero massimo esami
#define MAX_EXAMS 30 

// Struttura per la valutazione di un esame
typedef struct
{
    int mark;
    int credits;
} Evaluation;

// Struttura che rappresenta la carriera di uno studente
typedef struct
{
    char name[TEXT_LEN];
    char surname[TEXT_LEN];
    int  student_id;
    int  num_exams;
    Evaluation exams[MAX_EXAMS];
} Career;

void print_student(Career *student, bool with_exams);

#endif /* UNIV_H_ */