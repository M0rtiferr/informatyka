#include<iostream>
#include <cstdlib>  
#include <ctime>
using namespace std;


// ZAD 1 Napisz funkcj� o nazwie maksimum(), 
// kt�ra b�dzie przyjmowa�a tablic� z liczbami 
// ca�kowitymi oraz rozmiar tej tablicy. 
// Funkcja przeszukuje 
// tablic� i znajduj� oraz zwraca najwi�ksz� warto��.

	int maksimum(int tab[], int n){
			int max = tab[0];
			
		for(int i=1;i<n; i++){
			if(max<tab[i]){
				max=tab[i];
			}
		}
		return max;
	}
	
	int twojmama() {


	srand(  time(NULL)     );
	int p = 1;
	int q = 6;
	cout << p+rand()%(q-p+1)  << endl;
	}
	
int main(){
	int a[]={321,23123,1231,231,23123,1231,32};
	cout << maksimum (a,7) << endl;
	twojmama();
}



/*
Napisz program zawieraj�cy funkcj� symuluj�c� rzut kostki 
do gry (po wywo�aniu funkcji zwraca ona warto��, 
nie przyjmuje parametr�w). 
Wywo�aj t� funkcj� tak, aby by�o wida� efekt na ekranie.
*/ 


