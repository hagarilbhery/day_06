#include <stdio.h>
int main(){
	int x=1,y=2,z=3 ;
	int* p;
	int* q;
	int* r ;
	p=&x ;
	q=&y ;
	r=&z ;
	printf("value of : \nx=%d\ny=%d\nz=%d\np=%d\nq=%d\nr=%d\n*p=%d\n*q=%d\n*r=%d\n" , x,y,z,p,q,r,*p,*q,*r);
	printf("    *swapping pointrs*    \n");
	r=p;
	p=q;
	q=r;
	printf("x=%d\ny=%d\nz=%d\np=%d\nq=%d\nr=%d\n*p=%d\n*q=%d\n*r=%d\n" , x,y,z,p,q,r,*p,*q,*r);
}