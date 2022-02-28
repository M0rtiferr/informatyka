#include<iostream>
#include <cstdlib>  
#include <ctime>
using namespace std;

void generuj(){
	srand( time(NULL));
	int q = 20;
	for( int i=0; i<20; i++){
			cout << rand()%(q+1) << ",";
	}
}
