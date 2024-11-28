#include <stdio.h>
#include <string.h>

typedef struct Student {
    char rollnumber[10];
    int marks;
    char result[5];
} Student;

int isValidRollnumber(char *str) {
    if((str[0] == 'B') && (str[1] == 'C') && (str[2] == 'S') && (str[3] == '2') && 
       (str[4] >= '0') && (str[4] <= '3') && (str[5] >= '0') && (str[5] <= '9') && 
       (str[6] >= '0') && (str[6] <= '9') && (str[7] >= '0') && (str[7] <= '9')) {
        return 1;
    }
    else {
        return 0;
    }
}

void assignResult(Student *s) {
    if (s->marks > 40) {
        strcpy(s->result, "PASS");
    } else {
        strcpy(s->result, "FAILED");
    }
}

void printPassed(Student students[], int n) {
    printf("Roll numbers of students who passed the exam:\n");
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].result, "PASS") == 0) {
            printf("%s\n", students[i].rollnumber);
        }
    }
}

int main() {
    Student students[5];
    int validity;

    for (int i = 0; i < 5; i++) {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%s", students[i].rollnumber);

        while (!isValidRollnumber(students[i].rollnumber)) {
            printf("INVALID. Enter a valid roll number for student %d: ", i + 1);
            scanf("%s", students[i].rollnumber);
        }

        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &students[i].marks);

        assignResult(&students[i]);
    }

    printPassed(students, 5);

    return 0;
}
