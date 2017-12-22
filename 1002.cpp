#include <stdio.h>
int pinyin(int n);
int main()
{
  char a[100] ;
  int b[1000];
  int i=0,t;
  int sum = 0;
  scanf("%s",a);
  while( a[i]  !='\0')
  {
    sum += a[i]-'0'; 
    i++;
  }
  i=0;
  while( sum )
  {
    b[i] = sum%10;
    sum /=10; 
    i++;
  }
  for(t=i-1; t>=0; t-- )
  {
    if(t == i-1)
    pinyin(b[t]);
    else
    {
      printf(" ");
      pinyin(b[t]);
    }
  }

  
 } 
   int pinyin(int n)
  {
    switch(n)
    {
      case 1 :printf("yi"); break;
      case 2 :printf("er"); break;
      case 3 :printf("san"); break;
      case 4 :printf("si"); break;
      case 5 :printf("wu"); break;
      case 6 :printf("liu"); break;
      case 7 :printf("qi"); break;
      case 8 :printf("ba"); break;
      case 9 :printf("jiu"); break;
      case 0 :printf("ling"); break;
      default:break;
      
    }
  }
