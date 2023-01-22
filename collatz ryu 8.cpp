//The Collatz conjecture (also known as 3n+1 conjecture) is a conjecture that applying the following algorithm to any number we will always eventually reach one:
	int hotpo(int n){
	int count = 0;
	int result = 0;
	if(n==0){
		return 0;
	}
	while(n!=1){
		if (n%2==0){
		n = n/2;
		count++;
		continue;
		}
		else {
		n = 3* n + 1;
		count++;
		continue ;
		}
	}
	return count;
}
