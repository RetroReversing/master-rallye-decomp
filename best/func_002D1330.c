typedef struct Node {struct Node*next,*prev;}Node;extern void func_002B2028(void*);
void func_002D1330(Node **p){Node*n=(*p)->next;while(n!=*p){Node*q=n->next;func_002B2028(n);n=q;}(*p)->next=*p;(*p)->prev=*p;}
extern int D_002AD390(void*);extern int func_002CE730(int);
void func_002D13F0(int*p,int f){if(p[2]>=0){func_002CE730(p[2]);p[2]=-1;}if(f&1)D_002AD390(p);}
int func_002D1268(s8*a,s8*b,s8*c,s8*d){while(a!=b&&c!=d){s8 x=*a,y=*c;if(x<y)return 1;if(y<x)return 0;a++;c++;}return a==b&&c!=d;}
void func_002D1448(int*p,int*q,int a){int n=*q;p[3]=a;p[13]=n;p[9]=0;}
