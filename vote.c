//Voting machine
#include<stdio.h>
void home();
void res();
 int vote,c=0,bjp=0,con=0,rjd=0,nota=0;
int main()
{

 //printf("\n");
 printf("\t\tIndian Voting Machine\n\n");

 printf("Enter your vote to your favorite party:- \n1.BJP\n2.CONGRESS\n3.RJD\n4.Nota\n");

 home();

 return(0);
}

void home()
{

 printf("\nEnter vote:- ");
 scanf("%d",&vote);
 if(vote==1)
 {
     printf("Your vote goes to BJP");
    bjp=bjp+1;
     c=c+1;
     home();
 }
 else if(vote==2)
 {
     printf("Your vote goes to Congress");
     con=con+1;
      c=c+1;
      home();
 }
 else if(vote==3)
 {
     printf("Your vote goes to RJD");
      rjd=rjd+1;
      c=c+1;
      home();
 }
 else if(vote==4)
 {
     printf("Your vote goes to NOTA");
     nota=nota+1;
      c=c+1;
      home();
 }
 else if(vote==802152)
 {
     res();
 }

 else
 {
     printf("Enter correct vote.");
     home();
 }
}

void res()
{

     printf("The total votes are %d\nBJP=%d\nCongress=%d\nRJD=%d\nNota=%d",c,bjp,con,rjd,nota);
}
