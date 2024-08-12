/*
Question: Write a c program to find the volume of sphere

Note:: radius you have to read from the user through the scanf

sample input: radius=5;
sample output: Volume=523.60
*/

#include<stdio.h>
void main()
{
    const float pi = 3.14;
    int radius;
    float volume;
    printf("\nEnter a Radius: ");
    scanf("%d" ,&radius);
    volume = (1.333) * pi * radius * radius * radius;
    printf("\nVolume of Sphere is %.2f", volume);
}

/*
Enter a Radius: 5
Volume of Sphere is 523.20
*/