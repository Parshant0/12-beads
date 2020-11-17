#include <stdio.h>
#include<conio.h>

char A [9][9]={{'2','2','2','2','2','2','2','2','2'},{'2','2','2','2','2','2','2','2','2'},{'2','2','1','1','1','1','1','2','2'},{'2','2','1','1','1','1','1','2','2'},{'2','2','1','1',' ','0','0','2','2'},{'2','2','0','0','0','0','0','2','2'},{'2','2','0','0','0','0','0','2','2'},{'2','2','2','2','2','2','2','2','2'},{'2','2','2','2','2','2','2','2','2'}};
  char choice;
  char choose;
  char ch;
  char *a,*b,*c,*d,*e,*f,*g,*h,*x;
  char *a1,*b1,*c1,*d1,*e1,*f1,*g1,*h1;
  char turn='1',turnN;
  int row,col,sum;
  int rowA,colA;
  int i,j;
  int score1=0,score0=0;
  
  void board(void);
  void choices(void);
  void chooses(void);
  int win(void);

 
  
  
  
main()
{
 
 while(win()<2)
  {
    board();
    choices();
    system("cls");
  }
  
  if(score1>score0)
  {
    printf("\n\n\t            GAME OVER");
      printf("\n\t    CONGRATULATIONS! Player [1] win");
  }
  else if(score1>score0)
  {
    printf("\n\n\t            GAME OVER");
      printf("\n\t    CONGRATULATIONS! Player [1] win");
  }
  
}





