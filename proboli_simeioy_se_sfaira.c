#include <stdio.h>	//for scanf, printf
#include <string.h> // For strcpy
#include <stdlib.h>
#include <math.h> //sqrt


int main (void) {

//	int rand1 = 12, rand2 = 15;
//	printf("First var is %d\n and second var is %d\n", rand1, rand2);

	double center_x, center_y, center_z;	//kentro sfairas
	double radius;							//aktina sfairas
	double point_x, point_y, point_z;		//shmeio ektos sfairas
	double sphere_x, sphere_y, sphere_z;	//provoli panw sth sfaira
		
	char line[20];
	int i;
	
	//Input and check of center_x	
	while(1)	{
	printf("Dwste tin x coord toy kentroy ths sfairas\n");
	fgets(line, 19, stdin);
	if (line == NULL)	{
		printf("EOF or I/O error, try again\n");
		continue;	
	} else if (sscanf(line, "%lf", &center_x) !=1){
		printf("Not valid input, need a floating point number\n");
		continue;
	}
	else {
		break;	
	}
	}
	
	//Input and check of center_y
	while(1)	{
	printf("Dwste tin y coord toy kentroy ths sfairas\n");
	fgets(line, 19, stdin);
	if (line == NULL)	{
		printf("EOF or I/O error, try again\n");
		continue;	
	} else if (sscanf(line, "%lf", &center_y) !=1){
		printf("Not valid input, need a floating point number\n");
		continue;
	}
	else {
		break;	
	}
	}
	
	//Input and check of center_z	
	while(1)	{
	printf("Dwste tin z coord toy kentroy ths sfairas\n");
	fgets(line, 19, stdin);
	if (line == NULL)	{
		printf("EOF or I/O error, try again\n");
		continue;	
	} else if (sscanf(line, "%lf", &center_z) !=1){
		printf("Not valid input, need a floating point number\n");
		continue;
	}
	else {
		break;	
	}
	}
	
	//Input and check of sphere radius	
	while(1)	{
	printf("Dwste tin aktina ths sfairas\n");
	fgets(line, 19, stdin);
	if (line == NULL)	{
		printf("EOF or I/O error, try again\n");
		continue;	
	} else if (sscanf(line, "%lf", &radius) !=1){
		printf("Not valid input, need a floating point number\n");
		continue;
	}
	else {
		break;	
	}
	}
	
	//Input and check of point_x	
	while(1)	{
	printf("Dwste tin x coord toy tuxaiou simeiou\n");
	fgets(line, 19, stdin);
	if (line == NULL)	{
		printf("EOF or I/O error, try again\n");
		continue;	
	} else if (sscanf(line, "%lf", &point_x) !=1){
		printf("Not valid input, need a floating point number\n");
		continue;
	}
	else {
		break;	
	}
	}
	
	//Input and check of point_y	
	while(1)	{
	printf("Dwste tin y coord toy tuxaiou simeiou\n");
	fgets(line, 19, stdin);
	if (line == NULL)	{
		printf("EOF or I/O error, try again\n");
		continue;	
	} else if (sscanf(line, "%lf", &point_y) !=1){
		printf("Not valid input, need a floating point number\n");
		continue;
	}
	else {
		break;	
	}
	}
	
	//Input and check of point_z	
	while(1)	{
	printf("Dwste tin z coord toy tuxaiou simeiou\n");
	fgets(line, 19, stdin);
	if (line == NULL)	{
		printf("EOF or I/O error, try again\n");
		continue;	
	} else if (sscanf(line, "%lf", &point_z) !=1){
		printf("Not valid input, need a floating point number\n");
		continue;
	}
	else {
		break;	
	}
	}
	
	//upologismos eutheias kentroy-simeioy, exiswsi ti sfaira, lysi 2vathmias pros sphere_y
	double discr, root1_y, root2_y,root1_x, root2_x,root1_z, root2_z, a, b, c;
	a = 1;
	b = -2 * center_y;
	c = (pow(center_y, 2)) - ((pow(radius, 2))* (pow(center_y-point_y, 2))) / ((pow(center_x-point_x, 2)) + (pow(center_z-point_z, 2)) + (pow(center_y-point_y, 2)));
	discr = sqrt (b*b - 4 * a * c);
	root1_y = (-b + discr) / (2 * a);
	root2_y = (-b - discr) / (2 * a);
	
	//upologismos eutheias kentroy-simeioy, exiswsi ti sfaira, lysi 2vathmias pros sphere_x
	a = 1;
	b = -2 * center_x;
	c = (pow(center_x, 2)) - ((pow(radius, 2))* (pow(center_x-point_x, 2))) / ((pow(center_x-point_x, 2)) + (pow(center_z-point_z, 2)) + (pow(center_y-point_y, 2)));
	discr = sqrt (b*b - 4 * a * c);
	root1_x = (-b + discr) / (2 * a);
	root2_x = (-b - discr) / (2 * a);
	
	//upologismos eutheias kentroy-simeioy, exiswsi ti sfaira, lysi 2vathmias pros sphere_z
	a = 1;
	b = -2 * center_z;
	c = (pow(center_z, 2)) - ((pow(radius, 2))* (pow(center_z-point_z, 2))) / ((pow(center_x-point_x, 2)) + (pow(center_z-point_z, 2)) + (pow(center_y-point_y, 2)));
	discr = sqrt (b*b - 4 * a * c);
	root1_z = (-b + discr) / (2 * a);
	root2_z = (-b - discr) / (2 * a);
	
	//epilogi simeioy, mikroteri eykleidia apostasi apo point
	double distance1, distance2;
	distance1 = sqrt ((pow(root1_x - point_x, 2))+(pow(root1_y - point_y, 2))+(pow (root1_z - point_z, 2)));
	distance2 = sqrt ((pow(root2_x - point_x, 2))+(pow(root2_y - point_y, 2))+(pow (root2_z - point_z, 2)));
	
	if (distance1 < distance2)
	{
		sphere_x = root1_x;
		sphere_y = root1_y;
		sphere_z = root1_z;
	
	}else {
	
		sphere_x = root2_x;
		sphere_y = root2_y;
		sphere_z = root2_z;
	
	}
	
	printf("Center Coords are: (%lf, %lf, %lf)\n", center_x, center_y, center_z);
	printf("Sphere radius is: %lf\n", radius);
	printf("Random point coords are: (%lf, %lf, %lf)\n", point_x, point_y, point_z);
	
	printf("First point: (%lf, %lf, %lf)\n", root1_x, root1_y, root1_z);
	printf("Second point: (%lf, %lf, %lf)\n", root2_x, root2_y, root2_z);
	printf("Random Point Coordinates: (%lf, %lf, %lf)", sphere_x, sphere_y, sphere_z);
	

}


