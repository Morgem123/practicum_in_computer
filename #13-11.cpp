#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
 int i,j,dex=-1,top1=-1,top2=-1,yn[2000]={0};
 char ch[20]={'\0'},chch1[2000][20]={'\0'},chch2[2000][20]={'\0'};
 
 FILE *data1=fopen("t10.txt","r");
 FILE *data2=fopen("t11.txt","r");
 
 while(fscanf(data2,"%s",ch)==1)
 {
  if(ch[strlen(ch)-1]=='.'||ch[strlen(ch)-1]==','||ch[strlen(ch)-1]==';')
   ch[strlen(ch)-1]='\0';
  tolower(ch[0]);
  top2++;
  strcpy(chch2[top2],ch);
  
 }
 
 while(fscanf(data1,"%s",ch)==1)
 {
  if(ch[strlen(ch)-1]=='.'||ch[strlen(ch)-1]==','||ch[strlen(ch)-1]==';')
   ch[strlen(ch)-1]='\0';
  tolower(ch[0]);
  top1++;
  strcpy(chch1[top1],ch);  
 }
 
  int v,r,k,c,max;
  for(j=0;j<=top2;j++)
  {

   for(i=0;i<=top1;i++)
   {
    if((!strcmp(chch2[j],chch1[i]))&&(!strcmp(chch2[j+1],chch1[i+1]))&&(!strcmp(chch2[j+2],chch1[i+2]))
     &&(!strcmp(chch2[j+3],chch1[i+3]))&&(!strcmp(chch2[j+4],chch1[i+4]))&&(!strcmp(chch2[j+5],chch1[i+5]))
     &&(!strcmp(chch2[j+6],chch1[i+6])))
    {
      for(v=i,r=j;!strcmp(chch2[r],chch1[v]);v++,r++)
      {
       yn[v]=1;
      }
    }
   }
   
  }
  int count=0;
  for(i=0;i<=top1;i++)
  {
   if(yn[i]==1)count++;
  } 
  printf("相似度百分比:%d/%d=%.2f\%",count,top1+1,(float)count/(top1+1)*100); 
  
 /* 
 for(i=0;i<=top1;i+=max)
 {
  max=1;
  for(j=0;j<=top2;j++)
  {
   if(!strcmp(chch2[j],chch1[i])&&!strcmp(chch2[j+1],chch1[i+1]&&!strcmp(chch2[j+2],chch1[i+2]))
    &&!strcmp(chch2[j+3],chch1[i+3])&&!strcmp(chch2[j+4],chch1[i+4]&&!strcmp(chch2[j+5],chch1[i+5])
    &&!strcmp(chch2[j+6],chch1[i+6])))
   {
    for(v=i,r=j,c=1;strcmp(chch2[r],chch1[v])==0;v++,r++,c++)
    {
     yn[v]=c;
    }
    if(c>max)max=c;
   }
   
  }
 } 
 for(i=0;i<=top1;i++)
 {
  if(yn[i]!=0&&yn[i+1]==0)
  {
   for(j=0;j<=top2;j++)
   {
    
   if(!strcmp(chch2[j],chch1[i+1])&&!strcmp(chch2[j+1],chch1[i+1]&&!strcmp(chch2[j+2],chch1[i+2]))
    &&!strcmp(chch2[j+3],chch1[i+3])&&!strcmp(chch2[j+4],chch1[i+4]&&!strcmp(chch2[j+5],chch1[i+5])
    &&!strcmp(chch2[j+6],chch1[i+6])))
   {
    for(v=i,r=j,c=1;strcmp(chch2[r],chch1[v])==0;v++,r++,c++)
    {
     yn[v]=c;
    }
    if(c>max)max=c;
   }
   
   }
  }
 }
 
  for(k=j;strcmp(chch2[k],chch1[i]))
   if(!strcmp(chch2[j],chch1[i])&&!strcmp(chch2[j+1],chch1[i+1]&&!strcmp(chch2[j+2],chch1[i+2]))
    &&!strcmp(chch2[j+3],chch1[i+3])&&!strcmp(chch2[j+4],chch1[i+4]&&!strcmp(chch2[j+5],chch1[i+5])
    &&!strcmp(chch2[j+6],chch1[i+6])))
    {
     yn[i]=1;yn[i+1]=1;yn[i+2]=1;yn[i+3]=1;yn[i+4]=1;yn[i+5]=1;yn[i+6]=1;
     i+=7;
     break;
    }
    for(i=0;i<=;i++)
    */ 
 

 fclose(data1);
 fclose(data2);
 system("pause");
 return 0;
}
