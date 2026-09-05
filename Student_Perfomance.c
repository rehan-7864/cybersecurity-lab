#include <stdio.h>

int main()
{
    char Student_Name[40], Student_ID[30];
    int Number_of_completed_labs, Number_of_total_labs;
    float Lab_completion_percentage, Quiz_marks, Assignment_marks, Project_marks, Total_academic_score;

    printf("Enter the Student Name:");
    scanf("%s", Student_Name);

    printf("Enter the Student-ID:");
    scanf("%s", Student_ID);

    printf("Enter the Number of Labs completed:");
    scanf("%d", &Number_of_completed_labs);

    printf("Enter the total Number of Labs:");
    scanf("%d", &Number_of_total_labs);

    printf("Enter the Quiz marks:");
    scanf("%f", &Quiz_marks);

    printf("Enter the Assignment marks:");
    scanf("%f", &Assignment_marks);

    printf("Enter the Project marks:");
    scanf("%f", &Project_marks);

    Lab_completion_percentage = (Number_of_completed_labs / (float)Number_of_total_labs) * 100;
    Total_academic_score = Quiz_marks + Assignment_marks + Project_marks;

    printf("\n\n\nSTUDENT PERFOMANCE REPORT\n\n");
    printf("Student Name: %s\n", Student_Name);
    printf("Student-ID: %s\n", Student_ID);
    printf("Completed labs: %d\n", Number_of_completed_labs);
    printf("Total Labs: %d\n", Number_of_total_labs);
    printf("Quiz MArks: %.3f\n", Quiz_marks);
    printf("Assignment Marks: %.3f\n", Assignment_marks);
    printf("Project Marks: %.3f\n\n", Project_marks);
    printf("Lab Completion percentage: %.2f%%\n", Lab_completion_percentage);
    printf("Total Academic Score: %.2f\n\n", Total_academic_score);

    return 0;
}