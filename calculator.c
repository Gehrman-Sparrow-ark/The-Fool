#include <stdio.h>
#include <string.h>
#include <math.h>
//for gossary
struct Product {
    char name[50];
    float price;
    int quantity;
    char currency;
    float total;
};
//for hypotenuse
struct Hypotenuse {
    float height;
    float base;
    float hypotenuse;
};
//for circle

//for net bandwidth converter 
struct Netspeed{
    double bit,byte,kilobyte,megabyte,gigabyte,terabyte;
    double bandwidh_num;
    char bandwidh_str[50];
    char bandwidh2_str[50];
};
struct daysconverter{
    char choice;
    int intdays;
    int year;
    int week;
    int day;
};
//grade calculator
double assinment();
double quiz();
double finals();
double result(double assinmentin, double quizin, double finalsin);
char* grade(double finalgrade);
double cgpa(double finalgrade);

int main(){
   struct Product product = {"",0.0f,0,'$',0.0f};
   struct Hypotenuse hypotenuse = {0.0f,0.0f,0.0f};
   struct daysconverter daysconverter ={0,'\0',0,0,0};
   struct Netspeed Bandwidh = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,"",""};
   double radius = 0.0;
   const double PI = 3.1416;
   double area = 0.0;
   double circumfrance = 0.0;
   double principal = 0.0;
   float interest = 0.0f;
   int interestcompo = 0;
   int year = 0;
   int choice = 0;
   double kilogram = 0.0;
   double pound = 0.0;
   float fehrenheit = 0.0f;
   float calcius = 0.0f;
   float kelvin = 0.0f;
   do{
   printf("This is a calculator\n");
   printf("There are 5 options\n");
   printf("1.Calculate gossary\n");
   printf("2.Calculate hypotenuse\n");
   printf("3.Calculate circle area\n");
   printf("4.Calculate compound\n");
   printf("5.weight converter\n");
   printf("6.temperature converter\n");
   printf("7.net bandwidth converter\n");
   printf("8.Day converter\n");
   printf("9.grade calculator\n");
   printf("enter your choice: ");
   scanf("%d",&choice);
   if(choice < 0 || choice > 9){
        printf("invalid option!\n");
        printf("Please enter a valid option (1 or 2)\n");
        }}while(choice == 'y' ||choice == 'Y');
   switch(choice){
      //gossary calculator
      case 1:  
        printf("This a gossary calculator\n");
        printf("what item would you like to buy: ");
        fgets(product.name,sizeof(product.name),stdin);
        product.name[strlen(product.name)-1] = '\0';

        printf("what is the price of each item: ");
        scanf(" %f",& product.price);

        printf("how many would you like to buy: ");
        scanf(" %d",&product.quantity);

        product.total =  product.price * product.quantity;

        printf("you have bought %d %ss\n",product.quantity,product.name);

        printf("the total is :%c%0.2f",product.currency,product.total);
            
        break;
      //hypotenuse calculator
      case 2:
        printf("What's the height of the triangle: ");
        scanf("%f",& hypotenuse.height);
        printf("What's the base of the triangle: ");
        scanf("%f",&hypotenuse.base);

        hypotenuse.height = pow(hypotenuse.height,2);
        hypotenuse.base =pow(hypotenuse.base,2);
        hypotenuse.hypotenuse = sqrt(hypotenuse.height+hypotenuse.base);

        printf("the hypotenuse of the triangle is: %0.3f",hypotenuse.hypotenuse);

        break;
      //circle area and circumfrance calculator
      case 3:
        printf("Enter the radius: ");
        scanf("%lf",&radius);
        area = PI * pow(radius,2);
        circumfrance = 2 * PI * radius;
        printf("area of the circle:%0.3lf",area);
        printf("\ncurcumfrance of the circle:%0.3lf",circumfrance);

        break; 
      //compound interest calculator
      case 4:
        printf("this a compound interest calculator\n");
        printf("Enter the principal (p): ");
        scanf("%lf",&principal);
        printf("Enter the interest rate %% (r): ");
        interest = interest / 100;
        scanf("%f",&interest);
        printf("Enter interestcompo (n): ");
        scanf(" %d",&interestcompo);
        printf("Enter year of interest (t): ");
        scanf(" %d",&year);
        product.total = principal+pow(1+interest/interestcompo,interestcompo*year);
        printf("The total you earned in interest: %lf",product.total);
       
        break; 
      //weight converter
      case 5:
        do{
        printf("This is a weight converter\n");
        printf("There are two option:\n");
        printf("1.kilogram to pound\n");
        printf("2.pound to kilogram\n");
        printf("Select one of the two option (1/2): ");
        scanf("%d",&choice);
        if(choice < 0 || choice > 2){
        printf("invalid option!\n");
        printf("Please enter a valid option (1 or 2)\n");
        }}while(choice < 0 || choice > 2);

        switch(choice){
            case 1:
            printf("Enter weight in kilograms: ");
            scanf("%lf",&kilogram);
            pound = kilogram*2.20462;
            printf("%0.4lf kilograms equal t0 %0.4lf pound",kilogram,pound);
            
            break;
            case 2:
            printf("Enter weight in pounds: ");
            scanf("%lf",&pound);
            kilogram = pound/2.20462;
            printf("%0.3lf pound equals t0 %0.3lf kilograms",pound,kilogram);

            break;
            default:
            printf("invalid option!\n");
            printf("Please enter a valid option (1 or 2)");
        }
       
        break; 
      //temperature converter
      case 6:
        printf("this is a temperature converter");
        printf("\nthere are 6 options\n");
        printf("1.calcius to fehrenheit\n");
        printf("2.calcius to kelvin\n");
        printf("3.fehrenheit to kelvin\n");
        printf("4.fehrenheit to calcius\n");
        printf("5.kelvin to calcius\n");
        printf("6.kelvin to fehrenheit\n");
        printf("Choose one of the options: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf ("Enter the temperture in calcius: ");
            scanf("%f",&calcius);
            fehrenheit =(9.0/5.0)*calcius+32;
            printf("%f fehrenheit",fehrenheit);
            
            break;
            case 2:
            printf ("Enter the temperture in calcius: ");
            scanf("%f",&calcius);
            kelvin = calcius+273.15;
            printf("%f kelvin",kelvin);

            break;
            case 3:
            printf ("Enter the temperture in fehrenheit: ");
            scanf("%f",&fehrenheit);
            kelvin =5.0/9.0*(fehrenheit-32)+273.15;
            printf("%f kelvin",kelvin);

            break;
            case 4:
            printf ("Enter the temperture in fehrenheit: ");
            scanf("%f",&fehrenheit);
            calcius = 5.0/9.0*(fehrenheit-32)+273.15;
            printf("%f calcius",calcius);

            break;
            case 5:
            printf ("Enter the temperture in kelvin: ");
            scanf("%f",&kelvin);
            calcius = kelvin-273.15;
            printf("%f calcius",calcius);

            break;
            case 6:
            printf ("Enter the temperture in kelvin: ");
            scanf("%f",&kelvin);
            fehrenheit = 9.0/5.0*(kelvin-273.15)+32;
            printf("%f fehrenheit",fehrenheit);

            break;
            default:
            printf("invalid option!\n");
            printf("Please enter a valid option (1 or 2)");  
        }  
        break; 
      //net bandwidth converter
      case 7:
        printf("this is a net converter\n");
        getchar();
        printf("which bandwidh you want to convert: ");
        fgets(Bandwidh.bandwidh_str,sizeof(Bandwidh.bandwidh_str),stdin);
        Bandwidh.bandwidh_str[strlen(Bandwidh.bandwidh_str)-1] = '\0';

        //bit section
        if(strcmp(Bandwidh.bandwidh_str,"bit")==0){
        printf("to which: ");
        fgets(Bandwidh.bandwidh2_str,sizeof(Bandwidh.bandwidh2_str),stdin);
        Bandwidh.bandwidh2_str[strlen(Bandwidh.bandwidh2_str)-1] = '\0';
        if(strcmp(Bandwidh.bandwidh2_str,"byte")==0){
            printf("Enter the numbers of %s ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.bit);
            Bandwidh.bandwidh_num = Bandwidh.bit/1024;
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"kilobyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.bit);
            Bandwidh.bandwidh_num = Bandwidh.bit/pow(1024,2);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"megabyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.bit);
            Bandwidh.bandwidh_num = Bandwidh.bit/pow(1024,3);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"gigabyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.bit);
            Bandwidh.bandwidh_num = Bandwidh.bit/pow(1024,4);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"terabyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.bit);
            Bandwidh.bandwidh_num = Bandwidh.bit/pow(1024,5);
        }
        else{
            printf("You dont know which one to convert.so dont use it");
        }
        printf("%0.2lf %s = %0.2lf %s",Bandwidh.bit,Bandwidh.bandwidh_str,Bandwidh.bandwidh_num,Bandwidh.bandwidh2_str);   
      }
        //byte section
        else if(strcmp(Bandwidh.bandwidh_str,"byte")==0){
        printf("to which: ");
        fgets(Bandwidh.bandwidh2_str,sizeof(Bandwidh.bandwidh2_str),stdin);
        Bandwidh.bandwidh2_str[strlen(Bandwidh.bandwidh2_str)-1] = '\0';
        if(strcmp(Bandwidh.bandwidh2_str,"bit")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.byte);
            Bandwidh.bandwidh_num = Bandwidh.byte*1024;
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"kilobyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.byte);
            Bandwidh.bandwidh_num = Bandwidh.byte/pow(1024,1);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"megabyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.byte);
            Bandwidh.bandwidh_num = Bandwidh.byte/pow(1024,2);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"gigabyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.byte);
            Bandwidh.bandwidh_num = Bandwidh.byte/pow(1024,3);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"terabyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.byte);
            Bandwidh.bandwidh_num = Bandwidh.byte/pow(1024,4);
        }
        else{
            printf("You dont know which one to convert.so dont use it");
        }
      printf("%0.2lf %s = %0.2lf %s",Bandwidh.byte,Bandwidh.bandwidh_str,Bandwidh.bandwidh_num,Bandwidh.bandwidh2_str);
      }
        //kilobyte section
        else if(strcmp(Bandwidh.bandwidh_str,"kilobyte")==0){
        printf("to which: ");
        fgets(Bandwidh.bandwidh2_str,sizeof(Bandwidh.bandwidh2_str),stdin);
        Bandwidh.bandwidh2_str[strlen(Bandwidh.bandwidh2_str)-1] = '\0';
        if(strcmp(Bandwidh.bandwidh2_str,"bit")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.kilobyte);
            Bandwidh.bandwidh_num = Bandwidh.kilobyte/pow(1024,2);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"byte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.kilobyte);
            Bandwidh.bandwidh_num = Bandwidh.kilobyte/pow(1024,1);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"megabyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.kilobyte);
            Bandwidh.bandwidh_num = Bandwidh.kilobyte/pow(1024,2);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"gigabyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.kilobyte);
            Bandwidh.bandwidh_num = Bandwidh.kilobyte/pow(1024,3);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"terabyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.kilobyte);
            Bandwidh.bandwidh_num = Bandwidh.kilobyte/pow(1024,4);
        }
        else{
            printf("You dont know which one to convert.so dont use it");
        }
        printf("%0.2lf %s = %0.2lf %s",Bandwidh.kilobyte,Bandwidh.bandwidh_str,Bandwidh.bandwidh_num,Bandwidh.bandwidh2_str);
      }
        //megabyte section
        else if(strcmp(Bandwidh.bandwidh_str,"megabyte")==0){
        printf("to which: ");
        fgets(Bandwidh.bandwidh2_str,sizeof(Bandwidh.bandwidh2_str),stdin);
        Bandwidh.bandwidh2_str[strlen(Bandwidh.bandwidh2_str)-1] = '\0';
        if(strcmp(Bandwidh.bandwidh2_str,"bit")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.megabyte);
            Bandwidh.bandwidh_num = Bandwidh.megabyte*pow(1024,3);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"byte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.megabyte);
            Bandwidh.bandwidh_num = Bandwidh.megabyte*pow(1024,2);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"kilobyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.megabyte);
            Bandwidh.bandwidh_num = Bandwidh.megabyte*pow(1024,1);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"gigabyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.megabyte);
            Bandwidh.bandwidh_num = Bandwidh.megabyte/pow(1024,1);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"terabyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.megabyte);
            Bandwidh.bandwidh_num = Bandwidh.megabyte/pow(1024,2);
        }
        else{
            printf("You dont know which one to convert.so dont use it");
        }
        printf("%0.2lf %s = %0.2lf %s",Bandwidh.megabyte,Bandwidh.bandwidh_str,Bandwidh.bandwidh_num,Bandwidh.bandwidh2_str);
      }
        //gigabyte section
        else if(strcmp(Bandwidh.bandwidh_str,"gigabyte")==0){
        printf("to which: ");
        fgets(Bandwidh.bandwidh2_str,sizeof(Bandwidh.bandwidh2_str),stdin);
        Bandwidh.bandwidh2_str[strlen(Bandwidh.bandwidh2_str)-1] = '\0';
        if(strcmp(Bandwidh.bandwidh2_str,"bit")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.gigabyte);
            Bandwidh.bandwidh_num = Bandwidh.gigabyte*pow(1024,4);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"byte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.gigabyte);
            Bandwidh.bandwidh_num = Bandwidh.gigabyte*pow(1024,3);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"kilobyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.gigabyte);
            Bandwidh.bandwidh_num = Bandwidh.gigabyte*pow(1024,2);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"megabyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.gigabyte);
            Bandwidh.bandwidh_num = Bandwidh.gigabyte*pow(1024,1);
        }
        else if(strcmp(Bandwidh.bandwidh2_str,"terabyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.gigabyte);
            Bandwidh.bandwidh_num = Bandwidh.gigabyte/pow(1024,1);
        }
        else{
            printf("You dont know which one to convert.so dont use it");
        }
        printf("%0.2lf %s = %0.2lf %s",Bandwidh.gigabyte,Bandwidh.bandwidh_str,Bandwidh.bandwidh_num,Bandwidh.bandwidh2_str);
        }
        //terabyte section    
        else if(strcmp(Bandwidh.bandwidh_str,"terabyte")==0){
        printf("to which: ");
        fgets(Bandwidh.bandwidh2_str,sizeof(Bandwidh.bandwidh2_str),stdin);
        Bandwidh.bandwidh2_str[strlen(Bandwidh.bandwidh2_str)-1] = '\0';
        if(strcmp(Bandwidh.bandwidh2_str,"bit")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.terabyte);
            Bandwidh.bandwidh_num = Bandwidh.terabyte*pow(1024,5);
        }
       else if(strcmp(Bandwidh.bandwidh2_str,"byte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.terabyte);
            Bandwidh.bandwidh_num = Bandwidh.terabyte*pow(1024,4);
        }
       else if(strcmp(Bandwidh.bandwidh2_str,"kilobyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.terabyte);
            Bandwidh.bandwidh_num = Bandwidh.terabyte*pow(1024,3);
        }
       else if(strcmp(Bandwidh.bandwidh2_str,"megabyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.terabyte);
            Bandwidh.bandwidh_num = Bandwidh.terabyte*pow(1024,2);
        }
       else if(strcmp(Bandwidh.bandwidh2_str,"gigabyte")==0){
            printf("Enter the numbers of %s: ",Bandwidh.bandwidh_str);
            scanf("%lf",&Bandwidh.terabyte);
            Bandwidh.bandwidh_num = Bandwidh.terabyte*pow(1024,1);
        }
       else{
            printf("You dont know which one to convert.so dont use it");
        }
       printf("%0.2lf %s = %0.2lf %s",Bandwidh.terabyte,Bandwidh.bandwidh_str,Bandwidh.bandwidh_num,Bandwidh.bandwidh2_str);
        }
        else{
      printf("its not a option.");
        }
        break;
      //day converter    
      case 8:  
        do{
        printf("how many days: ");  
        scanf("%d", &daysconverter.intdays);
        daysconverter.year = daysconverter.intdays / 365;
        daysconverter.week = (daysconverter.intdays % 365) / 7;
        daysconverter.day = (daysconverter.intdays % 365) % 7;      
        printf("%d days is equal to %d year(s), %d week(s) and %d day(s)\n", daysconverter.intdays, daysconverter.year, daysconverter.week, daysconverter.day);
        printf("do you want to continue? (y/n): ");
        scanf(" %c", &daysconverter.choice);
        }while(daysconverter.choice == 'y' || daysconverter.choice == 'Y');
        printf("Goodbye!\n");
        break;
        default:
        printf("invalid option!\n");
        printf("Please enter a valid option (1 or 2)");
      break;
      case 9:
      printf("Welcome to grade calculator\n");
      double assinmentin = assinment();
      double quizin = quiz();
      double finalsin = finals();

      double finalgrade = result(assinmentin, quizin, finalsin);
      printf("Your letter grade is: %s\n", grade(finalgrade));
      printf("Your CGPA is: %.2lf\n", cgpa(finalgrade));


   }
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