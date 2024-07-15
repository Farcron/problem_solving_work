#include <stdio.h>

int main() {
    int student_marks;
    char student_grade;

    // The total marks obtained by the student
    printf("Enter the total marks obtained by the student (0-100): ");
    scanf("%d", &student_marks);

    // Determine the student grade using letters
    if (student_marks >= 80 && student_marks <= 100) {
        student_grade = 'A';
    
    } else if (student_marks >= 70 && student_marks <= 79) {
            student_grade = 'B';
    
    } else if (student_marks >= 60 && student_marks <= 69) {
        student_grade = 'C';
    
    } else if (student_marks >= 50 && student_marks <= 59) {
        student_grade = 'D';
    
    } else if (student_marks >= 0 && student_marks <=49) {
        student_grade = 'F';
    
    } else {
        // Handle invalid input
        printf("Invalid student mark entered.\n");
        return 1;
    }


    // Display the student grade
    printf("The student grade is: %c\n", student_grade);

    return 0;
}
