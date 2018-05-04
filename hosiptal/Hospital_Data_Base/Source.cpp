#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <stdlib.h>

using namespace std ;

/********************************Data of Patients*****************************************/
struct Patient 
{
	int P_Num          ;
	int P_Age          ;
	string P_Name      ;
	int Drugs_Num      ;
	string P_Drugs[10] ;
};
/*********************************Node Implemntation**************************************/
class Node
{
	Node * right ;
	Node * left  ;
	Patient Data ;
public :
	Node()
	{
		right = NULL ;
		left  = NULL ;
	}
	Node * get_right ()
	{
		return (right);
	}
	Node * get_left ()
	{
		return (left);
	}
	void set_right (Node * R1 )
	{
		right = R1 ;
	}
	void set_left(Node * L1)
	{
		left = L1;
	}
	Patient get_data()
	{
		return (Data);
	}
	void set_data (Patient data)
	{
		Data = data ;
	}
};
/*****************************Important Information For Code******************************/
const int MAX_ITEM = 200  ;   //The maximum size of the stack.
int top = -1              ;
Node * pop()              ;
bool isFull()             ;
bool isEmpty()            ;
void makeEmpty()          ;
Node * Stack[MAX_ITEM]    ;
void push(Node * newitem) ;
/*****************************************************************************************/
Node  * root = NULL;
/*******************************************Menu******************************************/
class StartMenu
{
public:
	void HomeScr()
	{
		system("cls");
		cout << endl;
		cout << " Cairo University \t \t \t \t\t \t \t \t\t \t Final Project" << endl;
		cout << " Faculty of Engineering \t \t \t \t\t \t \t \t\t Data Structure" << endl;
		cout << " Systems and Biomedical Engineering Department \t \t \t \t\t \t \t Data of Patients " << endl;
		cout << "\n\n\n\n";
		cout << "\n \t \t \t \t \t \t Enter The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Show All Data Of Patients";
		cout << "\n \t \t \t \t \t \t Delete The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Save The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Get The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Search For A Data Of Patients";
		cout << "\n \t \t \t \t \t \t Exit";
	}
	void HomeScr1()
	{
		system("cls");
		cout << endl;
		cout << " Cairo University \t \t \t \t\t \t \t \t\t \t Final Project" << endl;
		cout << " Faculty of Engineering \t \t \t \t\t \t \t \t\t Data Structure" << endl;
		cout << " Systems and Biomedical Engineering Department \t \t \t \t\t \t \t Data of Patients " << endl;
		cout << "\n\n\n\n";
		cout << "\n \t \t \t \t \t \t |-->>:>>Enter The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Show All Data Of Patients";
		cout << "\n \t \t \t \t \t \t Delete The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Save The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Get The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Search For A Data Of Patients";
		cout << "\n \t \t \t \t \t \t Exit";
	}
	void HomeScr2()
	{
		system("cls");
		cout << endl;
		cout << " Cairo University \t \t \t \t\t \t \t \t\t \t Final Project" << endl;
		cout << " Faculty of Engineering \t \t \t \t\t \t \t \t\t Data Structure" << endl;
		cout << " Systems and Biomedical Engineering Department \t \t \t \t\t \t \t Data of Patients " << endl;
		cout << "\n\n\n\n";
		cout << "\n \t \t \t \t \t \t Enter The Data Of Patients";
		cout << "\n \t \t \t \t \t \t |-->>:>>Show All Data Of Patients";
		cout << "\n \t \t \t \t \t \t Delete The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Save The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Get The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Search For A Data Of Patients";
		cout << "\n \t \t \t \t \t \t Exit";
	}
	void HomeScr3()
	{
		system("cls");
		cout << endl;
		cout << " Cairo University \t \t \t \t\t \t \t \t\t \t Final Project" << endl;
		cout << " Faculty of Engineering \t \t \t \t\t \t \t \t\t Data Structure" << endl;
		cout << " Systems and Biomedical Engineering Department \t \t \t \t\t \t \t Data of Patients " << endl;
		cout << "\n\n\n\n";
		cout << "\n \t \t \t \t \t \t Enter The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Show All Data Of Patients";
		cout << "\n \t \t \t \t \t \t |-->>:>>Delete The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Save The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Get The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Search For A Data Of Patients";
		cout << "\n \t \t \t \t \t \t Exit";
	}
	void HomeScr4()
	{
		system("cls");
		cout << endl;
		cout << " Cairo University \t \t \t \t\t \t \t \t\t \t Final Project" << endl;
		cout << " Faculty of Engineering \t \t \t \t\t \t \t \t\t Data Structure" << endl;
		cout << " Systems and Biomedical Engineering Department \t \t \t \t\t \t \t Data of Patients " << endl;
		cout << "\n\n\n\n";
		cout << "\n \t \t \t \t \t \t Enter The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Show All Data Of Patients";
		cout << "\n \t \t \t \t \t \t Delete The Data Of Patients";
		cout << "\n \t \t \t \t \t \t |-->>:>>Save The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Get The Data Of Patients" ;
		cout << "\n \t \t \t \t \t \t Search For A Data Of Patients";
		cout << "\n \t \t \t \t \t \t Exit";
	}
	void HomeScr5()
	{
		system("cls");
		cout << endl;
		cout << " Cairo University \t \t \t \t\t \t \t \t\t \t Final Project" << endl;
		cout << " Faculty of Engineering \t \t \t \t\t \t \t \t\t Data Structure" << endl;
		cout << " Systems and Biomedical Engineering Department \t \t \t \t\t \t \t Data of Patients " << endl;
		cout << "\n\n\n\n";
		cout << "\n \t \t \t \t \t \t Enter The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Show All Data Of Patients";
		cout << "\n \t \t \t \t \t \t Delete The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Save The Data Of Patients";
		cout << "\n \t \t \t \t \t \t |-->>:>>Get The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Search For A Data Of Patients";
		cout << "\n \t \t \t \t \t \t Exit";
	}
	void HomeScr6()
	{
		system("cls");
		cout << endl;
		cout << " Cairo University \t \t \t \t\t \t \t \t\t \t Final Project" << endl;
		cout << " Faculty of Engineering \t \t \t \t\t \t \t \t\t Data Structure" << endl;
		cout << " Systems and Biomedical Engineering Department \t \t \t \t\t \t \t Data of Patients " << endl;
		cout << "\n\n\n\n";
		cout << "\n \t \t \t \t \t \t Enter The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Show All Data Of Patients";
		cout << "\n \t \t \t \t \t \t Delete The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Save The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Get The Data Of Patients";
		cout << "\n \t \t \t \t \t \t |-->>:>>Search For A Data Of Patients";
		cout << "\n \t \t \t \t \t \t Exit";
	}
	void HomeScr7()
	{
		system("cls");
		cout << endl;
		cout << " Cairo University \t \t \t \t\t \t \t \t\t \t Final Project" << endl;
		cout << " Faculty of Engineering \t \t \t \t\t \t \t \t\t Data Structure" << endl;
		cout << " Systems and Biomedical Engineering Department \t \t \t \t\t \t \t Data of Patients " << endl;
		cout << "\n\n\n\n";
		cout << "\n \t \t \t \t \t \t Enter The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Show All Data Of Patients";
		cout << "\n \t \t \t \t \t \t Delete The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Save The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Get The Data Of Patients";
		cout << "\n \t \t \t \t \t \t Search For A Data Of Patients";
		cout << "\n \t \t \t \t \t \t |-->>:>>Exit";
	}
	int Home()
	{
		char key;
		int flag = 0;
		while (1)
		{
			fflush(stdin);
			key = _getch();
			if (key == 0xE0) key = _getch();
			if (key == 'P') // key = Down
			{
				flag++;
				if (flag > 7)  flag = 1;
				if (flag == 1) HomeScr1();
				else if (flag == 2) HomeScr2();
				else if (flag == 3) HomeScr3();
				else if (flag == 4) HomeScr4();
				else if (flag == 5) HomeScr5();
				else if (flag == 6) HomeScr6();
				else if (flag == 7) HomeScr7();
			}
			else if (key == 72) // key = Up
			{
				flag--;
				if (flag < 1)  flag = 7;
				if (flag == 1) HomeScr1();
				else if (flag == 2) HomeScr2();
				else if (flag == 3) HomeScr3();
				else if (flag == 4) HomeScr4();
				else if (flag == 5) HomeScr5();
				else if (flag == 6) HomeScr6();
				else if (flag == 7) HomeScr7();
			}
			else if (key == 13 || key == 10) // key = enter
			{
				return flag;
				break;
			}
		}
		return flag;
	}
	void endfile()
	{
		system("cls");
		char key;
		printf("\n \t \t \t \t \t     Are You Sure You Want to Exit ?");

		printf("\n \t \t \t \t \t Press 'ENTER' to Exit , 'ESC' to Cancel");
	Button:
		key = _getch();
		if ((key == 10) || (key == 13))
		{
			system("cls");
			printf("\n \n \n \n \n \n \n \t \t \t \t \t \t GOOOOD BYE");
			exit(0);
		}
		else if (key == 27) { HomeScr(); }
		else { goto Button; }
	}
};
/**************************************Our Tree*******************************************/
class Hospital 
{
	StartMenu menu;

public:
	/********************************Insertion******************************************/
	void New_Patient()    //Function used to insert data of new patient
	{
		/************************data of patients*****************************/
		Patient pat;
		int key       = 0 ;
		pat.Drugs_Num = 0 ;
		bool complete = 1 ;
		system("cls");
		cout << endl;
		cout << " Cairo University \t \t \t \t\t \t \t \t\t \t Final Project" << endl;
		cout << " Faculty of Engineering \t \t \t \t\t \t \t \t\t Data Structure" << endl;
		cout << " Systems and Biomedical Engineering Department \t \t \t \t\t \t \t Data of Patients " << endl;
		cout << "\n\n\n\n";
		cout << "\n Please ,Enter Patient Number : "  ;
		cin >> pat.P_Num;
		cout << "\n Please ,Enter Patient Name   : "  ;
		cin >> pat.P_Name;
		cout << "\n Please ,Enter Patient Age    : "  ;
		cin >> pat.P_Age;
		cout << "\n Please ,Enter Patient drugs \n\n" ;
		while ((pat.Drugs_Num <= 9) && complete)
		{
			cout << " Durg No." << (pat.Drugs_Num + 1) << " : ";
			cin >> pat.P_Drugs[pat.Drugs_Num];
			if (pat.Drugs_Num != 9)
			{
				cout << " \t \t \t \t \t \t  To add more drugs : Enter 1 else 0 : ";
				cin >> complete;
				cout << endl;
			}
			if (complete) { pat.Drugs_Num++; }
		}
		root = insert(root, pat);            // put data in a node
		cout << "\n \n \n \n \t \t \t \t \t \t   Data Is Saved" << endl;
		cout << "\n \n \t \t \t \t \t Please Press 'backspace' To Return To Menu";
		key = _getch();
		if (key == 8)
		{
			menu.HomeScr();
		}
	}
	Node * add_patient(Patient pat)          // make new node to put data in it 
	{
		Node * new_pat = new Node;
		new_pat->set_data(pat);
		new_pat->set_left(NULL);
		new_pat->set_right(NULL);
		return new_pat;
	}
	Node * insert(Node * root, Patient pat) // insert data in tree form 
	{
		if (root == NULL)
		{
			root =  add_patient(pat);
		}
		else if ((pat.P_Num) <= (root->get_data().P_Num))
		{
			root->set_left(insert(root->get_left(), pat));
		}
		else if ((pat.P_Num) >= (root->get_data().P_Num))
		{
			root->set_right(insert(root->get_right(), pat));
		}
		return root;
	}
	/********************************Search*********************************************/
	Node * search(Node * root, int p_num)
	{
		system("cls");
		cout << endl;
		cout << " Cairo University \t \t \t \t\t \t \t \t\t \t Final Project" << endl;
		cout << " Faculty of Engineering \t \t \t \t\t \t \t \t\t Data Structure" << endl;
		cout << " Systems and Biomedical Engineering Department \t \t \t \t\t \t \t Data of Patients " << endl;
		cout << "\n\n\n\n";
		int key = 0;
		if ((root == NULL) && p_num == -1)
		{
			cout << "\n \n \n \n \t \t \t \t \t \t   There is No Data Found" << endl;
			cout << "\n \n \t \t \t \t \t Please Press 'backspace' To Return To Menu";
			key = _getch();
			if (key == 8)
			{
				menu.HomeScr();
				return 0;
			}
		}
		else
		{
			if (root == NULL)
			{
				cout << "\n \n \t \t \t \t \tThe Patient Number You Have Entered Is Not Found";
				cout << "\n \n \t \t \t \t \t Please Press 'backspace' To Return To Menu";
				key = _getch();
				if (key == 8)
				{
					menu.HomeScr();
					return 0;
				}
			}
			if (p_num == root->get_data().P_Num)
			{
				cout << " Data is founded" << endl << " And it is : " << endl       ;
				cout << " Patient Number is : " << root->get_data().P_Num << endl  ;
				cout << " Patient Name is   : " << root->get_data().P_Name << endl ;
				cout << " Patient Age is    : " << root->get_data().P_Age << endl  ;
				cout << " Patient Drugs is    " << endl ;
				for (int counter = 0; (counter < root->get_data().Drugs_Num); counter++)
				{
					cout << " Durg No." << (counter + 1) << " : ";
					cout << root->get_data().P_Drugs[counter] << endl;
				}
			}
			else if (p_num <= root->get_data().P_Num) return search(root->get_left(), p_num);
			else if (p_num >= root->get_data().P_Num) return search(root->get_right(), p_num);
		}
		cout << "\n \n \t \t \t \t \t Please Press 'backspace' To Return To Menu";
		key = _getch();
		if (key == 8)
		{
			menu.HomeScr();
			return 0;
		}
	}
	/****************************In Order By Stack**************************************/
	void inorder()
	{
		system("cls");
		cout << endl;
		cout << " Cairo University \t \t \t \t\t \t \t \t\t \t Final Project" << endl;
		cout << " Faculty of Engineering \t \t \t \t\t \t \t \t\t Data Structure" << endl;
		cout << " Systems and Biomedical Engineering Department \t \t \t \t\t \t \t Data of Patients " << endl;
		cout << "\n\n\n\n";
		int key = 0;
		if (root == NULL)
		{
			cout << "\n \n \n \n \t \t \t \t \t \t   There is No Data Found" << endl;
			cout << "\n \n \t \t \t \t \t Please Press 'backspace' To Return To Menu";
			key = _getch();
			if (key == 8)
			{
				menu.HomeScr();
				return ;
			}
		}
		else
		{
			Node * curr = root;
			bool condition = 1;
			while (condition)
			{
				if (curr != NULL)
				{
					push(curr);
					curr = curr->get_left();
				}
				else if (curr == NULL && !isEmpty())
				{
					Node *  pop_;
					pop_ = pop();
					cout << " Patient Number : ";
					cout << pop_->get_data().P_Num << endl;
					cout << " Patient Name   : ";
					cout << pop_->get_data().P_Name << endl;
					cout << " Patient Age    : ";
					cout << pop_->get_data().P_Age << endl;
					cout << " Patient Drugs is    " << endl;
					for (int counter = 0; (counter <= pop_->get_data().Drugs_Num); counter++)
					{
						cout << " Durg No." << (counter + 1)<< "  : ";
						cout << pop_->get_data().P_Drugs[counter] << endl;
						if (counter == 9) {counter++;} 
					}
					cout << "\n*********************************************************************\n" << endl;
					curr = pop_->get_right();
				}
				else { condition = 0; }
			}
			cout << "\n \n \n \n \t \t \t \t \t \t \t Data Is Completed" << endl;
			cout << "\n \n \t \t \t \t \t Please Press 'backspace' To Return To Menu";
			key = _getch();
			if (key == 8)
			{
				menu.HomeScr();
			}
		}
	}

