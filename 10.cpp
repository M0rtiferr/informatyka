#include<iostream>
using namespace std;


    /*
Napisz funkcjê, która przyjmuje liczbê zapisan¹ w systemie dzisiêtnym,
zamienia i zwraca liczbê zapisan¹ w systemie dwójkowym {????????0,1}????????.   (10) -> (2)
*/

string dec_to_bin(int liczba){
	int r;
	string wynik;
	
	do{
		r = liczba % 2; // prawa strona
		liczba = liczba / 2; // lewa strona
	if(r==1){
		wynik='1'+wynik;
	}else{
		wynik='0'+wynik;
	}
	
	
			}while(liczba>0);
			return wynik;
			}

int main(){
	
	// wywo³ac tê funkcjê: 1) Komunikat "podaj liczbe";
    //                     2) wczytywanie wartosci z klawiat
    //                     3) Wywo³anie funkcji. 4) Zapêtlenie.	
    
    //1
    a:
    	int b;
    cout << "Podaj liczbe: " << endl;
    cin >> b;
    cout << dec_to_bin(b)<< endl;
    goto a;
   
}


