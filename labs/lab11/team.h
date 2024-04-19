typedef struct Person {
    char name[20];
    struct Person* next;
} Person;

typedef struct {
    struct Person* head;
} Team;

void print_team(Team*);

Person* create_new_person(char*);

void insert_person_at_front(Team*, Person*);

void delete_person_at_front(Team*);

int is_empty(Team);
