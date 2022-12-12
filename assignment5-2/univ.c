#include "univ.h"
#include <stdlib.h>

/**
 * Inserisce le informazioni reletive ad un esame nella carriera dello studente
 * @param student [in/out] informazioni relative alla carriera di uno specifico studente
 * @return restituisce il numero di esami nella carriera dello studente fino a raggiungere MAX_EXAMS
 * se la soglia viene superata o se necessario gestire altri errori ritornare 0
**/
int insert_exam(Career *student, Evaluation exam) {
    if (student == NULL)
        printf("Eureka!");
    return 0;
}

/**
 * Calcola la media ponderata degli esami svolti da uno studente
 * @param student [in] informazioni relative alla carriera di uno specifico studente
 * @return media ponderata degli esami svolti da uno studente
 * se è necessario gestire errori, ritornare 0.0f
**/
float get_weighted_average(Career *student) {
    return 0.0f;
}

/**
 * Calcola una statistica su quanti studenti superano una determinata soglia in media ponderata
 * @param students [in] informazioni relative alla carriera degli studenti dell'ateneo
 * @param num_students [in] numero di studenti presenti nell'ateneo
 * @param threshold [in] soglia rispetto alla quale si vuole ottenere l'informazione
 * @return numero di studenti con la media superiore o uguale alla soglia in input
**/
int statistics(Career *students, int num_students, float threshold) {
    return 0;
}