#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define MAX 10000

int bvalue(char i);
char invbvalue(int i);
int error(char num1[],int base);
char *bcnvrt(char NUM[],int b1,int b2);
char *equal(char Arr[],int l2,int l1);
char *dequal(char Arr[],int l2,int l1);
void add(char AUG[],char ADD[],int base);
void SUBTRACT(char *MINU,char *SUBTR,int base);
void multi(char *num1,char *num2,int base);
char *multiply(char [],char b[]);
void Division(char *dividnd,char *divisr,int base);
void AND(char Num1[],char Num2[],int b1,int b2);
void OR(char Num1[],char Num2[],int b1,int b2);
void NOT(char NUM[],int base);



main()
{
char num1[50],num2[50],A1[50],*newn1, *newn2,*prdct;
char check;
int i=0,k=1,b1,b2,option,ln1,ln2;
//clrscr();

 printf("\t\t\tWelcome Sir!\n");
 printf("\nYou are using a calculator which do calculations upto base 62\n");
 printf("\nSymbols notation followed in the calculator:\n\n");
 for(i=0;i<62;i++)
 {
 printf("%c = %d    ",invbvalue(i),i);
}printf("\n\n");
do{
 printf("\n\n\tSelect from one of The options given below:\n");
 printf("\n1 = AND\t\t2 = OR\n3 = NOT\t\t4 = BASE CONVERSION\n5 = ADD\t\t6 = SUBTRACT\n7 = MULTIPLY    8 = DIVISION\nEnter 0 to exit\n");
 scanf("%d",&option);
 
 switch(option)
 {
       case 0: 
            k=1;
            break;
            
       case 1:
       do{ 
          printf("Enter the 1st no.\n");
          fflush(stdin);
          gets(num1);
          fflush(stdin);
          printf("Enter the Base b1=");
          scanf("%d",&b1);
          k=error(num1,b1);
          if(k==0)
          {
                  printf("\nYou entered the no. with illegal values...\nplease enter again");
                  fflush(stdin);
          }
}while(k==0);
fflush(stdin);

       do{ 
          printf("Enter the 2nd no.\n");
          gets(num2);
          fflush(stdin);
          printf("Enter the Base b2=");
          scanf("%d",&b2);
          k=error(num2,b2);
          if(k==0)
          {
                  printf("You entered the no. with illegal values...\nplease enter again\n");
                  fflush(stdin);
          }
          }while(k==0);
          AND(num1,num2,b1,b2);
          k=0;
          break;
          
          
          
       case 2:
       do{ 
          printf("Enter the 1st no.\n");
          fflush(stdin);
          gets(num1);
          fflush(stdin);
          printf("Enter the Base b1=");
          scanf("%d",&b1);
          k=error(num1,b1);
          if(k==0)
          {
                  printf("\nYou entered the no. with illegal values...\nplease enter again");
                  fflush(stdin);
          }
}while(k==0);
fflush(stdin);

       do{ 
          printf("Enter the 2nd no.\n");
          gets(num2);
          fflush(stdin);
          printf("Enter the Base b2=");
          scanf("%d",&b2);
          k=error(num2,b2);
          if(k==0)
          {
                  printf("You entered the no. with illegal values...\nplease enter again\n");
                  fflush(stdin);
          }
          }while(k==0);
          OR(num1,num2,b1,b2);
          k=0;
          break;
            
       case 3:
       do{ 
          printf("Enter the  no.\n");
          fflush(stdin);
          gets(num1);
          fflush(stdin);
          printf("Enter its Base b=");
          scanf("%d",&b1);
          k=error(num1,b1);
          if(k==0)
          {
                  printf("\nYou entered the no. with illegal values...\nplease enter again\n");
                  fflush(stdin);
          }
          }while(k==0);
          NOT(num1,b1);
          k=0;
          break;

            
       case 4:
       do{ 
          printf("Enter the no.\n");
          fflush(stdin);
          gets(num1);
          fflush(stdin);
          printf("Enter the Base of no. b = ");
          scanf("%d",&b1);
          k=error(num1,b1);
          if(k==0)
          {
                  printf("\nYou entered the no. with illegal values...\nplease enter again\n");
                  fflush(stdin);
          }
          }while(k==0);

          printf("Enter the base in which it is converted = ");
          scanf("%d",&b2);
          printf("The converted no. is : ");
            newn2=bcnvrt(num1,b1,b2);
            fflush(stdin);
            fflush(stdin);
            puts(newn2);
            k=0;
            break;
            
            
       case 5:
       do{ 
          printf("Enter the Augend:\n");
          fflush(stdin);
          gets(num1);
          fflush(stdin);
          printf("Enter its Base = ");
          scanf("%d",&b1);
          k=error(num1,b1);
          if(k==0)
          {
                  printf("\nYou entered the no. with illegal values...\nplease enter again\n");
                  fflush(stdin);
          }
}while(k==0);
fflush(stdin);
       do{ 
          printf("Enter the Addend\n");
          gets(num2);
          fflush(stdin);
          printf("Enter its Base = ");
          scanf("%d",&b2);
          k=error(num2,b2);
          if(k==0)
          {
                  printf("You entered the no. with illegal values...\nplease enter again\n");
                  fflush(stdin);
          }
          }while(k==0);
          
            newn2=bcnvrt(num2,b2,b1);
            fflush(stdin);
            fflush(stdin);
            add(num1,newn2,b1);
            k=0;
            break;
       case 6:
       do{ 
          printf("Enter the Minuend:\n");
          fflush(stdin);
          gets(num1);
          fflush(stdin);
          printf("Enter its Base = ");
          scanf("%d",&b1);
          k=error(num1,b1);
          if(k==0)
          {
                  printf("\nYou entered the no. with illegal values...\nplease enter again\n");
                  fflush(stdin);
          }
}while(k==0);
fflush(stdin);
       do{ 
          printf("Enter the Subtrahend:\n");
          gets(num2);
          fflush(stdin);
          printf("Enter its Base = ");
          scanf("%d",&b2);
          k=error(num2,b2);
          if(k==0)
          {
                  printf("You entered the no. with illegal values...\nplease enter again\n");
                  fflush(stdin);
          }
          }while(k==0);
          
            newn2=bcnvrt(num2,b2,b1);
            SUBTRACT(num1,newn2,b1);
            k=0;
          break;
       case 7:
       do{ 
          printf("Enter the 1st no.\n");
          fflush(stdin);
          gets(num1);
          fflush(stdin);
          printf("Enter its Base = ");
          scanf("%d",&b1);
          k=error(num1,b1);
          if(k==0)
          {
                  printf("\nYou entered the no. with illegal values...\nplease enter again");
                  fflush(stdin);
          }
          }while(k==0);
          fflush(stdin);

       do{ 
          printf("Enter the 2nd no.\n");
          gets(num2);
          fflush(stdin);
          printf("Enter its Base = ");
          scanf("%d",&b2);
          k=error(num2,b2);
          if(k==0)
          {
                  printf("You entered the no. with illegal values...\nplease enter again\n");
                  fflush(stdin);
          }
          }while(k==0);

          newn2=bcnvrt(num2,b2,10);
          strcpy(A1,newn2);
          newn2=A1;
          printf("The product of the nos. in base %d is :",b1);
          newn1=bcnvrt(num1,b1,10);
          multi(newn1,newn2,b1);
          k=0;
          break;  
 
          case 8:
          do{ 
              printf("Enter the 1st no.\n");
              fflush(stdin);
              gets(num1);
              fflush(stdin);
              printf("Enter the Base b1=");
              scanf("%d",&b1);
              k=error(num1,b1);
              if(k==0)
              {
                  printf("\nYou entered the no. with illegal values...\nplease enter again");
                  fflush(stdin);
              }
              }while(k==0);
              fflush(stdin);

          do{ 
              printf("Enter the 2nd no.\n");
              gets(num2);
              fflush(stdin);
              printf("Enter the Base b2=");
              scanf("%d",&b2);
              k=error(num2,b2);
              if(k==0)
              {
                  printf("You entered the no. with illegal values...\nplease enter again\n");
                  fflush(stdin);
              }
              }while(k==0);
              newn2=bcnvrt(num2,b2,b1);
              Division(num1,newn2,b1);
              k=0;
              break;
               
       default:
               printf("\nYou have chosen the wrong option..\nplease try again\n");
               k=0;
               break;
            
} }while(k==0);
printf("\nThank you for using me.\n\t\tSee you next time..!\n\n\nThis program is made by Deepanshu bhatia as an assignment.\nGiven by- Prof. M. M. Sufyan Beg...\n");

 getch();
}

