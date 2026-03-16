/**
 * Implementation of a student record management system using structures
 * 
 * This program demonstrates the use of structures in C to manage student data
 * including personal information and module marks.
 */

#include <stdio.h>
#include <string.h>

#include "student_record.h"

/**
 * Calculate the average mark for a student
 * 
 * param student The student whose average mark is to be calculated
 * return float The average mark
 */
float calculate_average(struct student_record student) {
    // TODO: Implement this function to calculate and return the average
    // of the three module marks
    int i;
    float total_marks;
    float average;
    for(i = 1; i <= 3; i++){
        total_marks = total_marks + student.marks[i];
    }
    average = total_marks / 3;
    return average; // Placeholder return value
}

/**
 * Display student information including name, ID, marks, and average
 * 
 * student The student whose information is to be displayed
 */
void display_student(struct student_record student) {
    // TODO: Implement this function to display student information
    // Format: Name, ID, individual marks, and average mark
    printf("%s", student.name);
    printf("%i", student.id);
    printf("%f", calculate_average(student));
}

/*
 * main
 */
int main( void ) {
    // TODO: Create and initialise a student variable with sample data
    // Example: name = "John Smith", id = 12345, marks = {75.0, 68.5, 81.0}
    Student student1;
    student1.name = 'John Smith',
    student1.id = 12345,
    student1.marks = {75.0, 68.5, 81.0};
    // TODO: display the student data and average mark
    display_student(student1);
    return 0;
}