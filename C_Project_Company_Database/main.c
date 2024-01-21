/***************************************************
 *  Module : main.c
 *
 *  Details: main file for the company database
 *
 *  Author: Mahmoud Ghoniem
 ***************************************************/

#include"data_base.h"




int main (void)
{

	char action ;
	int edit_id ;

	while(1)
	{
		/*OPtions that you can do on your database */

	printf ("Please Select one of the following options : "
			"\n1-Add new employee to your database . "
			"\n2-print your system database .\n3-print specific employee info using emp_id ."
			"\n4-update information of specific employee ."
			"\n5-delete info of employee from the database ."
			"\n0-Exit .\n");

	fflush(stdout);
	scanf("%c",&action);

	switch(action)
	{

	case '1' :
		add_new_employee ();
		break ;
	case '2' :
		print_database ();
		break;
	case '3' :
		printf("enter employee id to print info : \n");
		fflush(stdout) ;
		scanf("%d",&edit_id);
		print_employee_info (edit_id) ;
		break;
	case '4' :
		printf("enter employee id to edit info : \n");
		fflush(stdout) ;
		scanf("%d",&edit_id);
		edit_employee_info (edit_id) ;
		break ;
	case '5' :
		printf("enter employee id to delete info from the database : \n");
		fflush(stdout) ;
		scanf("%d",&edit_id);
		removeEmpolyeeFromTheDatabase (edit_id) ;
		break ;
	case '0' : /*stop the Program*/
		exit(0);
		break ;
	default:
		printf("Wrong Choice Please rechoice the action that you want to do  \n");

	}



	}


	return 0 ;
}