/*Gives the integer value of the symbol*/
int bvalue(char i)
{
    
    int j;
    if(i>47 && i<58)
         j=i-48;
    else if(i>64 && i<91)
         j=i-55;
    else if(i>96 && i<123)
        j=i-61;
    else if(i=='.')
        j=-1;
    else
    j=62;
 return(j);
}

/*Gives the character from the integer value*/
char invbvalue(int i)
{
    
    char j;
    if(i>=0 && i<10)
         j=i+48;
    else if(i>=10 && i<36)
         j=i+55;
    else if(i>=36 && i<62)
        j=i+61;
 return(j);
}
/*check value of entered bit with base*/
int error(char num1[],int base)
{
 int value,i=0;
 while(i<strlen(num1))
{
 value=bvalue(num1[i]);
 if(value>=base || base>62 ||base ==1)
 return(0);
 i++;
}
 if(i==strlen(num1))
 return(1);
}

/*convert base of b1 into b2*/
char *bcnvrt(char NUM[],int b1,int b2)
{
      static char WHL1[50],DEC1[20],WHL2[50],DEC2[20],NEW[50];
 int i,j=0;
if(b1==b2)
{
strrev(NUM);
for(i=0;i<strlen(NUM);i++)
 {
 if(NUM[i]=='.')
 {
 while(j+i<10)
 {
 WHL1[j]='0';
 j++;
 }
 WHL1[j]='\0';
 strrev(NUM);
 strcat(NUM,WHL1);
 return(NUM);
 }}
 strrev(NUM);
 strcat(NUM,".0000000000");
 return(NUM);
 }

 double intval=0,decval=0;
   i=0;j=0;
   while(NUM[i]!='.' && NUM[i]!='\n')
   {
    WHL1[i]=NUM[i];
    i++;
   }WHL1[i]='\0';
   
   
// if(NUM[i]=='\n')
//  DEC1[10]="000000";
   if(NUM[i]=='.')
   while(i<strlen(NUM))
   {
    i++;                  
    DEC1[j]=NUM[i];
    j++;
   }
   DEC1[i]='\0';

/*convert from b1 t0 10*/   
 for(i=0;i<strlen(WHL1);i++)
 {
   intval+=bvalue(WHL1[i])*pow(b1,(strlen(WHL1)-i-1));
 }

 for(i=0;i<j-1;i++)
 {
    decval+=(bvalue(DEC1[i]))/pow(b1,i+1);
 }
if(intval==0)
{
             strcpy(WHL2,WHL1);
             goto l;
}
 /*convert from base 10 to b2*/
 i=0;
 while(intval>0)
 {
   WHL2[i]=invbvalue((int)intval%(b2));
   intval=(int)((int)intval/b2);
   i++;
}fflush(stdin);
WHL2[i]='\0';
strrev(WHL2);
l:
j=0;
 while(j<10)
 {
   DEC2[j]=invbvalue((int)((decval*b2)));
   decval=(decval*b2)-((int)(decval*b2));
   
   j++;
 }DEC2[j]='\0';
// fflush(stdin);


strcpy(NEW,WHL2);
strcat(NEW,".");
strcat(NEW,DEC2);
 return(NEW);
}

