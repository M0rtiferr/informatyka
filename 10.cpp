#include<iostream>
using namespace std;


    /*
Napisz funkcj�, kt�ra przyjmuje liczb� zapisan� w systemie dzisi�tnym,
zamienia i zwraca liczb� zapisan� w systemie dw�jkowym {????????0,1}????????.   (10) -> (2)
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
	
	// wywo�ac t� funkcj�: 1) Komunikat "podaj liczbe";
    //                     2) wczytywanie wartosci z klawiat
    //                     3) Wywo�anie funkcji. 4) Zap�tlenie.	
    
    //1
    a:
    	int b;
    cout << "Podaj liczbe: " << endl;
    cin >> b;
    cout << dec_to_bin(b)<< endl;
    goto a;
   
}


