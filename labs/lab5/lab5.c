#include <stdio.h>

double calculateGrade(char *answers, char student_answers[], int num_questions) {
    int correct = 0;

    for (int i = 0; i < num_questions; ++i) {
        if (student_answers[i] == answers[i]) {
            correct++;
        }
    }

    return (double) correct / num_questions * 100.0;
}

int main(void) {
    int n;
    int num_students;
    char temp;
    scanf("%d", &n);    // read num answers
    char answers[n];    // initialize answers array of size n (size of number of questions)
    scanf("%c", &temp); // read the space
    for (int i = 0; i < n; i++) {
        scanf(" %c", &answers[i]); // read in and store the correct answers, note the space before %c to skip whitespace characters
    }

    int id[9]; //array for student ids
    char student_answers[9][9]; //2d array to hold each students individual answers
    double grades[9] = {0}; //array to hold each students grades
    int missed_questions[n]; //array to hold the missed questions data
    for (int i = 0; i < n; i++) { //initialize missed_questions to zero to begin 
        missed_questions[i] = 0;
    }

    /*
    loop through input file to determine number of students, save student id's,
    keep track of missed questions, and calculate and store each students grade.
    */
    for(num_students=0; scanf("%d", &id[num_students]) == 1; num_students++){
        scanf("%c", &temp); // read the space
        for(int j=0; j<n; j++){
            scanf(" %c", &student_answers[num_students][j]);
            if(student_answers[num_students][j] != answers[j]){
                missed_questions[j]++;
            }
        }
        grades[num_students] = calculateGrade(answers, student_answers[num_students], n);
    }

    //print number of questions
    printf("Question : ");
    for(int i=0; i<n; i++){
        printf("%d ", i+1);
    }

    //print answers to questions
    printf("\nAnswer : ");
    for(int i=0; i<n; i++){
        printf("%c ", answers[i]);
    }

    // Print student grades
    printf("\nID    Grade(%%)\n");
    for (int i = 0; i < num_students; i++) {
        printf("%d   %.2f\n", id[i], grades[i]);
    }

    //print number of questions
    printf("Question : ");
    for(int i=0; i<n; i++){
        printf("%d ", i+1);
    }

    printf("\nMissed by:");
    for (int i = 0; i < n; i++) {
        printf(" %d", missed_questions[i]);
    }
    printf("\n");


    return(0);
}

