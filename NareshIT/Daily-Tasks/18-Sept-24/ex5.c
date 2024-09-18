/*
Que 5 : Write a C program to reverse all the 
vowels present in a given string. Return the
newly created string or modified string .
--------		
Sample input : Aeroplane

Sample output  : earoplenA
*/

#include<stdio.h>
void main(){
    int i, j, length=0;
    char temp, s[100], v[100] = {0};
    printf("\nEnter a String: "); scanf("%[^\n]", s);
    for(i=0; s[i] != '\0'; i++){ length++; }
    j=length-1;
    for(i=0; i<j; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            for(;j>i; j--){
                if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U'){
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                    j--; break;
                }
            }
        }
    }        
    printf("\nString = ");
    for(i=0; i<length; i++){ printf("%c", s[i]); }
}

/*
Enter a String: Aeroplane

String = enraploeA
*/