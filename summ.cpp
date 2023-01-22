//Given n, take the sum of the digits of n. If that value has more than one digit, continue reducing in this way until a single-digit number is produced. The input will be a non-negative integer.

int digital_root(int n)
{
    int sum = 0;
    int rer =0;
    while(n>0){
      int rem = 0 ;
      rem = n%10;
      sum = sum + rem;
      n /= 10;
    }
    if (sum/10==0){
      return sum;
    }else{
    	return digital_root(sum);
      }
    }
    
