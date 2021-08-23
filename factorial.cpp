#include "functions.h"

int factorial(int n){
    if(n==0)return 1;
    if(n>0){
	return(n * factorial(n-1));
    }
<<<<<<< HEAD
    else{cout << "please enter a positive number"; return -1; }
=======
    
>>>>>>> bug_fix
}
