/*********************************************************************************************************
 * Pac1/Pec1 code 
 * *******************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// define enumerated types for the use of the plane
typedef enum {
  COMMERCIAL, PRIVATE, GOVERNMENTAL, MILITAR, EXPERIMENTAL, OTHERS 
} tPlaneUtility;

typedef enum {FALSE, TRUE} boolean;


int main(int argc, char **argv)
{
    int id; 
	char model; 
	int  year; 
	tPlaneUtility utility; 
	float weight; 
	float maxSpeed; 
	int maxHeight; 
	int  motors; 
	int  seats; 
    boolean isActive; 	   
    
    //read information
    printf("Enter the plane identifier (an integer) >> ");
    scanf("%d", &id);
    getchar();
    printf("Enter the plane model >> ");
    scanf("%c", &model);
    printf("Enter the plane fabrication year >> ");
    scanf("%d", &year);
    printf("Enter the plane weight >> ");
    scanf("%f", &weight);
    printf("Enter the plane max speed >> ");
    scanf("%f", &maxSpeed);
    printf("Enter the plane max height >> ");
    scanf("%d", &maxHeight);
    printf("Enter the plane number of engines >>");
    scanf("%d", &motors);
    printf("Enter the number of seats >> ");
    scanf("%d", &seats);


    //print information
    printf("Plane Id: %d\n", id);
    printf("Fabrication year: %d\n", year);
    printf("Model: %c\n", model);
    printf("Weight: %.2f\n", weight);
    printf("Max Speed: %.2f\n", maxSpeed);
    printf("Max Height: %d\n", maxHeight);
    printf("Number of engines: %d\n", motors);
    printf("Number of seats: %d\n", seats);
    return 0;
}
