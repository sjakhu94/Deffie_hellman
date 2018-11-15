#include <stdio.h>
#include <stdlib.h>
#include<math.h>

long long int power(long long int a, long long int b, 
                                     long long int P) 
{  
    if (b == 1) 
        return a; 
  
    else
        return (((long long int)pow(a, b)) % P); 
} 

int check_prime(int a)
{
	int check;
	scanf("%d", &a);
	for (int i = 2; i <= a / 2; i++) {
		if (a % 2 == 0) {
			check = 1;
			break;
		}
	}

	if (a == 1) {
		printf("%d is neither a prime nor a non-prime",a);
		exit(1);
	}
	 if (check == 1) {
		return 0
	 } else {
		return 1;

	}
}

int main()
{
	long long int P, G, x, a, y, b, ka, kb;
	 scanf("%d",&P); // A prime number P is taken 
    	printf("The value of P : %lld\n", P);
      	if (check_prime(P)) {
	 scanf("%d", &a);

    	scanf("%d",&G); // A primitve root for P, G is taken 
    	printf("The value of G : %lld\n\n", G);  
  
    // Alice will choose the private key a  
    	scanf("%d",&a); // a is the chosen private key  
    	printf("The private key a for Alice : %lld\n", a); 
    	x = power(G, a, P); // gets the generated key 
      
    // Bob will choose the private key b 
    	scanf("%d",&b); // b is the chosen private key 
    	printf("The private key b for Bob : %lld\n\n", b); 
    	y = power(G, b, P); // gets the generated key 
  
    // Generating the secret key after the exchange 
        // of keys 
    	ka = power(y, a, P); // Secret key for Alice 
    	kb = power(x, b, P); // Secret key for Bob 
      
   	 printf("Secret key for the Alice is : %lld\n", ka); 
    	printf("Secret Key for the Bob is : %lld\n", kb); 

	}	


}