void board(void)
{    
   printf("\n\t   ,    ____         _____    _____   _____    ____     ____   ");
   printf("\n\t  /|   /    |       |     \\  |       /     \\  |    \\   /    \\  ");
   printf("\n\t / |        |       |     |  |       |     |  |     \\  |      ");
   printf("\n\t   |    ____|       |_____/  |___    |_____|  |     |  \\____      ");
   printf("\n\t   |   |            |     \\  |       |     |  |     |       \\    ");
   printf("\n\t   |   |            |     |  |       |     |  |     /       |   ");
   printf("\n\t   |   |____,       |_____/  |_____  |     |  |____/   \\____/  ");
 
     
 printf("\n\n     a %c _______ b %c  ______ c %c  ______ d %c  _______e %c   \n",A[2][2],A[2][3],A[2][4],A[2][5],A[2][6]);
    printf("       |\\          |          /|\\          |          /|\n");
    printf("       |  \\        |        /  |  \\        |        /  |\n");
    printf("       |    \\      |      /    |    \\      |      /    |\n");
    printf("       |      \\    |    /      |      \\    |    /      |\n");
    printf("       |        \\  |  /        |        \\  |  /        |\n");
    printf("       |          \\|/          |          \\|/          |\n");
 printf("\n     f %c ________g %c  ______ h %c  _______i %c  _______j %c  \n",A[3][2],A[3][3],A[3][4],A[3][5],A[3][6]);
    printf("       |          /|\\          |          /|\\          |\n");
    printf("       |        /  |  \\        |        /  |  \\        |\n");
    printf("       |      /    |    \\      |      /    |    \\      |\n");
    printf("       |    /      |      \\    |    /      |      \\    |\n");
    printf("       |  /        |        \\  |  /        |        \\  |\n");
    printf("       |/          |          \\|/          |          \\|\n");
 printf("\n      k %c ______ l %c  ______ m %c  _______n %c  _______o %c   \n",A[4][2],A[4][3],A[4][4],A[4][5],A[4][6]);
    printf("       |\\          |          /|\\          |          /|\n");
    printf("       |  \\        |        /  |  \\        |        /  |\n");
    printf("       |    \\      |      /    |    \\      |      /    |\n");
    printf("       |      \\    |    /      |      \\    |    /      |\n");
    printf("       |        \\  |  /        |        \\  |  /        |\n");
    printf("       |          \\|/          |          \\|/          |\n");
 printf("\n      p %c ______ q %c  _______r %c  _______s %c  ________t %c  \n",A[5][2],A[5][3],A[5][4],A[5][5],A[5][6]);
    printf("       |          /|\\          |          /|\\          |         SCOREBOARD   \n");
    printf("       |        /  |  \\        |        /  |  \\        |     Player 1   Player 0");
    printf("       |      /    |    \\      |      /    |    \\      |  \n");
    printf("       |    /      |      \\    |    /      |      \\    |       %d          %d\n",score1,score0);
    printf("       |  /        |        \\  |  /        |        \\  |     \n");
    printf("       |/ _______  |  _______ \\|/_______   | ________ \\|     \n");
 printf("\n      u %c        v %c         w %c         x %c         y %c  \n",A[6][2],A[6][3],A[6][4],A[6][5],A[6][6]);


 }
 
 
 
 
 void choices(void)
{
 printf("\n\nPlayer  turn [%c] : ",turn);
 scanf(" %c",&choice);
 
if(choice>='a'&&choice <='y'||choice>='A'&&choice <='Y') 
{
  
if(choice>='a'&&choice <='y')
 {
   choice=choice-32;
 }
 
 
 
 ch='A';
 for(i=2;i<=6;i++)
 { 
   for(j=2;j<=6;j++)
   {
     if(ch==choice)
     {
       row=i;col=j;
       ch++;
     }
     else
     {
       ch++;
     }
   }
 
 } 


    
     
 
     
     
     
     if(turn!=A[row][col])
     {
       printf("\n \t    OOPS! Not your bead. Try again  ");
       choices();
     }
     
     else
     {
	      if(turn=='1')
	     {
	       turnN='0';
	     }
	     if(turn=='0')
	     {
	       turnN='1';
	     }
 
		    //pointer
		    
		    
		    a=&A [row-1][col];
		    b=&A [row+1][col];
		    c=&A [row][col+1];
		    d=&A [row][col-1];
		    e=&A [row-1][col+1];
		    f=&A [row-1][col-1];
		    g=&A [row+1][col+1];
		    h=&A [row+1][col-1];
		    a1=&A [row-2][col];
		    b1=&A [row+2][col];
		    c1=&A [row][col+2];
		    d1=&A [row][col-2];
		    e1=&A [row-2][col+2];
		    f1=&A [row-2][col-2];
		    g1=&A [row+2][col+2];
		    h1=&A [row+2][col-2];
		    
		    
		    sum=row+col;
		    
		     if(sum%2==0)
		       {
		         if(*a==' '||*b==' '||*c==' '||*d==' '||*e==' '||*f==' '||*g==' '||*h==' ')
		         {
		               chooses();     
		         }
		         else
		         {
		          if(*a==turnN&&*a1==' '||*b==turnN&&*b1==' '||*d==turnN&&*d1==' '||*c==turnN&&*c1==' '||*g==turnN&&*g1==' '||*h==turnN&&*h1==' '||*f==turnN&&*f1==' '||*e==turnN&&*e1==' ')
		          {
		             chooses();
		          }
		          else
		          {
		            printf("\n\n \t    OPPS! you are not able to use [%c] Try again!",choice);
		            choices();
		          }
		         }
		       
		       }
		       
		       else if(sum%2!=0)
		       {
		         if(*a==' '||*b==' '||*c==' '||*d==' ')
		         {
		            chooses();
		         }
		         else
		         {
		           if(*a==turnN&&*a1==' '|| *b==turnN&&*b1==' '||*d==turnN&&*d1==' '||*c==turnN&&*c1==' ')
		          {
		              chooses();
		          }
		          else
		          {
		            printf("\n\n \t    OPPS! you are not able to use [%c] Try again!",choice);
		            choices();
		          }
		         }
		       }
		       
		      
        
            }


}
 else
	{ 
	printf("\n \t    invalid entry!");
	choices();
	}
}



  
void chooses(void)
{ 
  printf("\n\tChoose where you wanna place it : ");
   scanf(" %c",&choose);
  
  if(choose>='a'&&choose <='y'||choose>='A'&&choose <='Y')
  {
    if(choose>='a'&&choose <='y')
    {
      choose=choose-32;
    }


  ch='A';
    for(i=2;i <=6;i++)
    {
      for(j=2;j <=6;j++)
      {
        if(choose==ch)
        {
          rowA=i;colA=j;
          ch++;
        }
        else
        {
          ch++;
        }
      }
    }
    
   
    if(A [rowA][colA]!=' ')
    {
      printf("\n\t    invalid entry");
      chooses();
    }
    
    x=&A [rowA][colA];
     
     sum=rowA+colA;
     
    if(sum%2==0)
    {
      if(x==a||x==b||x==c||x==d||x==e||x==f||x==g||x==h)
      {
        A [row][col]=' ';
        A [rowA][colA]=turn;
        turn=turnN;
      }
      else
      {
        if(*a==turnN&&a1==x||*b==turnN&&b1==x||*d==turnN&&d1==x||*c==turnN&&c1==x||*g==turnN&&g1==x||*h==turnN&&h1==x||*f==turnN&&f1==x||*e==turnN&&e1==x)
         {
           A [row][col]=' ';
           A [rowA][colA]=turn;
           
           i=rowA-row;j=colA-col;
           i=i/2;j=j/2;
           A [row+i][col+j]=' ';
           if(turn=='1')
           {
             score1++;
           }
           else if(turn=='0')
           {
             score0++;
           }
           
           
           printf("\n\tBingo! You got a point. You get one more chance \n");
           system("pause");
           system("cls");
           board();
           choices();
         } 
         else
         {
           printf("\n\t    Invalid entry!");
           chooses();
         }
      }
    
    }
    
    else if(sum%2!=0)
    {
      if(x==a||x==b||x==c||x==d)
      {
        A [row][col]=' ';
        A [rowA][colA]=turn;
        turn=turnN;
      }
      else
      {
        if(*a==turnN&&a1==x||*b==turnN&&b1==x||*d==turnN&&d1==x||*c==turnN&&c1==x)
        {
          A [row][col]=' ';
           A [rowA][colA]=turn;
           
           i=rowA-row;j=colA-col;
           i=i/2;j=j/2;
           A [row+i][col+j]=' ';
           if(turn=='1')
           {
             score1++;
           }
           else if(turn=='0')
           {
             score0++;
           }
           
           
           printf("\n\tBingo! You got a point. You got one more chance \n");
           system("pause");
           system("cls");
           board();
           choices();
           
        }
        else
        {
          printf("\n\t    Invalid entry!");
           chooses();
        }
      
      } 
    }
  }
  
  else
  {
    printf("\n\t    invalid entry!");
     chooses();
  }

}





int win(void)
{
  if(score1==12)
  {
    return 3;
  }
  else if(score0==12)
  {
    return 3;
  }
  else
  {
    return 1;
  }
}


     
