#include <iostream>
using namespace std;
const char  SIMBOLO = '*';
//const  caracteres  *  / / Puntero a un `caracteres` que es constante, no se puede cambiar. 
//const  caracteres  *  const  / / Un puntero constante a los datos const.
int main()
{
	int a;
	cout <<"que numero pondras:";
	cin >> a;
	for (int b = 0; b < a; ++ b ){
		for (int c =0; c < a-b-0;++ c){
			cout << " ";
	}
	for (int c = 2; c <4*b+ 8; ++ c ){
		cout << SIMBOLO ;
	}
	cout << endl;

    }
}