/*Make the no. of bits equal in both arrays*/
char *equal(char Arr[],int l2,int l1)
{
     int j;
     static char zero[10];
     j=l1-l2-1;
     while(j>=0)
     {
     zero[j]='0';

     j--;
     }
     zero[l1-l2]='\0';
     strcpy(Arr,strcat(zero,Arr));
     return(Arr);
}

/*make decimal part equal*/  
char *dequal(char Arr[],int l2,int l1)
{
     int j;
     char zero[10];
     j=l1-l2-1;
     while(j>=0)
     {
     zero[j]='0';

     j--;
     }
     zero[l1-l2]='\0';
     strcpy(Arr,strcat(zero,Arr));
     return(Arr);
}


/*ADD two nos. in same base*/
void add(char *AUG,char *ADD,int base)
{
 int i1,i2,j1,j2,j=0,i=0,carry=0;
 static char Sum[30];
 for(i=0;i<strlen(AUG);i++)
 {
 if(bvalue(AUG[i])>=base)
 AUG[i]='0';
}
   puts(AUG);
for(i=0;i<strlen(ADD);i++)
 {
 if(bvalue(ADD[i])>=base)
 ADD[i]='0';
}puts(ADD);
i=0;
 for(i1=0;i1<strlen(AUG);i1++)
 {
   if(AUG[i1]=='.' || AUG[i1]=='\n')
   break;
 }
 for(i2=0;i2<strlen(ADD);i2++)
 {
   if(ADD[i2]=='.' || ADD[i2]=='\n')
   break;
 }

   if(i1<=i2)
   {
     AUG=equal(AUG,i1,i2);
 }
 if(i1>i2)
   {
     ADD=equal(ADD,i2,i1);
     }
 strrev(AUG);
 strrev(ADD);
 for(i1=0;i1<strlen(AUG);i1++)
 {
   if(AUG[i1]=='.' || AUG[i1]=='\n')
   break;
 }
 for(i2=0;i2<strlen(ADD);i2++)
 {
   if(ADD[i2]=='.' || ADD[i2]=='\n')
   break;
 }
 if(i1==strlen(AUG))
 {
  strrev(AUG);
  strcat(AUG,".");
  strrev(AUG);
  i1=0;
}

   if(i2==strlen(ADD))
 {
  strrev(ADD);
  strcat(ADD,".");
  strrev(ADD);
  i2=0;
}

   if(i1<=i2)
   {
     AUG=dequal(AUG,i1,i2);
 }
 if(i1>i2)
   {
     ADD=dequal(ADD,i2,i1);
     }

 carry=0;
 for(i=0;i<strlen(AUG);i++)
 {
 if(AUG[i]=='.')
 Sum[i]='.';
 else
 {
 Sum[i]=invbvalue((bvalue(AUG[i])+bvalue(ADD[i])+carry)%base);
 carry=(bvalue(AUG[i])+bvalue(ADD[i])+carry)/base;
 }}
 strrev(AUG);
 strrev(ADD);
 printf("Augend = %s\nAddend = %s\n",AUG,ADD);
 printf("%s + %s is given as: \n\tSum in base %d is:\n\t\t",AUG,ADD,base);
 Sum[i]=invbvalue(carry);
 strrev(Sum);
 puts(Sum);
}


         /*ANDing of two nos.*/
