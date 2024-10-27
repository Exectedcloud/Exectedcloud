#include"stdio.h"

int is_prime(int num){
    for(int j=2;j<num;j++)
	{
		if(!(num%j))
			return 0;
	}
    return (num==0) ? 0 : 1 ;
    /* Your Code Ends Here */
}

int main(){
    for(int i = 0; i < 100; i++){
        if(is_prime(i)){
           printf("%d\n",i); 
        }
    }
}
