/*Write a C Program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and 
Computer. Calculate percentage and grade according to following: Percentage >= 90% : Grade A
 Percentage >= 80% : Grade B Percentage >= 70% : Grade C Percentage >= 60% : Grade D Percentage 
 >= 40% : Grade E Percentage < 40% : Grade F */
#include <stdio.h>
void main() {
    int physics, chemistry, biology, mathematics, computer;
    float total, percentage;
    char grade;
    printf("Enter marks of Physics: ");
    scanf("%d", &physics);
    printf("Enter marks of Chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter marks of Biology: ");
    scanf("%d", &biology);
    printf("Enter marks of Mathematics: ");
    scanf("%d", &mathematics);
    printf("Enter marks of Computer: ");
    scanf("%d", &computer);
    total = physics + chemistry + biology + mathematics + computer;
    percentage = (total / 500.0) * 100.0;
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }
    printf("Total marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
}