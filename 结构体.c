#include <stdio.h>

struct point{
	int x;
	int y;
};
struct point *getStruct(struct point*);
void output(struct point);
void print(const struct point *p);

int main(){
	struct point y={0,0};
	getStruct(&y);
	output(y);
	output(*getStruct(&y));
}

struct point *getStruct(struct point *p){
	scanf("%d",&p->x);
	scanf("%d",&p->y);
	printf("%d,%d\n",p->x,p->y);
	return p;
} 

void output(struct point p){
	printf("%d,&d\n",p.x,p.y);
}

void print(const struct point *p){
	printf("%d,%d\n",p->x,p->y);
}
