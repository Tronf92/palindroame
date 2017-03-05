//Nicorici Adrian, 15.03.2014
//8) Se citeste un numar natural n>10. Se cere sa se tipareasca toate numerele cuprinse in intervalul (1,n) care sunt palindroame.


#include <iostream>
using namespace std;

int numar,i,x,m=0,c;

void palindrom(int numar){
	for(i=11;i<numar;i++){
		x=i;
		while(x>0){
			c=x%10;
			m=m*10+c;
			x=x/10;
		}
		if(m==i){
			cout << "Numarul " << i << " este palindrom" << endl;
		}
		c=0;
		m=0;
	}
}

int main(){
	
	cout << "Introduceti un numar care sa fie mai mare ca 10" << endl;
	cin >> numar;
	if(numar<10){
		cout << "Trebuia sa introduceti un numar mai mare ca 10" << endl;
	}
	else
		palindrom(numar);
	
	system("pause");
	return 0;
}


