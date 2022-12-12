#include <stdio.h>
#include "fake_sort.h"

int main() {
    Person marvel[NUM_PEOPLE] = {
        {"Natilia", "Romanoff", 26}, // 0
        {"Tony", "Stark", 34},       // 1
        {"Thor", "Odinson", 1527},   // 2
        {"Bruce", "Banner", 41},     // 3
        {"Peter", "Parker", 22},     // 4
        {"Scott", "Lang", 33},       // 5
        {"Wanda", "Maximoff", 35},   // 6
        {"James", "Howlett", 155},   // 7
        {"Clinton", "Barton", 38},   // 8
        {"Steven", "Rogers", 79}    // 9
    };

    /*************************************/
    /*  INIZIO  PARTE DA INIZIALIZZARE   */
    /*************************************/
    Person *name_asc[NUM_PEOPLE] = {};
    Person *name_des[NUM_PEOPLE] = {};
    Person *surname_asc[NUM_PEOPLE] = {};
    Person *surname_des[NUM_PEOPLE] = {};
    Person *age_asc[NUM_PEOPLE] = {};
    Person *age_des[NUM_PEOPLE] = {};
    /*************************************/
    /*   FINE  PARTE DA INIZIALIZZARE    */
    /*************************************/

    char sort_type;
    printf("Sort type: ");
    scanf("%c", &sort_type);
    printf("\n");

    Person **sorted = NULL;
    switch (sort_type)
    {
    case NAME_ASC:
        sorted = name_asc;
        break;
    case NAME_DES:
        sorted = name_des;
        break;
    case SURNAME_ASC:
        sorted = surname_asc;
        break;
    case SURNAME_DES:
        sorted = surname_des;
        break;
    case AGE_ASC:
        sorted = age_asc;
        break;
    case AGE_DES:
        sorted = age_des;
        break;
    }

    for (int i = 0; i < NUM_PEOPLE; i++){
        if((sorted != NULL) && (sorted[i] != NULL))
            printf("%s, %s, %d\n", sorted[i]->name, sorted[i]->surname, sorted[i]->age);
        else
            printf("Data not available\n");
    }
    
}