#include <iostream>
#include  <string>
// prototypes



using namespace std;
void passBypointer(int* pointer);
void passByvalue(int x);
void passByref(int &x);
void printArraybyelement(int vals[], int size);
void printArraybyPointer(int* vals,int size);


struct Student  {
	int id;
	string name;
	double gpa;
};



void bumpGPAbyaQuater(Student* stu)
{
	stu->gpa = stu->gpa + 0.25;	
}


// body

int main() {
		int x=5;	
passByvalue(x);
	cout << "After passByvalue x= " << x << endl;
	
	passByref(x);
	cout << "After passbyref x= " << x << endl;
	int* pointerToX= &x;
	passBypointer(&x);
	cout << "After passbyPointer x= " << x << endl;
	
	int vals[] = { 4,7,11};
	
	printArraybyelement(vals, 3);
	printArraybyPointer(vals,3);
	
	
	
Student stu = {66, "Stuart",2.7};
bumpGPAbyaQuater (&stu);
cout << "Stu's new gpa = " << stu.gpa; 	
	
	
	
	
	
	
	
	return 0;
	
}














// functions 


void passByvalue(int x) 
{
x += 3;
cout << "x in passByValue= " << x << endl;	
}




void passByref(int &x)
{
	x +=3;
	cout << "x in passbyref= " << x << endl;
	
	
}



void passBypointer(int* x)
{
	
	cout << "x in By pointer " << x << endl;
	*x = *x +3;
		cout << "x in passbypointer= " << *x << endl;
}




void printArraybyelement(int vals[], int size) 
{
	for (int i=0;i<size;i++) 
	{
		cout << vals[i] << endl;
	}
	
}


void printArraybyPointer(int* vals,int size) 
{
	for (int i=0;i<size;i++) 
	{
		cout << *(vals+i) << endl; // can be vals++ too 
	}	
}



