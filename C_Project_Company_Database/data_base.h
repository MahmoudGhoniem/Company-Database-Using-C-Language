/***************************************************
 *  Module : data_base.h
 *
 *  Details: header file for the company database contain employee structure and functions declaration .
 *
 *  Author: Mahmoud Ghoniem
 ***************************************************/

#ifndef DATA_BASE_H_
#define DATA_BASE_H_


#include <stdio.h>
#include <stdlib.h>


 typedef struct employee
{
	char name [50] ;
	char degree [15] ;
	struct date
	{
		int month ;
		int year  ;

	}end_date,start_date ;

	int rating ;
	int id ;
	int age ;

	struct employee * next ;

} employee_info;




void add_new_employee (void) ;

void print_employee_info (unsigned char emp_id) ;

void print_database (void) ;

void edit_employee_info (int emp_id) ;

void removeEmpolyeeFromTheDatabase (int emp_id) ;








#endif /* DATA_BASE_H_ */
