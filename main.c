//                                      LINKED LISTS PROJECT
// Team members:-
//Name1 : Thabet hussien thabet          sec:1                BN: 49

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct listnode{
    char Student_Name[30];
    int Student_ID;
    int Score_Of_Last_Year;
    int Day_Of_Birth;
    int Year_Of_Birth;
    int Month_Of_Birth;
    struct listnode* next;
}ListNode;

typedef struct dynamicarray
{
    char Student_Name[30];
    int Student_ID;
    int Score_Of_Last_Year;
    int Day_Of_Birth;
    int Year_Of_Birth;
    int Month_Of_Birth;
}DynamicArray;

typedef struct list
{
    ListNode* head;
    ListNode* tail;
    size_t size;
}List;
void initializeList(List *);
void designList(int, List *);
void printList(List *);
ListNode* enterInformationOfStudent();// enter information of a student in linked list part
void enterInformationOfStudent2(DynamicArray*);//enter information of a student in dynamic array part
void insertInTheBeginning(List *);//linked list
void insertInTheEnd(List *);//linked list
void insert_In_Nth_Position_In_The_Middle(List *);//linked list
void print_dynamic_array_elements(DynamicArray*);
void Insert_in_the_beginning_of_dynamic_array(DynamicArray*);
void Insert_in_the_middle_of_dynamic_array(DynamicArray*);
void Insert_in_the_end_of_dynamic_array(DynamicArray*);

int n;

