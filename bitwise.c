#include <stdio.h>
#include "bitops.h"
#include "bitwise_fun.c"
void main()
{
        int a,b,k,s,l;
        printf("Enter the Number :\n");
        scanf("%d",&a);
	display(a);
	printf("Press the following anyone\n1.Setbit\n2.Clearbit\n3.Set & Clear bits\n4.set bulk bits \n5.clear bulk bits\n6.cToggle bulk bits\n7.Rotate the bits\n8.Reverse\n9.Calculate bit length\n10.Count the Set bits\n11.Calculate Parity\n12.Trailing Zeros\n13.swap nibble\n14.Copy bits\n15.divide by 2\n16.multiply by 2\n17. Search bit Pattern\n18.Endian Formate\n19.Scale8to16\n20.Log base 2\n21.Absolute value\n");
	scanf("%d",&s);
	switch(s) {
		case 1:
			printf("Enter the Set bit pos:\n");
			scanf("%d",&k);
			printf("Set bit is: %d\n",b=set(a,k));
			display(b);
			break;
		case 2:
			printf("Enter the Clear bit pos:\n");
			scanf("%d",&k);
			printf("Clear bit is :%d\n",b=clear(a,k));
			display(b);
			break;
		case 3:
			printf("Enter the Set & Clear bits pos:\n");
			scanf("%d%d",&k,&l);
			printf("Set & Clear bits :%d\n",b=setandclear(a,k,l));
			display(b);
			break;
		case 4:
			printf("Enter the Offset and Length values:\n");
			scanf("%d%d",&k,&l);
			printf("Set bits are :%d\n",b=setoffsetlength(a,k,l));
			display(b);
			break;
                case 5:
                        printf("Enter the Offset and Length values:\n");
                        scanf("%d%d",&k,&l);
                        printf("Clear bits are :%d\n",b=clearoffsetlength(a,k,l));
                        display(b);
			break;
                case 6:
                        printf("Enter the Offset and Length values:\n");
                        scanf("%d%d",&k,&l);
                        printf("Toggle bits are :%d\n",b=toggleoffsetlength(a,k,l));
                        display(b);
			break;
		case 7:
                        printf("Rotate the bits Length :\n");
                        scanf("%d%d",&k,&l);
                        printf("Rotate the  bits are :%d\n",b=rotate(a,k,l));
                        display(b);

			break;
		case 8:
			printf("reverse the bits of a variable :%d\n",b=reverse(a));
			display(b);
			break;
		case 9:
			calbitlength(a);
			break;
		case 10:
			countbits(a);
			break;
		case 11:
			calparity(a);
			break;
		case 12:
			trailingzeroes(a);
			break;
		case 13:
			swapnibble(a);
			break;
		case 14:
			printf("Enter  nth bit to mth bit  values:\n");
	                scanf("%d%d",&k,&l);
            		printf("Copy nth bit to mth bit  are :%d\n",b=copybits(a,k,l));
            		display(b);
			break;
		case 15:
			divideby2(a);
			break;
		case 16:
			multiplyby2(a);
			break;
		case 17:
			printf("%d\n",b=searchpatten(a));
			display(b);
			break;
		case 18:
			convertendian(a);
			break; 
		case 19:
			scale8to16(a);
			break;
		case 20:
			logbase2(a);
			break;
		case 21:
			absolutevalue(a);
			break;
		default:
			printf("hello\n");
			break;
	}
}

