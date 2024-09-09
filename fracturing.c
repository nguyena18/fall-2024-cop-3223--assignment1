// Ai My Nguyen
// UCFID 5407557

#include <stdio.h>
#include <math.h>

#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Point 1 (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Point #1 entered: x1 = %.2f, y1 = %.2f\n", x1, y1);

    printf("Point 2 (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Point #2 entered: x2 = %.2f, y2 = %.2f\n", x2, y2);
    
    double distance = sqrt(pow(x2 - x1, 2)+ pow(y2 - y1, 2));
    printf("The distance between the two points is %.2f\n", distance);

    return distance;

}

double calculatePerimeter() {
    double diameter = calculateDistance();
    double perimeter = PI * diameter;
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    double difficultyScore = 3.0;
    return difficultyScore;
}

double calculateArea() {
    double distance = calculateDistance();
    double area = PI * pow(distance, 2);
    printf("The area is %.2f\n", area);

    double difficultyScore = 3.0;
    return difficultyScore;
    
}

double calculateWidth() {
    double width = calculateDistance();
    printf("The width of the city encompassed by your request is %.2f\n", width);

    double difficultyScore = 3.0;
    return difficultyScore;

}
double calculateHeight() {
    double height = calculateDistance();
    printf("The height of the city encompassed by your request is %.2f\n", height);
    
    double difficultyScore = 3.0;
    return difficultyScore;
}