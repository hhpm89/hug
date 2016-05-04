#include <iostream>
using namespace std;
int main () 
{
	cout << "operacion:";
	char op;
	cin >> op;
	if (=!(op == '+'|| op == '-'|| op == '*' || op == '/' ))  {
       cout <<"error: operacio no valida" << endl;
	} else { 
	     cout << "operador 1:";
	     int op1 ;
	     cin >> op1;
	     cout << "operador 2:";
	     int op2;
	     int res = 0 ;
	     switch (op) { 
		 case '+':
	        res = op1 + op2;
	     	break;
	     case '-':
	        res = op1 - op2;
	        break ;
	     case '*':
		    res = op1 * op2;
			break ;
		 case '/':
		    if (op2 != 0 ){
		    	res = op1 / op2;
		    	
		    }else{
		    	res = 0 ;
		    	cout << "error, divicion por cero  " <<  endl;
		    	
		    }	  
			break;
	     }
	    cout << "resultado:" << res << endl; 
    
    }
}
