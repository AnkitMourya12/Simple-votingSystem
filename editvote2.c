//simple voting system
#include<stdio.h>
int BJP=0,CONG=0,AAP=0,BSP=0;
void electionResult()
{
int Wonbyvote;

if(BJP>CONG && BJP>AAP && BJP>BSP)
{
	printf("\n*BJP won the election* :)\n\n");
	printf("\n total vote of BJP: %d\n",BJP);
	Wonbyvote=BJP-CONG;
	printf("BJP won by %d vote to CONG\n",Wonbyvote);
    Wonbyvote=BJP-AAP;
    printf("BJP won by %d vote to aap\n",Wonbyvote);
    Wonbyvote=BJP-BSP;
    printf("BJP won by %d vote to BSP\n",Wonbyvote);
    }
else if(CONG>AAP && CONG>BSP)
	{
	printf("\n*CONG won the election* :)\n\n");
	printf("\n total vote of CONG: %d\n",CONG);
	Wonbyvote=CONG-AAP;
	printf("CONG won by %d vote to AAP\n",Wonbyvote);
    Wonbyvote=CONG-BJP;
    printf("CONG won by %d vote to BJP\n",Wonbyvote);
    Wonbyvote=CONG-BSP;
    printf("CONG won by %d vote to BSP\n",Wonbyvote);
}

else if(AAP>BSP)
	{
	printf("\n*AAP won the election* :)\n\n");
	printf("\n total vote of AAP: %d\n",AAP);
	Wonbyvote=AAP-CONG;
	printf("AAPwon by %d vote to CONG\n",Wonbyvote);
    Wonbyvote=AAP-BSP;
    printf("AAP won by %d vote to BSP\n",Wonbyvote);
    Wonbyvote=AAP-BJP;
    printf("AAP won by %d vote to BJP\n",Wonbyvote);
}
else if(BJP==CONG && BJP==AAP && BJP==BSP)

{
printf("\n no one  won the election :(\n\n");
printf("                 BJP__CONG__AAP__BSP\n");
printf("  total vote      %d    %d     %d    %d \n",BJP,CONG,AAP,BSP);
}
else
{	
	printf("\n*BSP won the election* :)\n\n");
	printf("\n total vote of BSP: %d\n",BSP);
	Wonbyvote=BSP-CONG;
	printf("BSP won by %d vote to CONG\n",Wonbyvote);
    Wonbyvote=BSP-AAP;
    printf("BSP won by %d vote to aap\n",Wonbyvote);
    Wonbyvote=BSP-BJP;
    printf("BSP won by %d vote to BJP\n",Wonbyvote);
    
}

}

calculatvote(int vote)                       //calculate vote functon  formal
{
	switch(vote)
	{
	case 1: 
	     BJP+=1;
	     break;
    case 2:
	      CONG+=1;
	      break;
	case 3:
	      AAP+=1;
	      break;
	case 4:
	      BSP+=1;
	      break;
}
}                                           //end calculate vot function

