#include <stdio.h>

int main() {
   
   int n,c,s=0,r;

    printf("Enter a string: ");
    scanf("%d",&n);  
    c=n;
  while(n>0)
  {
  	r=n%10;
  	s=r+(s*10);
  	n=n/10;
  }

    if (c==s) {
        printf("  palindrome\n");
    } else {
        printf(" not a palindrome\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, flag = 0;

    printf("Enter a string: ");
    gets(str);  

    
    while (str[length] != '\0') {
        length++;
    }

   
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }

    return 0;
}
