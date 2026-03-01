#include <stdio.h>
#include <string.h>
#include <math.h>

double assinment();
double quiz();
double finals();
double result(double assinmentin, double quizin, double finalsin);
char* grade(double finalgrade);
double cgpa(double finalgrade);

int main() {
    printf("Welcome to grade calculator\n");
    double assinmentin = assinment();
    double quizin = quiz();
    double finalsin = finals();

    double finalgrade = result(assinmentin, quizin, finalsin);
    printf("Your letter grade is: %s\n", grade(finalgrade));
    printf("Your CGPA is: %.2lf\n", cgpa(finalgrade));
    return 0;
}

double assinment() {
    int num;
    printf("How many assignments do you have: ");
    scanf("%d", &num);
    double grade[num];
    double maxgrade = 0;
    for (int i = 0; i < num; i++) {
        printf("Enter the grade of assignment %d: ", i + 1);
        scanf("%lf", &grade[i]);
        if (grade[i] > maxgrade) {
            maxgrade = grade[i];
        }
    }
    return maxgrade;
}

double quiz() {
    int num;
    int consider;
    printf("How many quizzes do you have: ");
    scanf("%d", &num);
    printf("How many quizzes do you want to consider: ");
    scanf("%d", &consider);

    if (consider > num) {
        printf("Consider value exceeds total number of quizzes. Setting consider to %d.\n", num);
        consider = num;
    }

    double grade[num];
    for (int i = 0; i < num; i++) {
        printf("Enter the grade of quiz %d: ", i + 1);
        scanf("%lf", &grade[i]);
    }

    // Sort grades in descending order
    for (int i = 0; i < num - 1; i++) {
        for (int j = i + 1; j < num; j++) {
            if (grade[j] > grade[i]) {
                double temp = grade[i];
                grade[i] = grade[j];
                grade[j] = temp;
            }
        }
    }

    // Calculate the sum of the top 'consider' grades
    double sum = 0;
    for (int i = 0; i < consider; i++) {
        sum += grade[i];
    }

    // Return the average of the top 'consider' grades
    return sum / consider;
}

double finals() {
    double midterm, final;
    printf("Enter the grade of midterm: ");
    scanf("%lf", &midterm);
    printf("Enter the grade of final: ");
    scanf("%lf", &final);
    return (midterm * 0.25) + (final * 0.30);
}

double result(double assinmentin, double quizin, double finalsin) {
    double finalgrade = (assinmentin * 0.1) + (quizin * 0.25) + finalsin;
    printf("Your final grade is: %.2lf\n", finalgrade);
    return finalgrade;
}

char* grade(double finalgrade) {
    if (finalgrade >= 93) {
        return "A";
    } else if (finalgrade >= 90 && finalgrade < 93) {
        return "A-";
    } else if (finalgrade >= 87 && finalgrade < 90) {
        return "B+";
    } else if (finalgrade >= 83 && finalgrade < 87) {
        return "B";
    } else if (finalgrade >= 80 && finalgrade < 83) {
        return "B-";
    } else if (finalgrade >= 77 && finalgrade < 80) {
        return "C+";
    } else if (finalgrade >= 73 && finalgrade < 77) {
        return "C";
    } else if (finalgrade >= 70 && finalgrade < 73) {
        return "C-";
    } else if (finalgrade >= 67 && finalgrade < 70) {
        return "D+";
    } else if (finalgrade >= 60 && finalgrade < 67) {
        return "D";
    } else {
        return "F";
    }
}

double cgpa(double finalgrade) {
    if (finalgrade >= 93) {
        return 4.0;
    } else if (finalgrade >= 90 && finalgrade < 93) {
        return 3.7;
    } else if (finalgrade >= 87 && finalgrade < 90) {
        return 3.3;
    } else if (finalgrade >= 83 && finalgrade < 87) {
        return 3.0;
    } else if (finalgrade >= 80 && finalgrade < 83) {
        return 2.7;
    } else if (finalgrade >= 77 && finalgrade < 80) {
        return 2.3;
    } else if (finalgrade >= 73 && finalgrade < 77) {
        return 2.0;
    } else if (finalgrade >= 70 && finalgrade < 73) {
        return 1.7;
    } else if (finalgrade >= 67 && finalgrade < 70) {
        return 1.3;
    } else if (finalgrade >= 60 && finalgrade < 67) {
        return 1.0;
    } else {
        return 0.0;
    }
}