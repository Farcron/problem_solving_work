#include <stdio.h>

int main() {
    int student_marks;
    char student_grade;

    // Prompt for and read the student's marks
    printf("Enter the total marks obtained by the student (0-100): ");
    
    // Check if input is valid (an integer) using return value of scanf
    if (scanf("%d", &student_marks) != 1) {
        // If scanf fails (e.g., user enters a non-integer)
        printf("Invalid input. Please enter a numeric value between 0 and 100.\n");
        return 1;
    }

    // Validate if the entered marks are within range
    if (student_marks < 0 || student_marks > 100) {
        printf("Invalid student mark entered. Please enter a value between 0 and 100.\n");
        return 1;
    }

    // Determine the student grade based on marks
    if (student_marks >= 80 && student_marks <= 100) {
        student_grade = 'A';
    } else if (student_marks >= 70 && student_marks <= 79) {
        student_grade = 'B';
    } else if (student_marks >= 60 && student_marks <= 69) {
        student_grade = 'C';
    } else if (student_marks >= 50 && student_marks <= 59) {
        student_grade = 'D';
    } else {
        student_grade = 'F';
    }

    // Display the student grade
    printf("The student grade is: %c\n", student_grade);

    return 0;
}
