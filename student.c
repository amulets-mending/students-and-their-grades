// student.c
#include <stdio.h>
#include "student.h"

void initializeStudents(struct Student students[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
    }
}

void inputGrades(struct Student students[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("Enter grades for %s: ", students[i].name);
        for (int j = 0; j < 5; ++j) {
            scanf("%d", &students[i].grades[j]);
        }
    }
}

void calculateAverage(struct Student students[], int size) {
    for (int i = 0; i < size; ++i) {
        float sum = 0;
        for (int j = 0; j < 5; ++j) {
            sum += students[i].grades[j];
        }
        students[i].average = sum / 5;
    }
}

void displayResults(struct Student students[], int size) {
    printf("\nResults:\n");
    for (int i = 0; i < size; ++i) {
        printf("%s - Average Grade: %.2f\n", students[i].name, students[i].average);
    }
}
