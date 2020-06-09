#include <iostream>

using namespace std;

int rumus(int input, int nilai){ 
	if (nilai == 1) { 
		return 1; 
	} 
	else if (input % nilai == 0) { 
		return 1 + rumus(input, --nilai); 
		} else { 
		return 0 + rumus(input, --nilai); 
	} 
}

int hasil(int input){ 
	if (input > 1) { 
		return (rumus(input, input) == 2);
	} 
	else 
		return false; 
}

int main(){
	
	int input;
	bool prima = true, nonPrima;
	nonPrima = false;
	
	awal:
	
	cout<<"Masukan Bilangan >> ";
	cin>>input;

	if (hasil(input)){
		cout << "' " << prima << " ' True prima\n\n";
	}else{
		cout << "' " << nonPrima << " ' False bukan prima\n\n";
	}
	
	goto awal;
	return 0;
}

