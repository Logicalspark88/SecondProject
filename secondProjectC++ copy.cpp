//============================================================================
// Name        : secondProjectC++.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>  //  I/O operations
#include <iomanip>   //  Formatting functions
#include <cstdlib>   //  General use library functions
#include <string>    //  Defines dynamic string stuff
#include <stdlib.h>
#include <fstream>



using namespace std;
struct items{
	string num, balance, date, description, decision, amount, pay, dep;

	items *next;
};


void menu(items iptr[], int limit);
void s_s_menu(items * iptr, int limit);
items Edit_Screen2(string num, string balance, string date, string description, string decision, string amount, string pay, string dep);
void displ_screen(string num, string balance, string date, string description, string decision, string amount, string pay, string dep);
void descr_srch2(items * s, int limit);
void print_screen2(string num, string balance, string date, string description, string decision, string amount, string pay, string dep);
void print_Screen(items * iptr, int limit);
void disp_stock_table(items iptr[], int size);
void print_srch(items * s, int limit);
void input(struct samp *);
int wrapper(items * iptr, int limit);
void edit_search(items * s, int limit);
items Edit_Screen(items one[], int limit);
void displ_screen(string descr, string num, string date, string pay, string dep);
void transition();
void transition_home();
void titleScreen();
void errorScreen();
void exitScreen();

items input_screen(void);




int main(void )
{
	items item_var;
	items item_ptr;
	items stock[25];



	items *ptr;


	int limit = 25;



titleScreen();

transition();

menu(stock, limit);
return 0;


		}//end of int main(void)
