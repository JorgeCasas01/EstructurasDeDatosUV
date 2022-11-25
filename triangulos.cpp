#include<stdio.h>
int main(void){
int a, b, c;
printf("\n Ingresa el primer numero ");
scanf(a);
setbuf ( stdin, NULL );
printf("\n Ingresa el segundo numero");
scanf(b);
setbuf ( stdin, NULL );
printf("\n Ingresa el tercer numero");
scanf(c);
setbuf ( stdin, NULL );
if(a==b&&a==c)
{
printf("\n has introducido un triangulo equilatero");
}
else if(a==b||a==c||b==c)
{
printf("\n has introducido un triangulo isosceles");
}
else if(a!=b&&a!=b&&b!=c)
{
printf("\n has introducido un triangulo escaleno");
}
setbuf ( stdin, NULL );
getchar();

}
