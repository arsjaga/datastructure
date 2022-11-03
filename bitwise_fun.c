#include "bitops.h"
int set(int a,int k) {
	return (a | 1<<k);
}
int clear(int a,int k) {
	return (a & ~(1<<k));
}
int setandclear(int a,int k,int l) {
	a = (a&(~(1<<l))); 
	a = (a|(1<<k));
	return a;
}
int setoffsetlength(int a,int k,int l) {
	for(int i=k;i<=k+l;i++)
		a=(a | 1<<i);
	return a;
}
int clearoffsetlength(int a,int k,int l) {
        for(int i=k;i<=k+l;i++)
                a=(a & ~(1<<i));
        return a;
}
int toggleoffsetlength(int a,int k,int l) {
        for(int i=k;i<=k+l;i++)
                a=(a ^ 1<<i);
        return a;
}

int rotate(int a,int k,int l) {
	int p,q,i,j;
	for(i=k,j=l;i<j;i++,j--) {
		p = a & 1<<i;
		q = a & 1<<j;
		if(p!=q) {
			a=a^1<<i;
			a=a^1<<j;
		}
	}
	return a;
}

int reverse(int a) {
	int p,q,i,j;
	for(i=0,j=31;i<j;i++,j--) {
		p = a & 1<<i;
		q = a & 1<<j;
		if(p!=q) {
			a=a^1<<i;
			a=a^1<<j;
		}
	}
	return a;
}
int calbitlength(int a) {
	int count=0,b;
	for(int i=31;i>=0;i--) {
		b=(a>>i)&1;
	if(b==1) {
		count++;
		if(count==1)
			printf("Bit length=%d\n",i+1);
	}
	}
}
int countbits(int a) {
        int count=0,b;
        for(int i=31;i>=0;i--) {
                b=(a>>i)&1;
        if(b==1) {
                count++;
        }
        }
	printf("Count the Bits set:%d\n",count);
}
int calparity(int a) {
        int count=0,b;
        for(int i=31;i>=0;i--) {
                b=(a>>i)&1;
        if(b==1) {
                count++;
        }
        }
        //printf("Count the Bits set:%d\n",count);
	if(count%2==0)
		printf("Even Parity of the Variable\n");
	else
		printf("ODD parity of the Variable\n");
}

int trailingzeroes(int a)
{
int b,count=0;
for(int i=7;i>=0;i--) {
	if((a & 1)==1)
		break;
	else {
		count++;
		a=a>>1;
	}
}
printf("count=%d\n",count);

}
int swapnibble(int a) {
	int p,q,i,j;
	for(i=0,j=4;i<4;i++,j++) {
		p=a >> i & 1;
		q= a >> j & 1;
		printf("p=%d q=%d\n",p,q);
		if(p != q) {
			a=a^1<<i;
			a=a^1<<j;
		}
	}
	display(a);
}

int copybits(int a,int k,int l) {
	int i,b=0;
	for(i=l;i>=k;i--) 
		b|=a&1<<i;
	return b;
}
int divideby2(int a) {
	int b;
	b=a>>1;
	printf("%d\n",b);
	display(b);
}
int multiplyby2(int a) {
        int b;
        b=a<<1;
        printf("%d\n",b);
        display(b);
}
int searchpatten(int a) {
	int i,j,b,k,l,m,x,y;
	printf("Enter the offset and length value:\n");
	scanf("%d%d",&k,&l);
	printf("Enter the Data value:\n");
	scanf("%d",&m);
	for(i=k,j=0;i<=k+l;i++,j++) {
		x=(a>>i) & 1;
		y=(m>>j) & 1;
		if(x!=y)
			a=a^(1<<i);
	}
	return a;
}

int scale8to16(int a) {
	a=(a<<8)|a;
	display(a);
	}
int convertendian(int a) {
	int b,c,d,e,result;
	b=(a&0x000000FF)>>0;
        c=(a&0x0000FF00)>>8;
        d=(a&0x00FF0000)>>16;
        e=(a&0xFF000000)>>24;
        b<<=24;
        c<<=16;
        d<<=8;
        e<<=0;
        result=(b|c|d|e);
        printf("%d\n",result);
        display(result);
}

int logbase2(int a) {
	int i,b,count=0;
	for(i=0;i<=31;i++) {
		if(a>>i&1) {
			count++;
			b=i;
		}
	}
	if(count==1) {
		printf("Logbase 2 is Successfully\n");
		printf("%d is logbase 2 of 2^%d\n",a,b);
	}
	else
		printf("Logbase 2 is Fail\n");
}
int absolutevalue(int a) {
	int b,c;
	b=a>>31;
	c=(b+a)^b;
	printf("%d\n",c);
	display(c);
}

int revdisplay(int a) {
        for(int i=0;i<=31;i++)
                printf("%d",(a>>i)&1);
        printf("\n");
	return a;
}

int display(int a) {
	for(int i=31;i>=0;i--)
		printf("%d",(a>>i)&1);
	printf("\n");
}