int main()
{

 
  
  //start login process
   
  char ch;
 int count=0;
 while(1)
 {
 
  char username[40];
  
  char userpassword[40];
  printf("\n\n\t\t\t\t\t | LOGIN FOR ELECTION OF UTTER PRADESH |\n\n\n");
 

  
  printf("\nENTER THE USERNAME:->");
 
  gets(username);
 printf("\nAgain verify username:->");
   gets(username);
  
  
  printf("\nENTER THE USER PASSWORD:->");
  //scanf("%c",&userpassword);
  gets(userpassword);
  
  
  if(count==0 && strcmp(username,"ankit12")==0 && strcmp(userpassword,"123")==0)
  {
  	
	  printf("\nlogin successfully :)");
	  count++;
	 
	  
  }
 
 else if(strcmp(username,"akshat12")==0 && strcmp(userpassword,"1234")==0)
  {
  	printf("login successfully :)");
	  	//count++;
  }
   else if( strcmp(username,"ahtisham12")==0 && strcmp(userpassword,"12345")==0)
  {
  	printf("\nlogin successfully :)");
	  	
  }
  else if( strcmp(username,"pankaj12")==0 && strcmp(userpassword,"123456")==0)
  {
  	printf("\nlogin successfully :)");
	  	
  }
  else if( strcmp(username,"himanshu12")==0 && strcmp(userpassword,"1234567")==0)
  {
  	printf("\nlogin successfully :)");
	  	
  }
  else if( strcmp(username,"government12")==0 && strcmp(userpassword,"12345678")==0)
  {
  	printf("\nlogin successfully :)");
  	
	  	
  }
  
  else
  {
   printf("\n\tWronge username or password try again :(\n");
   printf("\n\t You already done the election: \n\n");
   //login(count);
    printf("\n\t LOGIN FOR ELECTION OF UTTER PRADESH   (y/n) => ");
			  fflush(stdin);
			  ch=getchar();
			  if(ch != 'y')
			 { 
			 
			break;
		
	
		}
		login(count);
	
}
}




 
printf("\n");
  	int choose;
    printf("\n*****************WELCOME TO THE SIMPLE VOTING SYSTEM ************************\n|");
  	printf("                           UTTER PRADESH ELECTION                          |\n");
  	printf("*****************************************************************************\n");
  	printf("|                  1. BJP              |                 2. CONG            |\n");
  	printf("*****************************************************************************\n");
  	printf("|                  3. AAP              |                 4. BSP             |\n");
  	printf("*****************************************************************************\n\n");
  	
	  do
  	{
  		printf("If choose BJP then press  1.\n");
  		printf("If choose CONG then press 2.\n");
  		printf("If choose AAP then press  3.\n");
  		printf("If choose BSP then press  4. \n");
  		printf("For result show then press 5\n");
  		scanf("%d",&choose);
  		
  	if(choose<5)
		{  
		
		 calculatvote(choose); 
		 printf("\t\t---------------THANK YOU FOR VOTING--------------\n"); 
		 printf("\n\t\tLOGIN FOR ELECTION OF UTTER PRADESH   (y/n) => ");
			  fflush(stdin);
			  ch=getchar();
			  if(ch != 'n')
			  
			                      //printf("next candidate login for election:");
				break; 
				                 //call the  function for voting calculation actual
	    
	    else if(ch=='n')
	   {
		// electionResult();
	    return -1;
	}
	}
	  
	  
	 
	    	else if(choose==5)
  	  {   
		 electionResult();  
		 printf("\n\n------------CONGRATULATIONS------------\n\n");
		 //break; 
		 return -1;        //call function in above the programe
	  }
	  else
	  
	  {
	  printf("\n");
	    printf("**************************************************\n");
	  	printf("|   please choose only given option try again    |\n");
	  	printf("**************************************************\n");
	  	
	  }
	  
	    
	    
	printf("\n");
	 } while(choose!=5);
	 

return 0;
}

//login function
int login( int count)
{ //int count=0;
 char ch;
	char username[100];
  
  char userpassword[100];
  printf("\n\n\t\t\t | LOGIN FOR ELECTION OF UTTER PRADESH |\n\n\n");
 

  
  printf("\nENTER THE USERNAME:->");
 
  gets(username);
  printf("\nclick here username:->");
  gets(username);
  
  
  printf("\nENTER THE USER PASSWORD:->");
  //scanf("%c",&userpassword);
  gets(userpassword);
  
  
  if(count==0 && strcmp(username,"ankit12")==0 && strcmp(userpassword,"123")==0)
  {
  	
	  printf("\nlogin successfully :)");
	  count++;
	  
  }
 else if(strcmp(username,"akshat12")==0 && strcmp(userpassword,"1234")==0)
  {
  	printf("\nlogin successfully :)");
	 // count++;	
  }
   else if( strcmp(username,"ahtisham12")==0 && strcmp(userpassword,"12345")==0)
  {
  	printf("\nlogin successfully :)");
	 // count++;	
  }
  else if(strcmp(username,"pankaj12")==0 && strcmp(userpassword,"123456")==0)
  {
  	printf("\nlogin successfully :)");
	  //count++;	
  }
  else if( strcmp(username,"himanshu12")==0 && strcmp(userpassword,"1234567")==0)
  {
  	printf("login successfully :)");
	  //count++;	
  }
  else if(strcmp(username,"government12")==0 && strcmp(userpassword,"12345678")==0)
  {
  	printf("\nlogin successfully :)");
	  //count++;	
  }
  else
  {
   printf("Wronge username or password try again :(");
   //return -1;
}


return 1;
}