void AND(char Num1[],char Num2[],int b1,int b2)
{
 char new1[50],new2[50],*newn1,*newn2,and12[50];
 int i=0,ln1,ln2;
 newn1=bcnvrt(Num1,b1,2);
 strcpy(new1,newn1);
 newn2=bcnvrt(Num2,b2,2);
 printf("First number:\t");
 puts(new1);
 printf("\nSecond number:\t");
 for(i=0;i<(strlen(newn2)-1);i++)
 {
 new2[i]=*(newn2+i);
 printf("%c",new2[i]);
 }
 new2[i]='\0';
 ln2=i;
 strrev(new1);
 strrev(new2);
 ln1=strlen(new1);

 for(i=0;i<ln1 && i<ln2;i++)
 {
 if(new1[i]=='0' || new2[i]=='0')
 and12[i]='0';
 else if(new1[i]=='.')
 and12[i]='.';
 else if(new1[i]=='1' && new2[i]=='1')
 and12[i]='1';
 else
 and12[i]='0';
 }
 and12[i]='\0';
 strrev(and12);
 printf("\nThe no. after ANDing:\t");
 puts(and12);
}

          /*ORing of two nos.*/
void OR(char Num1[],char Num2[],int b1,int b2)
{
 char new1[50],new2[50],*newn1,*newn2,OR12[50];
 int i=0,ln1,ln2;
 newn1=bcnvrt(Num1,b1,2);
 strcpy(new1,newn1);
 newn2=bcnvrt(Num2,b2,2);
 printf("First number:\t");
 puts(new1);
 printf("\nSecond number:\t");
 for(i=0;i<(strlen(newn2)-1);i++)
 {
 new2[i]=*(newn2+i);
 printf("%c",new2[i]);
 }
 new2[i]='\0';
 ln2=i;
 strrev(new1);
 strrev(new2);
 ln1=strlen(new1);

 for(i=0;i<ln1 || i<ln2;i++)
 {
 if(new1[i]=='1' || new2[i]=='1')
 OR12[i]='1';
 else if(new1[i]=='.')
 OR12[i]='.';
 else
 OR12[i]='0';
 }
 OR12[i]='\0';
 strrev(OR12);
 printf("\nThe no. after ORing:\t");
 puts(OR12);
}

            /*NOT*/
