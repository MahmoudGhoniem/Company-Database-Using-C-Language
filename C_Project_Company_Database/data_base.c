/***************************************************
 *  Module : data_base.c
 *
 *  Details: creat database for a company employees that contain info about all
 *  		 employees in the firm include name , age ,degree of experience
 *  		 ,contract duration , rating of that employee and his/her id .
 *
 *  Author: Mahmoud Ghoniem
 ***************************************************/
#include "data_base.h"

employee_info * head = NULL ;


/*Function to add new employee info to your database*/

void add_new_employee (void)
{
	employee_info * link = (employee_info*) malloc (sizeof (employee_info)) ;  /*creat node contain data info of employee & address of the next node*/


	printf("enter employee name : ");
	fflush(stdout);
	scanf("%99s",link->name);

	printf("enter employee age :  ");
	fflush(stdout);
	scanf("%d",&link->age) ;


	printf("enter employee experience  : ");
	fflush(stdout);
	scanf("%99s",link->degree);


	printf("enter employee id : ");
	fflush(stdout);
	scanf("%d",&link->id) ;



	printf("enter employee start date : \n");
	printf ("month:    ");
	fflush(stdout);
	scanf("%d",&(link->start_date.month)) ;


	printf ("year :    ");
	fflush(stdout);
	scanf("%d" ,&(link->start_date.year)) ;


	printf("enter employee end date : \n");
	printf ("month:    ");
	fflush(stdout);
	scanf("%d",&(link->end_date.month)) ;


	printf ("year :   ") ;
	fflush(stdout);
	scanf("%d" ,&(link->end_date.year)) ;


	printf ("enter employee rating from (1 - 10 ):") ;
	fflush(stdout) ;
	scanf("%d",&link->rating) ;


	link ->next = head ;
	head = link ;

}


/*Function to print info of specific employee which placed on your database */

void print_employee_info (unsigned char emp_id)
{
	if (head == NULL)
	{
		printf ("employees database is empty\n");
		return ;
	}

	employee_info * current = head ;


	while(current != NULL)
	{

		if (current ->id == emp_id)    /*Search  using employee id*/
		{
			printf ("----------employee id  : %d  ---------- \n",current->id) ;
			printf ("employee name : %s \n",current->name) ;
			printf ("employee age : %d \n",current->age) ;
			printf ("employee degree : %s \n",current->degree) ;
			printf ("employee start date : %d / %d \n",current->start_date.month,current->start_date.year) ;
			printf ("employee end date : %d / %d \n",current->end_date.month,current->end_date.year) ;
			printf ("employee rating : %d/10 \n\n\n",current->rating) ;


			return ;

		}

		current=current->next ;

	}

	printf ("employee id not found in the database \n\n");
}

/*Function to print the whole Database */

void print_database (void)
{

	if (head == NULL)
	{
		printf ("employees database is empty\n\n");
		return ;
	}

	employee_info * current = head ;


	while(current != NULL)
	{

		printf ("----------employee id  : %d  ---------- \n",current->id) ;
		printf ("name : %s \n",current->name) ;
		printf ("age : %d \n",current->age) ;
		printf ("experience degree : %s \n",current->degree) ;
		printf ("start date : %d / %d \n",current->start_date.month,current->start_date.year) ;
		printf ("end date : %d / %d \n",current->end_date.month,current->end_date.year) ;
		printf ("rating : %d/10 \n\n\n",current->rating) ;




		current = current->next ;

	}


}

/*Function to Update info of specific employee in your database*/

void edit_employee_info (int emp_id)
{
	if (head == NULL)
	{
		printf ("employees database is empty\n\n");
		return ;
	}

	employee_info * current = head ;


	while(current != NULL)
	{

		if (current ->id == emp_id)
		{


			printf("enter employee name : ");
			fflush(stdout);
			scanf("%99s",current->name);

			printf("enter employee age :  ");
			fflush(stdout);
			scanf("%d",&current->age) ;


			printf("enter employee experience  : ");
			fflush(stdout);
			scanf("%99s",current->degree);


			printf("enter employee id : ");
			fflush(stdout);
			scanf("%d",&current->id) ;



			printf("enter employee start date : \n");
			printf ("month:    ");
			fflush(stdout);
			scanf("%d",&(current->start_date.month)) ;


			printf ("year :    ");
			fflush(stdout);
			scanf("%d" ,&(current->start_date.year)) ;


			printf("enter employee end date : \n");
			printf ("month:    ");
			fflush(stdout);
			scanf("%d",&(current->end_date.month)) ;


			printf ("year :   ") ;
			fflush(stdout);
			scanf("%d" ,&(current->end_date.year)) ;


			printf ("enter employee rating from (1 - 10 ):") ;
			fflush(stdout) ;
			scanf("%d",&current->rating) ;


			return ;



		}

		current=current->next ;

		}


	printf ("employee id not found in the database \n");
}


/*Function to delete employee info from your data base*/

void removeEmpolyeeFromTheDatabase (int emp_id)
{

   employee_info * delete_node = NULL;
   employee_info * current = NULL;
   employee_info * prev = NULL ;

   //check if the linked list is empty
   if(head==NULL)
   {
	   printf("Linked List is empty");
	   return;
   }

   //check the first node in the linked list
   if(head->id == emp_id)
   {
	   delete_node = head;
	   // move head to next node
	   head = head->next;
	   free(delete_node);
	   return;
   }

   //check the rest of nodes in the linked list
   current = head->next;
   prev = head;
   while(current != NULL)
   {
	   if(current->id == emp_id)
	   {
		   //element found
		   delete_node = current;
		   prev->next = current->next;
		   free(delete_node);
		   return;
	   }
	   prev = current;
	   current = current->next;
   }

   //in case the data not found in the linked list
   if(delete_node == NULL)
   {
	   printf("%d not found in the database.",emp_id);
   }
}




