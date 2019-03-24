#include<stdio.h>

int main() {
   char a[1000];
   int i,l=0;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       l++;
   }
   for(i=3;i<l;i++)
   {
      if(a[i]=='0'&&a[i+1]=='1')
      {
          printf("janavary");
          break;
      }
      else if(a[i]=='0'&&a[i+1]=='2')
      {
          printf("febravary");
          break;
      }
      else if(a[i]=='0'&&a[i+1]=='3')
      {
          printf("march");
          break;
      }
      else if(a[i]=='0'&&a[i+1]=='4')
      {
          printf("apirl");
          break;
      }
      else if(a[i]=='0'&&a[i+1]=='5')
      {
          printf("may");
          break;
      }
      else if(a[i]=='0'&&a[i+1]=='6')
      {
          printf("june");
          break;
      }
      else if(a[i]=='0'&&a[i+1]=='7')
      {
          printf("july");
          break;
      }
      else if(a[i]=='0'&&a[i+1]=='8')
      {
          printf("aujust");
          break;
      }
      else if(a[i]=='0'&&a[i+1]=='9')
      {
          printf("september");
          break;
      }
      else if(a[i]=='1'&&a[i+1]=='0')
      {
          printf("octobar");
          break;
      }
      else if(a[i]=='1'&&a[i+1]=='1')
      {
          printf("november");
          break;
      }
      else
      {
      printf("december");
      break;
      }
   }
}