void NOT(char NUM[],int base)
{
char *num_c;
int i=0;

num_c=bcnvrt(NUM,base,2);
printf("The no. in binary is represented as:\t");
fflush(stdin);
fflush(stdin);
puts(num_c);
strrev(num_c);
for(i=0;i<strlen(num_c);i++)
{
  if(*(num_c+i)!=48 && *(num_c+i)!='.')
  break;
}

 for(i=0;i<strlen(num_c);i++)
 {
  if(num_c[i]=='.' || num_c[i]=='1')
  break;
 }
while(i<strlen(num_c))
{
  if(*(num_c+i)==48)
  {
  *(num_c+i)=49;
}
  else if(*(num_c+i)=='.')
  *(num_c+i)='.';
  else
  *(num_c+i)=48;
  i++;

}
strrev(num_c);
printf("The no. after applying NOT :\t");
puts(num_c);

}

            /*SUBTRACTION*/
void SUBTRACT(char *MINU,char *SUBTRA,int base)
{
 int i1,i2,j1,j2,j=0,i=0,s_cmp=0;
 char DIFF[30];
 for(i=0;i<strlen(MINU);i++)
 {
 if(bvalue(MINU[i])>=base)
 MINU[i]='0';
}
for(i=0;i<strlen(SUBTRA);i++)
 {
 if(bvalue(SUBTRA[i])>=base)
 SUBTRA[i]='0';
}
i=0;
 for(i1=0;i1<strlen(MINU);i1++)
 {
   if(MINU[i1]=='.' || MINU[i1]=='\n')
   break;
 }
 for(i2=0;i2<strlen(SUBTRA);i2++)
 {
   if(SUBTRA[i2]=='.' || SUBTRA[i2]=='\n')
   break;
 }

   if(i1<=i2)
   {
     MINU=equal(MINU,i1,i2);
 }
 if(i1>i2)
   {
     SUBTRA=equal(SUBTRA,i2,i1);
     }
 strrev(MINU);
 strrev(SUBTRA);
 for(i1=0;i1<strlen(MINU);i1++)
 {
   if(MINU[i1]=='.' || MINU[i1]=='\n')
   break;
 }
 for(i2=0;i2<strlen(SUBTRA);i2++)
 {
   if(SUBTRA[i2]=='.' || SUBTRA[i2]=='\n')
   break;
 }
 if(i1==strlen(MINU))
 {
  strrev(MINU);
  strcat(MINU,".");
  strrev(MINU);
  i1=0;
}

   if(i2==strlen(SUBTRA))
 {
  strrev(SUBTRA);
  strcat(SUBTRA,".");
  strrev(SUBTRA);
  i2=0;
}

   if(i1<=i2)
   {
     MINU=dequal(MINU,i1,i2);
 }
 if(i1>i2)
   {
     SUBTRA=dequal(SUBTRA,i2,i1);
     }
     strrev(MINU);
     strrev(SUBTRA);
 printf("Minuend =    %s\nSubtrahend = %s\n",MINU,SUBTRA);
 printf("%s - %s is given as: \n\tDifference in base %d is:\n\t\t",MINU,SUBTRA,base);
s_cmp=strcmp(MINU,SUBTRA);
if(s_cmp==0)
{
puts("0.0000000000");
return;
}
strrev(MINU);
strrev(SUBTRA);


if(s_cmp>0)
{
for(i=0;i<strlen(MINU);i++)
{
  if(MINU[i]=='.')
  {
  DIFF[i]='.';
  i++;
  }
  if(MINU[i]>=SUBTRA[i])
  DIFF[i]=invbvalue(bvalue(MINU[i])-bvalue(SUBTRA[i]));
  else if(MINU[i]<SUBTRA[i] && MINU[i+1]!='0')
  {
     MINU[i]=invbvalue(base+bvalue(MINU[i]));
     MINU[i+1]=invbvalue(bvalue(MINU[i+1])-1);
     DIFF[i]=invbvalue(bvalue(MINU[i])-bvalue(SUBTRA[i]));
  }
  else if(MINU[i]<SUBTRA[i] && MINU[i+1]=='0')
  {
     j=1;
     MINU[i]=invbvalue(base+bvalue(MINU[i]));
     while(MINU[i+j]=='0')
     {
        MINU[i+j]=invbvalue(base-1);
        j++;
     }MINU[i+j]=invbvalue(bvalue(MINU[i])-1);
     DIFF[i]=invbvalue(bvalue(MINU[i])-bvalue(SUBTRA[i]));
  }

}
strrev(DIFF);
puts(DIFF);
return;
}
else if(s_cmp<0)
for(i=0;i<strlen(SUBTRA);i++)
{
  if(SUBTRA[i]=='.')
  {
  DIFF[i]='.';
  i++;
  }
  if(SUBTRA[i]>=MINU[i])
  DIFF[i]=invbvalue(bvalue(SUBTRA[i])-bvalue(MINU[i]));
  else if(SUBTRA[i]<MINU[i] && SUBTRA[i+1]!='0')
  {
     SUBTRA[i]=invbvalue(base+bvalue(SUBTRA[i]));
     SUBTRA[i+1]=invbvalue(bvalue(SUBTRA[i+1])-1);
     DIFF[i]=invbvalue(bvalue(SUBTRA[i])-bvalue(MINU[i]));
  }
  else if(SUBTRA[i]<MINU[i] && SUBTRA[i+1]=='0')
  {
     j=1;
     SUBTRA[i]=invbvalue(base+bvalue(SUBTRA[i]));
     while(SUBTRA[i+j]=='0')
     {
	SUBTRA[i+j]=invbvalue(base-1);
        j++;
     }SUBTRA[i+j]=invbvalue(bvalue(SUBTRA[i])-1);
     DIFF[i]=invbvalue(bvalue(SUBTRA[i])-bvalue(MINU[i]));
  }

}strcat(DIFF,"-");
strrev(DIFF);
puts(DIFF);
return;
}

             /*DIVISION*/
