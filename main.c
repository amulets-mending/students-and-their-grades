// main.c
#include <stdio.h>
#include "student.h"

int main() {
    struct Student students[3];

    initializeStudents(students, 3);
    inputGrades(students, 3);
    calculateAverage(students, 3);
    displayResults(students, 3);

    return 0;
}
