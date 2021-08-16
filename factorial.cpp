#include "functions.h"

int factorial(int n){
    if(n==1)return 1;
    if(n>0){
	return(n * factorial(n-1));
    }
    else{cout<<"please enter a positive number"; return 0; }
}
