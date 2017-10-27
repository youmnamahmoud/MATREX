#include "matrix.h"
#include <iostream>
using namespace std;
/*attach your libraries here*/

/*
	attach your function here and make sure
 	you use the inputs from the class variables
 	in case you needed to attach a new variable
 	inside the class feel free to add it in "matrix.h"
*/

//example function
//void matrix::doNull();

//default constructor
matrix::matrix()
{
    elements = nullptr;
    rows = 0;
    columns =0;
    name = "";
}

//constructor
matrix::matrix(int rows, int columns)
{
    this->rows = rows;
    this->columns = columns;
    elements = new double*[rows];
    for(int i=0;i<rows;i++)
    {
        elements[i] = new double[columns];
    }
}

//gets
int matrix::get_rows()
{
 return rows;
}

int matrix::get_columns()
{
 return columns;
}

string matrix::get_name()
{
 return name;
}


//sets
void matrix::set_rows(int rows)
{
    this -> rows = rows;
}

void matrix::set_columns(int columns)
{
    this -> columns = columns;
}

void matrix::set_name(string name)
{
    this -> name = name;
}


//destroy matrix (like destructor but we are using dynamic allocation)
void matrix::destroy_matrix()
{
	for (int i = 0; i < rows; i++)
	{
		delete[] elements [i]; //deletes an inner array of integer;
	}

	delete[] elements; //delete pointer holding array of pointers;
}

//to have a filled array quickly to test your functions algorithms
void matrix::fill_matrix_cl()
{
    cout << "Please fill the matrix with its elements" << endl;
	for (int i = 0; i < rows; i++)
	{
	    cout << "values in row: " << i+1 << endl;
		for (int j = 0; j < columns; j++)
		{
			cin >> elements[i][j];
		}
		cout << endl;
	}
}

void matrix::fill_matrix(string inputString)
{

// to be implemented..

}

void matrix::empty_matrix()
{

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0 ; j < columns ; j++)
            elements[i][j]=0;
	}

}

matrix matrix::operator=(matrix &p)
{
    // to be implemented..
}

void matrix::print_matrix()
{
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cout<<elements[i][j]<<"\t";
		}
		cout<<endl;
	}
}

/*matrix matrix::create_matrix(int rows, int columns){
    matrix newMatrix;
    newMatrix.rows = rows;
    newMatrix.columns = columns;
    newMatrix.elements = new double*[rows];
    for(int i=0;i<rows;i++){
        newMatrix.elements[i] = new double[columns];
    }
    return newMatrix;
}*/
