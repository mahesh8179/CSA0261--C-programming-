#include<stdio.h>
struct shape{
   float line;
   float radius;
   float areacircle;
   float areacylinder;
   float volumecylinder;
};
int main(){
   struct shape s;
   float pi = 3.14; 
   printf("Enter a length of line or height : ");
   scanf("%f",&s.line);
   printf("Enter a length of radius : ");
   scanf("%f",&s.radius);
   s.areacircle = (float)pi*s.radius*s.radius;
   s.areacylinder = (float)2*pi*s.radius*s.line + 2 * s.areacircle;
   s.volumecylinder = s.areacircle*s.line;
   return 0;
}