void Division(char *dividnd,char *divisr,int base)
{
     int ldr,i1,i2,j1,j2,j=0,i=0,s_cmp=0;
     long quotnt=0;
     char qarr[20],*q;
     ldr=strlen(divisr);
     for(i=0;i<ldr;i++)
     {
     if(divisr[i]!='0'  && divisr[i]!='.')
     break;
     }     if(i==ldr)
     {
     printf("the ans is = %c(infinity) \n",236);
     return;
     }
 for(i=0;i<strlen(dividnd);i++)
 {
 if(bvalue(dividnd[i])>=base)
 dividnd[i]='0';
}
for(i=0;i<strlen(divisr);i++)
 {
 if(bvalue(divisr[i])>=base)
 divisr[i]='0';
}
i=0;
 for(i1=0;i1<strlen(dividnd);i1++)
 {
   if(dividnd[i1]=='.' || dividnd[i1]=='\n')
   break;
 }
 for(i2=0;i2<strlen(divisr);i2++)
 {
   if(divisr[i2]=='.' || divisr[i2]=='\n')
   break;
 }

   if(i1<=i2)
   {
     dividnd=equal(dividnd,i1,i2);
 }
 if(i1>i2)
   {
     divisr=equal(divisr,i2,i1);
     }
 strrev(dividnd);
 strrev(divisr);
 for(i1=0;i1<strlen(dividnd);i1++)
 {
   if(dividnd[i1]=='.' || dividnd[i1]=='\n')
   break;
 }
 for(i2=0;i2<strlen(divisr);i2++)
 {
   if(divisr[i2]=='.' || divisr[i2]=='\n')
   break;
 }
 if(i1==strlen(dividnd))
 {
  strrev(dividnd);
  strcat(dividnd,".");
  strrev(dividnd);
  i1=0;
}

   if(i2==strlen(divisr))
 {
  strrev(divisr);
  strcat(divisr,".");
  strrev(divisr);
  i2=0;
}

   if(i1<=i2)
   {
     dividnd=dequal(dividnd,i1,i2);
 }
 if(i1>i2)
   {
     divisr=dequal(divisr,i2,i1);
     }
     strrev(dividnd);
     strrev(divisr);
     printf("\n\t\tIn base %d\nDividend = %s\nDivisor = %s\n",base,dividnd,divisr);
s_cmp=strcmp(dividnd,divisr);//revrsal is necessary for accurate string comparison
if(s_cmp<0){
strrev(dividnd);
printf("quotient =0.00 \nRemainder= %s",dividnd);
return;   
}
while(s_cmp>=0)
{


 strrev(dividnd);
 strrev(divisr);


 if(s_cmp>=0)
 {
  for(i=0;i<strlen(dividnd);i++)
  {
   if(dividnd[i]=='.')
   {
    dividnd[i]='.';
    i++;
   }
   if(dividnd[i]>=divisr[i])
    dividnd[i]=invbvalue(bvalue(dividnd[i])-bvalue(divisr[i]));
   else if(dividnd[i]<divisr[i] && dividnd[i+1]!='0')
   {
     dividnd[i]=invbvalue(base+bvalue(dividnd[i]));
     dividnd[i+1]=invbvalue(bvalue(dividnd[i+1])-1);
     dividnd[i]=invbvalue(bvalue(dividnd[i])-bvalue(divisr[i]));
   }
   else if(dividnd[i]<divisr[i] && dividnd[i+1]=='0')
   {
     j=1;
     dividnd[i]=invbvalue(base+bvalue(dividnd[i]));
     while(dividnd[i+j]=='0' && (i+j)<strlen(divisr))
     {
    	dividnd[i+j]=invbvalue(base-1);
        j++;
     }
     if((i+j)<strlen(divisr))
     dividnd[i+j]=invbvalue(bvalue(dividnd[i+j])-1);
     else
     dividnd[i+j]='0';
     dividnd[i]=invbvalue(bvalue(dividnd[i])-bvalue(divisr[i]));
   }
  }}
  strrev(dividnd);
  strrev(divisr);
  
   s_cmp=strcmp(dividnd,divisr);//revrsal is necessary for accurate string comparison
  quotnt++;
}
for(i=0;quotnt>0;i++)
{
qarr[i]=invbvalue(quotnt%10);
quotnt/=10;
}qarr[i]='\0';
strrev(qarr);
q=bcnvrt(qarr,10,base);
printf("quotient = %s in base %d\nRemainder= %s ",q,base,dividnd);
return;
}

