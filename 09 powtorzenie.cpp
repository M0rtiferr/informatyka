#include<iostream>
#include <cstdlib>  
#include <ctime>
using namespace std;


// ZAD 1 Napisz funkcjê o nazwie maksimum(), 
// która bêdzie przyjmowa³a tablicê z liczbami 
// ca³kowitymi oraz rozmiar tej tablicy. 
// Funkcja przeszukuje 
// tablicê i znajdujê oraz zwraca najwiêksz¹ wartoœæ.

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
Napisz program zawieraj¹cy funkcjê symuluj¹c¹ rzut kostki 
do gry (po wywo³aniu funkcji zwraca ona wartoœæ, 
nie przyjmuje parametrów). 
Wywo³aj tê funkcjê tak, aby by³o widaæ efekt na ekranie.
*/ 


