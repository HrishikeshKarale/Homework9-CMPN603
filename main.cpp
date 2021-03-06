/**
 * Time.h
 * Homework 1
 * Fall 2014
 * Department of Computer Science
 * Rochester Institute of Technology
 * Author: Hrishikesh Karale (hhk9433)
 */
#include <iostream>

/**
 * This is the main function of our program which takes the size of two list's and
 * the elements of those lists and checks if list 1 is a subset of list 2.
 */
int main()
{
	// boolean counter to determine if similar element is found in both lists.
  bool checker = false;
  // stores the size of list 1 and lis 2 respectively.
  int list_1_size = 0, list_2_size = 0;

  std::cout<< "list 1 size: ";
  std::cin>> list_1_size;
  std::cout<< "list 1 data: ";
  // creates an integer array of size list_1_size.
  int list_1[list_1_size];
  
  // stores user inputs in list_1 array
  for(int i=0; i<list_1_size; i++)
  {
	  std::cin>> list_1[i];
  }

  std::cout<< "list 2 size: ";
  std::cin>> list_2_size;
  // creates an integer array of size list_2_size.
  int list_2 [list_2_size];
  std::cout<< "list 2 data: ";
  
  // stores user inputs in list_1 array
  for(int i=0; i<list_2_size; i++)
  {
	  std::cin>> list_2[i];
  }
  
  // this block of code compares element of list_1 with list_2
  for(int i=0; i<list_1_size; i++)
  {
		for(int j=0; j<list_2_size; j++)
		{
			/*
			 * checks if element of list_1 is equal to element of list_2. If element 
			 * if found to be equal then checker is set as true and break is called
			 * on the current loop.
			 */
	 	  if(list_1[i]==list_2[j])
	 	  {
			  checker = true;
			  break;
	 	  }
	 	  /*
			 * If the above condition is not met then this block of code checks if 
			 * we have reached the end of the list_2 and then if checker if found
			 * false then goto 'label'.
			 */
	 	  else if(j==list_2_size-1 && checker!=true)
	 	  {
			  goto here;
	 	  }
		}
  }  
  
  //goto label
  here:
  	if (checker)
			std::cout<<"TRUE";
  	else
			std::cout<<"FALSE";

  	return 0;
}