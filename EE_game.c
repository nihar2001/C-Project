#include<stdio.h>
#include<stdlib.h>
int funct1();
int funct2();
int funct3();
int funct4();
int funct5();
int main()
{    int c,n,y;
    char z;
  printf("-------------------------------START GAME-------------------------------\n");

       for (c = 1; ; c++) {
    n = rand() % 10;
    if(n>5)
    n=n-5;

    switch(n)
    {
        case 1:
                y=funct1();
              printf("%d\n",y);
              break;
        case 2://funct2();
                printf("HELLO1");
              break;
        case 3://funct3();
              printf("HELLO2");
              break;
        case 4://funct4();
              printf("HELLO3");
              break;
        case 5://funct5();
               printf("HELLO4");
              break;

  }
  printf("DO YOU WANT TO PLAY NEW GAME \nY->YES   N->NO\n");
  char f;
  scanf("%c\n",&f);
  if(f=='N')
  break;
  else if(f=='Y')
  continue;

  }
}


int funct1(){
    int c=0;
    char c1,c2;
    printf("Q1. Which of these success mantras are correct in analytical approach to logic building?\n");
    printf("a) Laughter  b) Marketing\nc) confidence   d) Competition\n\n");  // a c
    scanf("%c %c",&c1,&c2);
    if(c1!='a' || c2!='c')
    {
        return c;
    }
    else
    {
        c=10000;
    }
    printf("Q2. What are the top skill required in a CSE job?\n");
    printf("a) Laughter  b) Mathematics\nc) Programming languages   d) Competition\n\n"); // b c
    fflush(stdin);
     scanf("%c %c",&c1,&c2);
        if(c1!='b' || c2!='c')
    {
        return c;
    }
    else
    {
        c=c+c*10;
    }
    printf("Q3. What are the steps to improve analytical thinking?\n");
    printf("a) Ask questions  b) Marketing\nc) troubleshooting   d) be observant\n\n");  //a d
        fflush(stdin);
        scanf("%c %c",&c1,&c2);

        if(c1!='a' || c2!='d')
    {
        return c;
    }
    else
    {
        c=c+c*10;
    }
    printf("Q4. What are some of the most essential analytical skills?\n");
    printf("a) Management  b) Data analysis\nc) Research   d) be observant\n\n"); // b c
          fflush(stdin);
         scanf("%c %c",&c1,&c2);
        if(c1!='b' || c2!='c')
    {
        return c;
    }
    else
    {
        c=c+c*10;
    }
    printf("Q5. Analytical skills are critical at work For?\n");
    printf("a) Ask questions  b) Bird eye view\nc) Identifying Trends   d) Solving complex Promblems\n\n");  //c d
         fflush(stdin);
         scanf("%c %c",&c1,&c2);
        if(c1!='d' || c2!='c')
    {
        return c;
    }
    else
    {
        c=c+c*10;
    }
    printf("Q6. Which of these analytical approach steps are correct?\n");
    printf("a) bird-eye view  b) Marketing\nc) Coverting Larger problem into smaller problems   d) Paitence\n\n"); //a c
         fflush(stdin);
        scanf("%c %c",&c1,&c2);
        if(c1!='a' || c2!='c')
    {
        return c;
    }
    else
    {
        c=c+c*10;
    }
    printf("Q7. what are common analytical tools?\n");
    printf("a) Research  b) Brainstorming\nc) fishbone Diagram   d) be observant\n\n");  // b c
          fflush(stdin);
         scanf("%c %c",&c1,&c2);
        if(c1!='b' || c2!='c')
    {
        return c;
    }
    else
    {
        c=c+c*10;
    }
    return c;

}
