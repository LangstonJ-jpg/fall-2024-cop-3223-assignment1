//****************************
//Author: Langston Johnson
//Date: 9/7/24
//Class: COP 3223, Professor Parra
// Purpose: This program is meant to fracture a program into 5 different functions 
//Input: User inputs coordinates to use a data for calculations
//Output: Width, Height, Distance, Area, Perimeter  */

#include <stdio.h>
#include <math.h>

#define PI 3.14159



double calculateDistance(){
    double x1, y1, x2, y2;

    //Input coordinates for point 1
    printf("Enter x1 and y1: ");
    scanf("%lf %lf", &x1, &y1);
    
    //Input coordinates for point 2
    printf("Enter x2 and y2: ");
    scanf("%lf %lf", &x2, &y2);

    //Output the entered points
    printf("Point 1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point 2 entered: x2 = %lf; y2 = %lf\n", x2, y2);


    //calculate the distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The distance between the two points is %lf\n", distance);
    
    return distance;

}

double calculatePerimeter(){
    double x1, y1, x2, y2;

    //Input coordinates for point 1
    printf("Enter x1 and y1: ");
    scanf("%lf %lf", &x1, &y1);
    
    //Input coordinates for point 2
    printf("Enter x2 and y2: ");
    scanf("%lf %lf", &x2, &y2);

    //Output the entered points
    printf("Point 1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point 2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

    double perimeter = 2 * calculateDistance();
    
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

    //return difficulty
    return 2.5;
}

double calculateArea(){
    double x1, y1, x2, y2;

    //Input coordinates for point 1
    printf("Enter x1 and y1: ");
    scanf("%lf %lf", &x1, &y1);
    
    //Input coordinates for point 2
    printf("Enter x2 and y2: ");
    scanf("%lf %lf", &x2, &y2);

    //Output the entered points
    printf("Point 1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point 2 entered: x2 = %lf; y2 = %lf\n", x2, y2);


    double area = pow(calculateDistance(), 2);

    printf("The area of the city encompassed by your request is %lf\n", area);

    //return difficulty
    return 2.0;
}

double calculateWidth(){
    double x1, y1, x2, y2;

    //Input coordinates for point 1
    printf("Enter x1 and y1: ");
    scanf("%lf %lf", &x1, &y1);
    
    //Input coordinates for point 2
    printf("Enter x2 and y2: ");
    scanf("%lf %lf", &x2, &y2);

    //Output the entered points
    printf("Point 1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point 2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

    double width = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The width of the city encompassed by your request is %lf\n", width);

    //return the difficulty
    return 3.0;
}

double calculateHeight(){
double x1, y1, x2, y2;

    //Input coordinates for point 1
    printf("Enter x1 and y1: ");
    scanf("%lf %lf", &x1, &y1);
    
    //Input coordinates for point 2
    printf("Enter x2 and y2: ");
    scanf("%lf %lf", &x2, &y2);

    //Output the entered points
    printf("Point 1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point 2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

    //Calculate the height 
    double height = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The height of the city encompassed by your request is %lf\n", height);

    //return the difficulty
    return 3.0;
}

int main(int argc, char **argv){
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}