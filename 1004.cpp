#include <stdio.h>
struct student {
  char name[11];
  char number[11];
  int grade;
}; 
int main()
{
  
  int i,n;
  scanf("%d",&n);
  struct student a[n];
  struct student t;
  for(i = 0; i<n; i++)
  scanf("%s%s%d",a[i].name,a[i].number,&a[i].grade);
  for(i =1 ; i<n;i++)
    if(a[0].grade > a[i].grade )
    {  t = a[0]; a[0] = a[i]; a[i] = t;    }
  for(i = 0;  i<n; i++)
    if(a[n-1].grade < a[i].grade)
    {  t = a[n-1]; a[n-1] = a[i]; a[i] = t;    }
  printf("%s %s\n",a[n-1].name,a[n-1].number);
  printf("%s %s\n",a[0].name,a[0].number);
 } 
