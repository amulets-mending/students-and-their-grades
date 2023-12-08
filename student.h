// student.h
#ifndef STUDENT_H
#define STUDENT_H

struct Student {
    char name[50];
    int grades[5];
    float average;
};

void initializeStudents(struct Student students[], int size);
void inputGrades(struct Student students[], int size);
void calculateAverage(struct Student students[], int size);
void displayResults(struct Student students[], int size);

#endif // STUDENT_H
