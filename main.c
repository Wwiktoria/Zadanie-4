#include <stdio.h>

int main(void) {
  int a,b,c;
  printf("Wprowadź pierwszą liczbę: ");
  scanf("%d",&a);
  printf("Wprowadź drugą liczbę: ");
  scanf("%d",&b);
  printf("Wprowadź trzecią liczbę: ");
  scanf("%d",&c);
  if ((a>b)&&(a>c)){
    printf("Największą liczbą jest %d\n",a);}
  else if ((b>a)&&(b>c)){
    printf("Największą liczbą jest %d\n",b);
  }
  else{
    printf("Największą liczbą jest %d\n",c);
  }
  
  ;
  return 0;
}