#include <stdio.h>	//for scanf, printf
#include <string.h> // For strcpy
#include <stdlib.h>
#include <math.h> //sqrt

int main (void) {

	double planar_x, planar_y, planar_z;	//proboli shmeioy panw sto epipedo
	double point_x, point_y, point_z;		//shmeio ektos epipedoy
	double orig_x, orig_y, orig_z;			//shmeio epipedoy
	double normal_dx, normal_dy, normal_dz;	//monadiaio epipedoy
	
	char line[20];
	int i;
	
	//Input and check of orig_x	
	while(1)	{
	printf("Dwste tin x coord toy gnwstoy simeioy toy epipedoy\n");
	fgets(line, 19, stdin);
	if (line == NULL)	{
		printf("EOF or I/O error, try again\n");
		continue;	
	} else if (sscanf(line, "%lf", &orig_x	) !=1){
		printf("Not valid input, need a floating point number\n");
		continue;
	}
	else {
		break;	
	}
	}
	
	//Input and check of orig_y	
	while(1)	{
	printf("Dwste tin y coord toy gnwstoy simeioy toy epipedoy\n");
	fgets(line, 19, stdin);
	if (line == NULL)	{
		printf("EOF or I/O error, try again\n");
		continue;	
	} else if (sscanf(line, "%lf", &orig_y	) !=1){
		printf("Not valid input, need a floating point number\n");
		continue;
	}
	else {
		break;	
	}
	}
	
	//Input and check of orig_z	
	while(1)	{
	printf("Dwste tin z coord toy gnwstoy simeioy toy epipedoy\n");
	fgets(line, 19, stdin);
	if (line == NULL)	{
		printf("EOF or I/O error, try again\n");
		continue;	
	} else if (sscanf(line, "%lf", &orig_z	) !=1){
		printf("Not valid input, need a floating point number\n");
		continue;
	}
	else {
		break;	
	}
	}
	
	//Input and check of normal_dx	
	while(1)	{
	printf("Dwste tin x coord toy monadiaioy toy epipedoy\n");
	fgets(line, 19, stdin);
	if (line == NULL)	{
		printf("EOF or I/O error, try again\n");
		continue;	
	} else if (sscanf(line, "%lf", &normal_dx	) !=1){
		printf("Not valid input, need a floating point number\n");
		continue;
	}
	else {
		break;	
	}
	}
	
	//Input and check of normal_dy	
	while(1)	{
	printf("Dwste tin y coord toy monadiaioy toy epipedoy\n");
	fgets(line, 19, stdin);
	if (line == NULL)	{
		printf("EOF or I/O error, try again\n");
		continue;	
	} else if (sscanf(line, "%lf", &normal_dy	) !=1){
		printf("Not valid input, need a floating point number\n");
		continue;
	}
	else {
		break;	
	}
	}
	
	//Input and check of normal_dz	
	while(1)	{
	printf("Dwste tin z coord toy monadiaioy toy epipedoy\n");
	fgets(line, 19, stdin);
	if (line == NULL)	{
		printf("EOF or I/O error, try again\n");
		continue;	
	} else if (sscanf(line, "%lf", &normal_dz	) !=1){
		printf("Not valid input, need a floating point number\n");
		continue;
	}
	else {
		break;	
	}
	}
	
	//Input and check of point_x	
	while(1)	{
	printf("Dwste tin x coord toy tyxaioy simeioy\n");
	fgets(line, 19, stdin);
	if (line == NULL)	{
		printf("EOF or I/O error, try again\n");
		continue;	
	} else if (sscanf(line, "%lf", &point_x	) !=1){
		printf("Not valid input, need a floating point number\n");
		continue;
	}
	else {
		break;	
	}
	}
	
	//Input and check of point_y	
	while(1)	{
	printf("Dwste tin y coord toy tyxaioy simeioy\n");
	fgets(line, 19, stdin);
	if (line == NULL)	{
		printf("EOF or I/O error, try again\n");
		continue;	
	} else if (sscanf(line, "%lf", &point_y	) !=1){
		printf("Not valid input, need a floating point number\n");
		continue;
	}
	else {
		break;	
	}
	}
	
	//Input and check of point_z	
	while(1)	{
	printf("Dwste tin z coord toy tyxaioy simeioy\n");
	fgets(line, 19, stdin);
	if (line == NULL)	{
		printf("EOF or I/O error, try again\n");
		continue;	
	} else if (sscanf(line, "%lf", &point_z	) !=1){
		printf("Not valid input, need a floating point number\n");
		continue;
	}
	else {
		break;	
	}
	}
	
	/*dianysma provevlimeno sto epipedo, fail
	
	//upologismos pinaka probolis, i3-ns*(ns)', ns monadiaio
	double a11,a12,a13,b21,b22,b23,c31,c32,c33;
	a11 = 1 - normal_dx * normal_dx;
	a12 = 0 - normal_dx * normal_dy;
	a13 = 0 - normal_dx * normal_dz;
	b21 = 0 - normal_dy * normal_dx;
	b22 = 1 - normal_dy * normal_dy;
	b23 = 0 - normal_dy * normal_dz;
	c31 = 0 - normal_dz * normal_dx;
	c32 = 0 - normal_dz * normal_dy;
	c33 = 1 - normal_dz * normal_dz;
	
	//upologismos probolis
	planar_x = point_x * a11 + point_y * a12 + point_z * a13;
	planar_y = point_x * b21 + point_y * b22 + point_z * b23;
	planar_z = point_x * c31 + point_y * c32 + point_z * c33;
	
	printf("Projection is: (%lf, %lf, %lf)\n", planar_x, planar_y, planar_z);
	*/
	
	//ProjP=P-<P-p,ns>*ns , P ektos epip, p epipedoy, ns monadiaio
	
	//<P-p, ns> upologismos tou eswterikoy
	double dotpr;
	dotpr = (point_x - orig_x) * normal_dx + (point_y - orig_y) * normal_dy + (point_z - orig_z) * normal_dz;
	
	//upologismos provolis
	planar_x = point_x - normal_dx * dotpr ;
	planar_y = point_y - normal_dy * dotpr ;
	planar_z = point_z - normal_dz * dotpr ;
	
	printf("Projection is: (%lf, %lf, %lf)\n", planar_x, planar_y, planar_z);
	
	
	
	
}
