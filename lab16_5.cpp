#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d)
   {
      int ap;
	  int ran = rand()%6;

	  if(ran == 0){
		ap = *a;
		*a = *b;
		*b = ap;
	  }
      if(ran == 1){
		ap = *a;
		*a = *c;
		*c = ap;
	  }
	  if(ran == 2){
		ap = *a;
		*a = *d;
		*d = ap;
	  }
	  if(ran == 3){
		ap = *b;
		*b = *c;
		*c = ap;
	  }
	  if(ran == 4){
		ap = *b;
		*b = *d;
		*d = ap;
	  }
	  if(ran == 5){
		ap = *c;
		*c = *d;
		*d = ap;
	  }
   }

