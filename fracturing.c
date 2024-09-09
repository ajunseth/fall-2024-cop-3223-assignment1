//************************************************
// fracturing.c
// Andrew Unseth ID:4699383
// 9/6/2024
// COP 3223, Professor Parra
// This prgram calculates width, height, distance, area, and perimeter for a city 
//************************************************
// libraries 
#include <stdio.h> 
#include <math.h>


// PI definition
#define PI 3.14159

// Function Declerations
double askForUserInput();
double calculateDistance();
void calculatePerimeter(double distance); 
void calculateArea(double distance);
void calculateWidth(); 
void calculateHeight();

//main
int main() {
  double distance;

  distance = calculateDistance(); 

// call functions
  calculatePerimeter(distance);
  calculateArea(distance);
  calculateWidth();
  calculateHeight();
 
return 0;
}

//function for user input
double askForUserInput() {
  double value; // variable to store user's input
printf("enter a value: ");
scanf("%lf", &value); // read input value
return value; 
}

//function for calculating distance between two points
double calculateDistance() {
  double x1, y1, x2, y2; // coordinates
double distance; // variable for distance

// input coordinates
x1 = askForUserInput();
y1 = askForUserInput();
x2 = askForUserInput (); 
y2 = askForUserInput (); 

// disctance calculation formula
distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

//Print distance
printf("point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
printf("point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
printf("The distance between the two points is %.2lf\n", distance);

return distance; // Return for calculated distance
}

// perimeter calculation formula
void calculatePerimeter(double distance) {
  double perimeter; // variable for perimeter

perimeter = 2 * PI * distance; // calculate perimeter

//print perimeter
printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
}

// area calculation nformula
void calculateArea(double distance) {
  double area; // area variable

area = PI * distance * distance; // calculate area

// print area
printf("The area of the city encompassed by your request is %.2lf\n", area);
}

// wicth calculation function
void calculateWidth() {
  double x1, x2, width; // coordinates for width variable

// x-coordinates
x1 = askForUserInput();
x2 = askForUserInput();

width = fabs(x2 - x1); // calculate width

// print width
printf("Point #1 entered: x1 = %.2lf\n", x1);
printf("Point #2 entered: x2 = %.2lf\n", x2);
printf("The width of the city encompasses by your request is %.2lf\n", width);
}

// height calculation formula 
void calculateHeight() { 
  double y1, y2, height; // height variables

// y-coordinates
y1 = askForUserInput();
y2 = askForUserInput(); 

height= fabs(y2 - y1); // height calculation

// print height
printf("Point #1 entered: y1 = %.2lf\n", y1);
printf("Point #2 entered: y2 = %.2lf\n", y2);
printf("The height of the city encompassed by your request is %.2lf\n", height);
}