	/************************************Deletion******************************************/
	void delete_pat(int num_deleted)
	{
		system("cls");
		cout << endl;
		cout << " Cairo University \t \t \t \t\t \t \t \t\t \t Final Project" << endl;
		cout << " Faculty of Engineering \t \t \t \t\t \t \t \t\t Data Structure" << endl;
		cout << " Systems and Biomedical Engineering Department \t \t \t \t\t \t \t Data of Patients " << endl;
		cout << "\n\n\n\n";
		int key = 0;
		if (root == NULL) 
		{
			cout << "\n \n \n \n \t \t \t \t \t \t   There is No Data Found" << endl;
			cout << "\n \n \t \t \t \t \t Please Press 'backspace' To Return To Menu";
			key = _getch();
			if (key == 8)
			{
				menu.HomeScr();
				return ;
			}
		}	
		//searching for node
		Node*curr = root;
		Node * prev = NULL;
		if (root->get_data().P_Num == num_deleted)
		{
			if (root->get_left() == NULL && root->get_right() == NULL)
				root = NULL;
			else if (root->get_left() == NULL)
				root = root->get_right();
			else if (root->get_right() == NULL)
				root = root->get_left();
			else
			{
				Node*replacing = root->get_right();
				while (replacing->get_left() != NULL)
					replacing = replacing->get_left();
				Patient data = replacing->get_data();
				delete_pat(replacing->get_data().P_Num);
				root->set_data(data);
			}
		}
		else
		{

			while (curr->get_data().P_Num != num_deleted&& curr != NULL)//searching for data to delete
			{
				if (num_deleted > curr->get_data().P_Num)
				{
					prev = curr;
					curr = curr->get_right();
				}
				else if (num_deleted < curr->get_data().P_Num)
				{
					prev = curr;
					curr = curr->get_left();
				}
			}
			if (curr == NULL)
				cout << "\nData don't exist";
			//deleted node has no children
			else if (curr->get_left() == NULL && curr->get_right() == NULL)
			{
				if (prev->get_left() == curr)
					prev->set_left(NULL);
				else if (prev->get_right() == curr)
					prev->set_right(NULL);
				delete curr;
			}
			//has one child
			else if (curr->get_left() != NULL && curr->get_right() == NULL)
			{
				if (prev->get_left() == curr)
					prev->set_left(curr->get_left());
				else
					prev->set_right(curr->get_left());
				delete curr;
			}
			else if (curr->get_left() == NULL && curr->get_right() != NULL)
			{
				if (prev->get_left() == curr)
					prev->set_left(curr->get_right());
				else
					prev->set_right(curr->get_right());
				delete curr;
			}
			//deleting node with two children replace it with the left most child in the right sub tree of deleted node
			else
			{
				Node*replacing = curr->get_right();//node that will exchange it's data with the delete one
												   //prev = curr;
				while (replacing->get_left() != NULL)
				{
					prev = replacing;
					replacing = replacing->get_left();
				}
				Patient data = replacing->get_data();
				delete_pat(replacing->get_data().P_Num);
				curr->set_data(data);

			}
		}
		cout << "\n \n \t \t \t \t \t Data Has been Deleted";
		cout << "\n \n \t \t \t \t \t Please Press 'backspace' To Return To Menu";
		key = _getch();
		if (key == 8)
		{
			menu.HomeScr();
			return ;
		}
	}
	void save_data()
	{
		int key = 0 ;
		system("cls");
		cout << endl;
		cout << " Cairo University \t \t \t \t\t \t \t \t\t \t Final Project" << endl;
		cout << " Faculty of Engineering \t \t \t \t\t \t \t \t\t Data Structure" << endl;
		cout << " Systems and Biomedical Engineering Department \t \t \t \t\t \t \t Data of Patients " << endl;
		cout << "\n\n\n\n";
		if (root == NULL)
		{
			cout << "\n \n \n \n \t \t \t \t \t \t   There is No Data Found" << endl;
			cout << "\n \n \t \t \t \t \t Please Press 'backspace' To Return To Menu";
			key = _getch();
			if (key == 8)
			{
				menu.HomeScr();
				return;
			}
		}
		else {
			ofstream myfile("HOSPITAL.txt");
			if (myfile.is_open())
			{
				Node * curr = root;
				//if (curr == NULL) {cout<<"NULL"<<endl;}
				//else {cout<<"NOT NULL"<<endl;}
				bool condition = 1;
				while (condition)
				{
					// cout<<"QQ"<<endl;
					if (curr != NULL)
					{
						// cout<<"AAAA"<<endl;
						push(curr);
						curr = curr->get_left();
						//if (curr == NULL) {cout<<"NULL"<<endl;}
						//else {cout<<"NOT NULL"<<endl;}
						// if (!isEmpty()) {cout<<"NOT EMPTY"<<endl;}
						// else {cout<<"empty"<<endl;}

					}
					else if (curr == NULL && !isEmpty())
					{
						// cout<<"i";
						Node *  pop_;
						pop_ = pop();
						myfile << "Number: ";
						myfile << pop_->get_data().P_Num << endl;
						myfile << "Name: ";
						myfile << pop_->get_data().P_Name << endl;
						myfile << "Age: ";
						myfile << pop_->get_data().P_Age << endl;
						for (int counter = 0; counter <= pop_->get_data().Drugs_Num; counter++)
						{
							myfile << "Durg No." << (counter + 1) << '\t';//edited tab
							myfile << pop_->get_data().P_Drugs[/*pop_->get_data().drug_num*/counter] << endl;
							if (counter == 9)//edited
								counter++;
						}
						myfile << "************************************************************" << endl;
						curr = pop_->get_right();
					}
					else { condition = 0; }
				}
			}
			else { myfile << "Unable to open file"; }
		}
		cout << "\n \n \t \t \t \t \t Data Has been Deleted";
		cout << "\n \n \t \t \t \t \t Please Press 'backspace' To Return To Menu";
		key = _getch();
		if (key == 8)
		{
			menu.HomeScr();
			return;
		}
	}

};
/**************************************Out Stack****************************************/
bool isEmpty()
{
	return (top == -1);
}
bool isFull()
{
	return(top == MAX_ITEM - 1);
}
void makeEmpty()
{
	top = -1;
}
void push(Node * newItem)
{
	if (isFull())
	{
		cout << "Stack Overflow\n";
	}
	else
	{
		top++;
		Stack[top] = newItem;
	}
}
Node * pop()
{
	if (isEmpty())
	{
		cout << "Stack Underflow\n";
		return NULL;
	}
	else
	{
		return Stack[top--];
	}
}
/*****************************************************************************************/





