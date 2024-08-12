/*
Question: Write a c program that will find the Kinetic Energy
Note:: mass and velocity you have to read from the user through the scanf

Note:: formula: KE=(1/2)*mass*Velocity^2;
sample input: mass=5.5 Velocity=6.9
sample output: KE = 130.9275
*/

#include<stdio.h>
void main()
{
    float mass, velocity, KE;
    printf("\nEnter mass value: ");
    scanf("%f", &mass);
    printf("\nEnter velocity value: ");
    scanf("%f", &velocity);
    KE = (0.5) * mass * velocity * velocity;
    printf("\nKE = %.4f", KE);
}

/*
Enter mass value: 5.5

Enter velocity value: 6.9

KE = 130.9275
*/