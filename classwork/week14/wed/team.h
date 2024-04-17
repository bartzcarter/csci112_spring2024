typedef struct Person {
    char name[20];
    struct Person* next;
} Person;

typedef struct {
    struct Person* head;
} Team;

void insert_person_at_back(Team*, Person*);