void menu(items  iptr[], int limit){
	string response = "XXX";
	string err = "XXX";
	int num_entry = 0;
	do{
	        cout <<"#_____________________________________________________________________________#" << endl;
			cout <<"!#---------------------------------------------------------------------------#!" << endl;
			cout <<"!!#-------------------------------------------------------------------------#!!" << endl;
			cout <<"!!!#-----------------------------------------------------------------------#!!!" << endl;
			cout <<"!!!!#---------------------------------------------------------------------#!!!!" << endl;
			cout <<"!!!!!#-------------------------------------------------------------------#!!!!!" << endl;
			cout <<"!!!!!!#-----------------------------------------------------------------#!!!!!!" << endl;
			cout <<"!!!!!!!#---------------------------------------------------------------#!!!!!!!" << endl;
			cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
			cout <<"!!!!!!!                   #Personal Check Register#                     !!!!!!!" << endl;
			cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
			cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
			cout <<"!!!!!!!      (1)Input or (2)Print or (3)Display or (4) Search or (5) Exit ";
			cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
			cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
			cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
			cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
			cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
			cout <<"!!!!!!!-----------------------------------------------------------------!!!!!!!" << endl;
			cout <<"!!!!!!-------------------------------------------------------------------!!!!!!" << endl;
			cout <<"!!!!!---------------------------------------------------------------------!!!!!" << endl;
			cout <<"!!!!-----------------------------------------------------------------------!!!!" << endl;
			cout <<"!!!-------------------------------------------------------------------------!!!" << endl;
			cout <<"!!---------------------------------------------------------------------------!!" << endl;
			cout <<"!-----------------------------------------------------------------------------!" << endl;
			cout <<"-------------------------------------------------------------------------------" << endl;
		    getline(cin, response);
		    //int resp = stoi(response);
			switch(response.at(0)){
			case '1': num_entry = wrapper(iptr, limit);
			break;
			//replace with print
			case '2':cout << "Press enter to continue: " << endl; print_Screen(iptr, limit);
			break;
			//using num_entry makes it so that it doesn't show any objects
			case '3': disp_stock_table(iptr, num_entry);
				break;
			case '4': //Edit_Screen(one, limit);
				s_s_menu(iptr, limit);
			break;
			case '5':  exitScreen();
			break;
			//Error screen doesn't work in this bit
			//eliminate menu
			default: errorScreen(); cout << "PRESS ENTER:"; getline(cin, err);
}//end of switch statement
	}while(response.at(0) != '5');
}//end of menu(items one);
void edit_search(items * s, int limit){

	string value = "XXX";

		 cout << "what data object do you want to edit(1-25):  "; getline(cin, value);
		 int ctr = stoi(value);
				 switch(ctr){
				 case 1: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
				 menu(s, limit);
				 break;
				 case 2: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
				 break;
				 case 3: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
					 break;
				 case 4: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
				     break;
				 case 5: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 6: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 7: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 8: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 9: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 10: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 11: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 12: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 13: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 14: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 15: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 16: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 17: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 18: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 19: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 20: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 21: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 22: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 23: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 24: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 case 25: Edit_Screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
				 transition();
					 		 menu(s, limit);
						 break;
				 default: errorScreen(); getline(cin, value);
				 }// end of switch

}// end of edit_search( items s[], int limit)
void s_s_menu(items * iptr, int limit){

	string resp = "XXX";
	string err = "XXX";
	int num_entry = 0;
do{
	   cout <<"#_____________________________________________________________________________#" << endl;
				cout <<"!#---------------------------------------------------------------------------#!" << endl;
				cout <<"!!#-------------------------------------------------------------------------#!!" << endl;
				cout <<"!!!#-----------------------------------------------------------------------#!!!" << endl;
				cout <<"!!!!#---------------------------------------------------------------------#!!!!" << endl;
				cout <<"!!!!!#-------------------------------------------------------------------#!!!!!" << endl;
				cout <<"!!!!!!#-----------------------------------------------------------------#!!!!!!" << endl;
				cout <<"!!!!!!!#---------------------------------------------------------------#!!!!!!!" << endl;
				cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
				cout <<"!!!!!!!                   #Personal Check Register#                     !!!!!!!" << endl;
				cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
				cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
				cout <<"!!!!!!!              (1)Search or (2)Edit or (3)Print or (4)Exit ";
				cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
				cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
				cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
				cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
				cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
				cout <<"!!!!!!!-----------------------------------------------------------------!!!!!!!" << endl;
				cout <<"!!!!!!-------------------------------------------------------------------!!!!!!" << endl;
				cout <<"!!!!!---------------------------------------------------------------------!!!!!" << endl;
				cout <<"!!!!-----------------------------------------------------------------------!!!!" << endl;
				cout <<"!!!-------------------------------------------------------------------------!!!" << endl;
				cout <<"!!---------------------------------------------------------------------------!!" << endl;
				cout <<"!-----------------------------------------------------------------------------!" << endl;
				cout <<"-------------------------------------------------------------------------------" << endl;
				 getline(cin, resp);

						    switch(resp.at(0)){
						    case '1': descr_srch2(iptr, limit);
						    	break;
						    case '2': edit_search(iptr, limit);
						    break;
						    case '3': print_srch(iptr, limit);
						    break;
						    case '4': exitScreen();
						    	break;
						    default: errorScreen(); cout<< "Press enter:"; getline(cin, err);
						    }// end of switch
}while(resp.at(0) != '3');

}// end of s_s_menu( items item_ary[], int no_values )
void print_srch(items * s, int limit){

	string value = "XXX";

	 cout << "Enter a data structure to print(1-25):  "; getline(cin, value);
	 int ctr = stoi(value);
		 switch(ctr){
		 case 1: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
		 menu(s, limit);
		 break;
		 case 2: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
		 break;
		 case 3: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
			 break;
		 case 4: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
		     break;
		 case 5: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 6: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 7: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 8: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 9: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 10: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 11: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 12: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 13: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 14: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 15: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 16: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 17: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 18: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 19: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 20: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 21: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 22: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 23: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 24: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 case 25: print_screen2(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
		 transition();
			 		 menu(s, limit);
				 break;
		 default: errorScreen(); getline(cin, value);
		 }// end of switch

}// end of print_srch(items s[], int limit)
void descr_srch2(items * s, int limit){

	 string value = "XXX";



	 cout << "Enter a data structure to locate(1-25):  "; getline(cin, value);
	 int ctr = stoi(value);
	 switch(ctr){
	 case 1: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
	 		 menu(s, limit);
	 break;
	 case 2: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
	 break;
	 case 3: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
		 break;
	 case 4: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
	     break;
	 case 5: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 6: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 7: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 8: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 9: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 10: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 11: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 12: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 13: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 14: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 15: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 16: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 17: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 18: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 19: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 20: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 21: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 22: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 23: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 24: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 case 25: displ_screen(s[ctr-1].num, s[ctr-1].balance, s[ctr-1].date, s[ctr-1].description, s[ctr-1].decision, s[ctr-1].amount, s[ctr-1].pay, s[ctr-1].dep);
	 transition();
		 		 menu(s, limit);
			 break;
	 default: errorScreen(); getline(cin, value);
	 }// end of switch


}// end of descr_srch2(items s[], int limit)
int wrapper(items *iptr, int limit){
	int count = 0;

	string resp = "XXX";
	            cout <<"#_____________________________________________________________________________#" << endl;
				cout <<"!#---------------------------------------------------------------------------#!" << endl;
				cout <<"!!#-------------------------------------------------------------------------#!!" << endl;
				cout <<"!!!#-----------------------------------------------------------------------#!!!" << endl;
				cout <<"!!!!#---------------------------------------------------------------------#!!!!" << endl;
				cout <<"!!!!!#-------------------------------------------------------------------#!!!!!" << endl;
				cout <<"!!!!!!#-----------------------------------------------------------------#!!!!!!" << endl;
				cout <<"!!!!!!!#---------------------------------------------------------------#!!!!!!!" << endl;
				cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
				cout <<"!!!!!!!                   #Personal Check Register#                     !!!!!!!" << endl;
				cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
				cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
				cout <<"!!!!!!!                    Want to create a new data object?            !!!!!!!" << endl;
				cout <<"!!!!!!!                             yes or no(y/n)?                          !!!!!!!" << endl;
				cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
				cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
				cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
				cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
				cout <<"!!!!!!!-----------------------------------------------------------------!!!!!!!" << endl;
				cout <<"!!!!!!-------------------------------------------------------------------!!!!!!" << endl;
				cout <<"!!!!!---------------------------------------------------------------------!!!!!" << endl;
				cout <<"!!!!-----------------------------------------------------------------------!!!!" << endl;
				cout <<"!!!-------------------------------------------------------------------------!!!" << endl;
				cout <<"!!---------------------------------------------------------------------------!!" << endl;
				cout <<"!-----------------------------------------------------------------------------!" << endl;
				cout <<"-------------------------------------------------------------------------------" << endl;
	getline(cin, resp);
	 while( (count < limit) && resp == "y"){
		 //??????
		 iptr[count] = input_screen();
		 count++;
		 cout << "want to create another data record?" << endl;
		 cout << "Yes or no(y/n)?"; getline(cin, resp);
	 }// end of while loop

	 if(resp == "n"){
		 menu(iptr, count);
		 return count;
	 }else if(resp != "yes" || "no"){
		 cout << "Please use y or n" << endl;
		 wrapper(iptr, limit);

	 }
	 return count;
}// end of wrapper(items one[], int limit)









// int main( )i
items input_screen(void){


items one;
	int limit;



	cout <<"#_____________________________________________________________________________#" << endl;
	cout <<"!#---------------------------------------------------------------------------#" << endl;
	cout <<"!!#-------------------------------------------------------------------------#" << endl;
	cout <<"!!!#-----------------------------------------------------------------------#" << endl;
	cout <<"!!!!#---------------------------------------------------------------------#" << endl;
	cout <<"!!!!!#-------------------------------------------------------------------#" << endl;
	cout <<"!!!!!!#-----------------------------------------------------------------#" << endl;
	cout <<"!!!!!!!#---------------------------------------------------------------#" << endl;
	cout <<"!!!!!!!                                                                 " << endl;
	cout <<"!!!!!!!   #Personal Check Register#             " << endl;
	cout <<"!!!!!!!    (Please input required data and)     " << endl;
	cout <<"!!!!!!!     press <enter> to continue)          " << endl;
	cout <<"!!!!!!!   Balance:0" << endl;
	cout <<"!!!!!!!   Check number:";
	getline(cin, one.num);
	//if you leave the num variable empty the code will crash
	while((one.num.at(0) < '0')|| (one.num.at(0) > '9'))
	{
		errorScreen(); getline(cin, one.num);
	}// end of while statement

	cout <<"!!!!!!!   Date:";
	getline(cin, one.date);
	//if the variable date remains empty the code will crash
	while((one.date.at(0) < '0')|| (one.date.at(0) > '9'))
	{
		errorScreen(); getline(cin, one.date);
	}// end of while statement

	cout <<"!!!!!!!   Description:";
	getline(cin, one.description);
	while(one.description == "")
	{
			errorScreen();

			getline(cin, one.description);

	} // end of while statement

	cout <<"!!!!!!!   Payment or Deposit?";
	getline(cin, one.decision);
	if(one.decision != "Payment" || "Deposit")
	{
	while(one.decision != "Payment" || "Deposit")
	{

		if(one.decision == "Payment")
		{

			cout <<"!!!!!!!   Payment:";

			cin >> one.pay;



			break;
		}else if(one.decision == "Deposit")
		{
			cout <<"!!!!!!!   Deposit:";

			cin >> one.dep;


			break;
		}else
		{
			errorScreen();

			cout <<"(Try using capital letters)" << endl;

			getline(cin, one.decision);

		}//end of else statement
	}
	}//end of while decision statement

	cout <<"!!!!!!!   Press <enter> to continue             " << endl;
	cout <<"!!!!!!!                                         " << endl;
	cout <<"!!!!!!!                                         " << endl;
	cout <<"!!!!!!!----------------------------------------------------------------#" << endl;
	cout <<"!!!!!!------------------------------------------------------------------#" << endl;
	cout <<"!!!!!--------------------------------------------------------------------#" << endl;
	cout <<"!!!!----------------------------------------------------------------------#" << endl;
	cout <<"!!!------------------------------------------------------------------------#" << endl;
	cout <<"!!--------------------------------------------------------------------------#" << endl;
	cout <<"!----------------------------------------------------------------------------#" << endl;
	cout <<"------------------------------------------------------------------------------#" << endl;

	return one;

	transition();



}//end of input_Screen();



void transition( ){
	string resp;
	            getline(cin, resp);

	            system("cls");
}//end of void transition( )
void transition_home( ){
	string resp;
	            getline(cin, resp);

	            system("cls");

	            main();
}//end of void transition( )
void errorScreen( ){
	 string ans;
	 //errorScreen is filled with issues.
	    cout <<"#_____________________________________________________________________________#" << endl;
		cout <<"!#---------------------------------------------------------------------------#!" << endl;
		cout <<"!!#-------------------------------------------------------------------------#!!" << endl;
		cout <<"!!!#-----------------------------------------------------------------------#!!!" << endl;
		cout <<"!!!!#---------------------------------------------------------------------#!!!!" << endl;
		cout <<"!!!!!#-------------------------------------------------------------------#!!!!!" << endl;
		cout <<"!!!!!!#-----------------------------------------------------------------#!!!!!!" << endl;
		cout <<"!!!!!!!#---------------------------------------------------------------#!!!!!!!" << endl;
		cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
		cout <<"!!!!!!!                   #Personal Check Register#                     !!!!!!!" << endl;
		cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
		cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
		cout <<"!!!!!!!                   #ERROR, PLEASE ENTER VALID VALUE#             !!!!!!!" << endl;
		cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
		cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
		cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
		cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
		cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
		cout <<"!!!!!!!-----------------------------------------------------------------!!!!!!!" << endl;
		cout <<"!!!!!!-------------------------------------------------------------------!!!!!!" << endl;
		cout <<"!!!!!---------------------------------------------------------------------!!!!!" << endl;
		cout <<"!!!!-----------------------------------------------------------------------!!!!" << endl;
		cout <<"!!!-------------------------------------------------------------------------!!!" << endl;
		cout <<"!!---------------------------------------------------------------------------!!" << endl;
		cout <<"!-----------------------------------------------------------------------------!" << endl;
		cout <<"-------------------------------------------------------------------------------" << endl;
		cout <<"VALUE: ";
}//end of void errorScreen( )
void exitScreen( ){
	string ext;
	getline(cin, ext);
	cout <<"#_____________________________________________________________________________#" << endl;
	cout <<"!#---------------------------------------------------------------------------#!" << endl;
	cout <<"!!#-------------------------------------------------------------------------#!!" << endl;
	cout <<"!!!#-----------------------------------------------------------------------#!!!" << endl;
	cout <<"!!!!#---------------------------------------------------------------------#!!!!" << endl;
	cout <<"!!!!!#-------------------------------------------------------------------#!!!!!" << endl;
	cout <<"!!!!!!#-----------------------------------------------------------------#!!!!!!" << endl;
	cout <<"!!!!!!!#---------------------------------------------------------------#!!!!!!!" << endl;
	cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
	cout <<"===============================================================================" << endl;
	cout <<"===============================================================================" << endl;
	cout <<"###############################################################################" << endl;
	cout <<"################################Come back soon!################################" << endl;
	cout <<"###############################################################################" << endl;
	cout <<"===============================================================================" << endl;
	cout <<"===============================================================================" << endl;
	cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
	cout <<"!!!!!!!-----------------------------------------------------------------!!!!!!!" << endl;
	cout <<"!!!!!!-------------------------------------------------------------------!!!!!!" << endl;
	cout <<"!!!!!---------------------------------------------------------------------!!!!!" << endl;
	cout <<"!!!!-----------------------------------------------------------------------!!!!" << endl;
	cout <<"!!!-------------------------------------------------------------------------!!!" << endl;
	cout <<"!!---------------------------------------------------------------------------!!" << endl;
	cout <<"!-----------------------------------------------------------------------------!" << endl;
	cout <<"-------------------------------------------------------------------------------" << endl;

}//end of exitScreen( )
void titleScreen( ){
	cout <<"#_____________________________________________________________________________#" << endl;
	cout <<"!#---------------------------------------------------------------------------#!" << endl;
	cout <<"!!#-------------------------------------------------------------------------#!!" << endl;
	cout <<"!!!#-----------------------------------------------------------------------#!!!" << endl;
	cout <<"!!!!#---------------------------------------------------------------------#!!!!" << endl;
	cout <<"!!!!!#-------------------------------------------------------------------#!!!!!" << endl;
	cout <<"!!!!!!#-----------------------------------------------------------------#!!!!!!" << endl;
	cout <<"!!!!!!!#---------------------------------------------------------------#!!!!!!!" << endl;
	cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
	cout <<"!!!!!!!                   #Personal Check Register#                     !!!!!!!" << endl;
	cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
	cout <<"!!!!!!!                 Programmer: Juan Crisantes                      !!!!!!!" << endl;
	cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
	cout <<"!!!!!!!                 Revision date: 04/15/2022                       !!!!!!!" << endl;
	cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
	cout <<"!!!!!!!                 Press <enter> to continue.                      !!!!!!!" << endl;
	cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
	cout <<"!!!!!!!                                                                 !!!!!!!" << endl;
	cout <<"!!!!!!!-----------------------------------------------------------------!!!!!!!" << endl;
	cout <<"!!!!!!-------------------------------------------------------------------!!!!!!" << endl;
	cout <<"!!!!!---------------------------------------------------------------------!!!!!" << endl;
	cout <<"!!!!-----------------------------------------------------------------------!!!!" << endl;
	cout <<"!!!-------------------------------------------------------------------------!!!" << endl;
	cout <<"!!---------------------------------------------------------------------------!!" << endl;
	cout <<"!-----------------------------------------------------------------------------!" << endl;
	cout <<"-------------------------------------------------------------------------------" << endl;

}//end of titleScreen( )
void print_Screen(items * iptr, int limit){
	ofstream ofile;
	int size = 25;
	ofile.open("check.prn");

	 int counter = 0;
	    double stock_value = 0.0;
	    string print = "XXX";

	    system("cls");
	    ofile << endl << endl;
	    ofile << "                    #Personal check register#" << endl;
	    ofile << endl;
	    ofile << "                        Data Output Screen" << endl;
	    ofile << endl;

	    ofile << setw(24) << "Description" << "  " << setw(6) << "check number" << "  " << setw(8) << "Payment/Deposit" << " " << setw(6) << endl;
	    ofile << setw(24) << "-----------" << "  " << setw(6) << "-------------" << "  " << setw(8) << "--------" << setw(6) << "--------" << endl;
	    for(counter = 0; counter < size; counter++)
	    {
	        ofile <<counter << ". " << setw(20) << iptr[counter].description << "  " << setw(6) << iptr[counter].num << "  " << setw(8) << iptr[counter].date << " " << setw(6) << iptr[counter].dep + iptr[counter].pay << endl;
	        stock_value = stock_value + ( atoi(iptr[counter].dep.data()) - atoi(iptr[counter].pay.data()));  //Creates a total stock value to print at the end of
	                                                                                         //   the table.
	    }//End of for(counter = 0; counter < size; counter++)

	    ofile << "Trans amount = " << stock_value << endl;
	    ofile << endl;
		transition();
		menu(iptr, limit);
}// end of print_Screen();



void displ_screen(string num, string balance, string date, string description, string decision, string amount, string pay, string dep){


	cout <<"#_____________________________________________________________________________#" << endl;
		cout <<"!#---------------------------------------------------------------------------#" << endl;
		cout <<"!!#-------------------------------------------------------------------------#" << endl;
		cout <<"!!!#-----------------------------------------------------------------------#" << endl;
		cout <<"!!!!#---------------------------------------------------------------------#" << endl;
		cout <<"!!!!!#-------------------------------------------------------------------#" << endl;
		cout <<"!!!!!!#-----------------------------------------------------------------#" << endl;
		cout <<"!!!!!!!#---------------------------------------------------------------#" << endl;
		cout <<"!!!!!!!                                                                 " << endl;
		cout <<"!!!!!!!                                                                 " << endl;
		cout <<"!!!!!!!                   #Personal Check Register#             " << endl;
		cout <<"!!!!!!!                    (Output screen)     " << endl;
		cout <<"!!!!!!!                                       " << endl;
		cout <<"!!!!!!!                -Starting balance:" << "0" << endl;
		cout <<"!!!!!!!                -Check number:"<< num << endl;
		cout <<"!!!!!!!                -Date:" << date << endl;
		cout <<"!!!!!!!                -Description:"<< description <<endl;
		cout <<"!!!!!!!                -Payment/Deposit:"<< dep + pay;
		cout << endl;
		cout <<"!!!!!!!                -Transaction amount:"<< dep + pay;
		cout << endl;
		cout <<"!!!!!!!" << endl;
		cout <<"!!!!!!!                  press <enter> to exit screen" << endl;
		cout <<"!!!!!!!" << endl;
		cout <<"!!!!!!!" << endl;
		cout <<"!!!!!!!----------------------------------------------------------------#" << endl;
		cout <<"!!!!!!------------------------------------------------------------------#" << endl;
		cout <<"!!!!!--------------------------------------------------------------------#" << endl;
		cout <<"!!!!----------------------------------------------------------------------#" << endl;
		cout <<"!!!------------------------------------------------------------------------#" << endl;
		cout <<"!!--------------------------------------------------------------------------#" << endl;
		cout <<"!----------------------------------------------------------------------------#" << endl;
		cout <<"------------------------------------------------------------------------------#" << endl;


}// end of displ_screen(string num, string balance, string date, string description, string decision, string amount, string pay, string dep)
void print_screen2(string num, string balance, string date, string description, string decision, string amount, string pay, string dep){

	ofstream ofile;
		ofile.open("print.prn");

		ofile <<"#_____________________________________________________________________________#" << endl;
				ofile <<"!#---------------------------------------------------------------------------#" << endl;
				ofile <<"!!#-------------------------------------------------------------------------#" << endl;
				ofile <<"!!!#-----------------------------------------------------------------------#" << endl;
				ofile<<"!!!!#---------------------------------------------------------------------#" << endl;
				ofile <<"!!!!!#-------------------------------------------------------------------#" << endl;
				ofile <<"!!!!!!#-----------------------------------------------------------------#" << endl;
				ofile <<"!!!!!!!#---------------------------------------------------------------#" << endl;
				ofile <<"!!!!!!!                                                                 " << endl;
				ofile <<"!!!!!!!                                                                 " << endl;
				ofile <<"!!!!!!!                   #Personal Check Register#             " << endl;
				ofile <<"!!!!!!!                    (Output screen)     " << endl;
				ofile <<"!!!!!!!                                       " << endl;
				ofile <<"!!!!!!!                -Starting balance:" << "0" << endl;
				ofile <<"!!!!!!!                -Check number:"<< num << endl;
				ofile <<"!!!!!!!                -Date:" << date << endl;
				ofile <<"!!!!!!!                -Description:"<< description <<endl;
				ofile <<"!!!!!!!                -Payment/Deposit:"<< dep + pay;
				ofile << endl;
				ofile <<"!!!!!!!                -Transaction amount:"<< dep + pay;
				ofile << endl;
				ofile <<"!!!!!!!" << endl;
				ofile <<"!!!!!!!                  press <enter> to exit screen" << endl;
				ofile <<"!!!!!!!" << endl;
				ofile <<"!!!!!!!" << endl;
				ofile <<"!!!!!!!----------------------------------------------------------------#" << endl;
				ofile <<"!!!!!!------------------------------------------------------------------#" << endl;
				ofile <<"!!!!!--------------------------------------------------------------------#" << endl;
				ofile <<"!!!!----------------------------------------------------------------------#" << endl;
				ofile <<"!!!------------------------------------------------------------------------#" << endl;
				ofile <<"!!--------------------------------------------------------------------------#" << endl;
				ofile <<"!----------------------------------------------------------------------------#" << endl;
				ofile <<"------------------------------------------------------------------------------#" << endl;

}// end of print_screen2(string num, string balance, string date, string description, string decision, string amount, string pay, string dep)
items Edit_Screen2(string num, string balance, string date, string description, string decision, string amount, string pay, string dep){

	string buffer;

	items one;


		cout <<"#_____________________________________________________________________________#" << endl;
			cout <<"!#---------------------------------------------------------------------------#" << endl;
			cout <<"!!#-------------------------------------------------------------------------#" << endl;
			cout <<"!!!#-----------------------------------------------------------------------#" << endl;
			cout <<"!!!!#---------------------------------------------------------------------#" << endl;
			cout <<"!!!!!#-------------------------------------------------------------------#" << endl;
			cout <<"!!!!!!#-----------------------------------------------------------------#" << endl;
			cout <<"!!!!!!!#---------------------------------------------------------------#" << endl;
			cout <<"!!!!!!!                                                                 " << endl;
			cout <<"!!!!!!!   #Personal Check Register#             " << endl;
			cout <<"!!!!!!!    (Please edit required data and)     " << endl;
			cout <<"!!!!!!!     press <enter> to continue)          " << endl;
			cout <<"!!!!!!!   what do you want to edit?" << endl;
			cout <<"!!!!!!!   (1)Check number (2) Date (3) Description (4) Payment/Deposit" << endl;
			getline(cin, buffer);
			int choice = stoi(buffer);
			switch(choice){
			case 1: cout << "Check number:"; getline(cin, buffer);num = buffer; transition_home();
			break;
			case 2: cout << "Date:"; getline(cin, buffer);date = buffer; transition_home();
			break;
			case 3: cout << "Description: "; getline(cin, buffer); description = buffer; transition_home();
			break;
			case 4: cout << "Payment or deposit?"; getline(cin, buffer); decision = buffer;
			if(decision != "Payment" || "Deposit")
				{
				while(decision != "Payment" || "Deposit")
				{

					if(decision == "Payment")
					{

						cout <<"!!!!!!!   Payment:";

						getline(cin, buffer); pay = buffer; transition_home();



						break;
					}else if(decision == "Deposit")
					{
						cout <<"!!!!!!!   Deposit:";

						getline(cin, buffer); dep = buffer; transition_home();


						break;
					}else
					{
						errorScreen();

						cout <<"(Try using capital letters)" << endl;

						getline(cin, buffer); decision = buffer;

					}//end of else statement
				}
				}

			break;
			default: errorScreen(); getline(cin, buffer);
			}// end ofEdit(items one);

}//Edit_Screen2(string num, string balance, string date, string description, string decision, string amount, string pay, string dep);
void disp_stock_table(items iptr[], int size)
{

    int counter = 0;
    double stock_value = 0.0;
    string print = "XXX";
    string err= "XXX";

    system("cls");
    cout << endl << endl;
    cout << "                    #Personal check register#" << endl;
    cout << endl;
    cout << "                        Data Output Screen" << endl;
    cout << endl;

    cout << setw(24) << "Description" << "  " << setw(6) << "check number" << "  " << setw(8) << "Payment/Deposit" << " " << setw(6) << endl;
    cout << setw(24) << "-----------" << "  " << setw(6) << "-------------" << "  " << setw(8) << "--------" << setw(6) << "--------" << endl;
    for(counter = 0; counter < size; counter++)
    {
        cout <<counter << ". " << setw(20) << iptr[counter].description << "  " << setw(6) << iptr[counter].num << "  " << setw(8) << iptr[counter].date << " " << setw(6) << iptr[counter].dep + iptr[counter].pay << endl;
        stock_value = stock_value + ( atoi(iptr[counter].dep.data()) - atoi(iptr[counter].pay.data()));  //Creates a total stock value to print at the end of
                                                                                         //   the table.
    }//End of for(counter = 0; counter < size; counter++)

    cout << "Trans amount = " << stock_value << endl;
    cout << endl;
    cout << "Would you want to print this screen(y/n)?"; getline(cin, print);
    while(print == "y"){
    	cout << "Press enter to continue: " << endl;
    	print_Screen(iptr, size);


   	 }// end of while loop

   	 if(print == "n"){
   		 menu(iptr, size);

   	 }else if(print != "y" || "n"){
   		 cout << "Please use y or n" << endl; getline(cin, err);
   	 }
}//End of void disp_stock_table(item s[], int size)

