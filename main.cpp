//Marya Ryspayeva TP1


#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;


const float Pi = 3.14;
double diameter;



double d_circumference (double diameter){
    
    // function for circumference and area of circle
    
    cout << "The problem 1" << endl; 
    cout << "Write the diameter here:" << endl;
    cin>>diameter;
    double area_circle = Pi /4 * pow(diameter, 2) ;
    double circumference_circle = Pi * diameter;
    cout << "Value of area circle = "<< area_circle << std::endl;
    cout << "Value of circumference circle = "<< circumference_circle << std::endl;
    cout << "\n" << endl;   
    return 0;
}


void min_max (){
    
    //function of minimum and maximum value of random array
   
    cout << "The problem 2" << endl; 
    
    
    srand(time(NULL));
    int n=5;  // the size of array
    cout << "The array size" << "\n" << n << endl;
    
    int* array = new int[n];
    for (int counter = 0; counter < n; counter++){
         array[counter]=rand()%100;
    }

	cout << "The random array is :" << endl;
    for ( int counter = 0; counter < n; counter++ ) {
        cout << array[counter] << " ";  // output of all elemets of array
        
    }
    cout << "\n" << endl;   
    int max = array[0];
    int min = array[0];
    
    for (int counter = 0; counter < n; counter++) // the maximum value of array
    {
        if (max < array[counter])
            max = array[counter];
    }
    
    
    for (int counter = 0; counter < n; counter++)
    {
        if (min > array[counter])
            min = array[counter];
    }
    
    cout << "The maximum value of array is " << max << endl;
    cout << "The minimum value of array is " << min << endl;
    cout << "\n" << endl;  
    
}
    

int fibonacci (int N){
    if(N == 0) 
    return 0;
    
    if (N == 1 || N == 2)
         return 1;
    return fibonacci(N - 1) + fibonacci(N - 2);
    
}

int fibonacci_result(){
     
    int N;
    cout << "The problem 3" << endl;
    cout << "Write the rank of sequence N = " << endl;
    cin >> N;
    
    if (N >=47){
        cout << "Please enter the value of N < 47"<<endl;
        cin >> N;
        for (int counter = 0; counter <= N; counter++){
				cout << fibonacci(counter) << "\n";
		}
    }
    
    else {
        
   
        for (int counter = 0; counter <= N; counter++){
            cout << fibonacci(counter) << "\n";
        }
    }
    cout << "\n" << endl;  
    return 0;
}
    


int value_table;
int multiplication_table (int value_table){
    cout << "The problem 4" << endl;
    cout << "Write the value for multiplication table = " << endl; 
    cin >> value_table;
    
    for (int counter = 0; counter <= 10; counter++){
        int mupt_value_table;
        mupt_value_table = value_table * counter;
        cout << value_table << " * " << counter << " = " <<mupt_value_table << endl;
    
    }
    
    cout << "\n" << endl;   
    return 0;
    
}

bool truth_table(){
    int a, b, c;
    bool result;

    cout << "The problem 5"<<endl;
    cout<< "Operator AND :"<<endl;
    cout << "| a | b | c | result"<<endl;
    for(a = 0; a<=1; a++){
        for (b = 0; b<=1; b++)
            {
                for (c = 0; c<=1; c++){
                    result = a && b && c;
                    cout << "| "<< a<< " | "<< b<<" | "<< c<<" | "<<result <<endl;
                }
            }
    }
    
    
   cout<< "Operator OR :" <<endl;
    for(a = 0; a<=1; a++){
        for (b = 0; b<=1; b++)
            {
                for (c = 0; c<=1; c++){
                    result = a || b || c;
                    cout << "| "<< a<< " | "<< b<<" | "<< c<<" | "<<result <<endl;
                }
            }
    }
        
    
    
        
   return 0;
    
    
}


int main()
{
    
    d_circumference(diameter);
	min_max();
	fibonacci_result();
	multiplication_table(value_table);
	truth_table();
    return 0;
}