char * multiply(char a[],char b[]){
    static char mul[MAX];
    char c[MAX];
    char temp[MAX];
    int la,lb;
    int i,j,k=0,x=0,y;
    long int r=0;
    long sum = 0;
    la=strlen(a)-1;
        lb=strlen(b)-1;
   
        for(i=0;i<=la;i++){
                a[i] = a[i] - 48;
        }

        for(i=0;i<=lb;i++){
                b[i] = b[i] - 48;
        }

    for(i=lb;i>=0;i--){
         r=0;
         for(j=la;j>=0;j--){
             temp[k++] = (b[i]*a[j] + r)%10;
             r = (b[i]*a[j]+r)/10;
         }
         temp[k++] = r;
         x++;
         for(y = 0;y<x;y++){
             temp[k++] = 0;
         }
    }
   
    k=0;
    r=0;
    for(i=0;i<la+lb+2;i++){
         sum =0;
         y=0;
         for(j=1;j<=lb+1;j++){
             if(i <= la+j){
                 sum = sum + temp[y+i];
             }
             y += j + la + 1;
         }
         c[k++] = (sum+r) %10;
         r = (sum+r)/10;
    }
    c[k] = r;
    j=0;
    for(i=k-1;i>=0;i--){
         mul[j++]=c[i] + 48;
    }
    mul[j]='\0';
    return mul;
}
void multi(char *num1,char *num2,int base)
{
     int i,j,k,dec,ln1,ln2;
     char *c,prdct[MAX],n1[50],n2[50];
     ln1=strlen(num1);
     ln2=strlen(num2);
     k=0;
     for(j=0;j<ln1;j++)
     {
     if(num1[j]!='.'){
     n1[k]=num1[j];k++;}                  
     }n1[k]='\0';k=0;
     for(j=0;j<ln2;j++)
     {
     if(num2[j]!='.'){
     n2[k]=num2[j];k++; }                
     }n2[k]='\0';

;
     c=multiply(n1,n2);
     ln1=strlen(c);
     for(i=0;(ln1-i)>20;i++)
     {
     prdct[i]=c[i];                       
     }
     prdct[i]='.';
     for(j=1;j<=10;j++)
     {
     prdct[j+i]=c[j+i-1];
     }
     prdct[i+j]='\0';
     c=bcnvrt(prdct,10,base);
     puts(c);
     return;
}