int main()
{
	int index , p_num = -1 ;
	int flag = 0;
	StartMenu menu;
	Hospital patient;
	menu.HomeScr();
	while (1)
	{
		index =  menu.Home();
		if (index == 7) menu.endfile();
		else if (index == 1) { patient.New_Patient(); flag = 1; }
		else if (index == 2) { patient.inorder(); }
		else if (index == 3) 
		{
			if (flag == 1)
			{
				system("cls");
				cout << endl;
				cout << " Cairo University \t \t \t \t\t \t \t \t\t \t Final Project" << endl;
				cout << " Faculty of Engineering \t \t \t \t\t \t \t \t\t Data Structure" << endl;
				cout << " Systems and Biomedical Engineering Department \t \t \t \t\t \t \t Data of Patients " << endl;
				cout << "\n\n\n\n";
				cout << endl << " Enter The Patient Number To Delete : ";
				cin >> p_num;
				cout << endl;
			}
			patient.delete_pat(p_num); 
		}
		else if (index == 4) { patient.save_data(); }
		else if (index == 6)
		{ 
			if (flag == 1)
			{
				system("cls");
				cout << endl ;
				cout << " Cairo University \t \t \t \t\t \t \t \t\t \t Final Project" << endl;
				cout << " Faculty of Engineering \t \t \t \t\t \t \t \t\t Data Structure" << endl;
				cout << " Systems and Biomedical Engineering Department \t \t \t \t\t \t \t Data of Patients " << endl;
				cout << "\n\n\n\n";
				cout << endl << " Enter The Patient Number : ";
				cin >> p_num;
				cout << endl;
			}
			patient.search(root, p_num);
		}
	}
	return 0;

}