#define F(p,t,o) (*(t*)((char*)(p)+(o)))
extern int func_003D9FC8(int,int,int,int);
extern int func_003DA068(int,int,int);
extern void func_003D4D70(int);
extern int func_003D4EA0(void **);
extern int func_003DA6B8(int);
void **func_003D3518(void **p,int a,int b) {
 if(func_003D9FC8(F(*p,int,0),a,b,1)==-1) F(*p,u8,26)|=4;
 return p;
}
void **func_003D34C8(void **p,int a) {
 if(func_003DA068(F(*p,int,0),a,1)==-1) F(*p,u8,26)|=4;
 return p;
}
int func_003D3568(void **p) {
 int r=func_003D9FC8(F(*p,int,0),0,1,1);
 if(r==-1) F(*p,u8,26)|=4;
 return r;
}
void **func_003D35C0(void **p,char *out) {
 int ok,r; void *s=*p;
 if(F(s,u8,26)) {ok=0;F(s,u8,26)|=2;}
 else {
 if(F(s,int,4)) func_003D4D70(F(s,int,4));
 ok=1;
 if((int)(F(*p,s64,16)&1)) ok=func_003D4EA0(p);
 }
 if(ok) {
 r=func_003DA6B8(F(*p,int,0));
 if(r==-1) F(*p,u8,26)|=3;
 else *out=r;
 }
 return p;
}
