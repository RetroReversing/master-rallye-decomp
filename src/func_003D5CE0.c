typedef char *va_list;
#define F(p,t,o) (*(t*)((char*)(p)+(o)))
int func_003D63E0(void*,int,int,int);
int func_003D5CE0(void*a,int b,int c,int d){return func_003D63E0(a,b,c,(signed char)d);}
int func_003DABF8(void*,void*);
typedef int (*DestroyFn)(void*,void*);
void func_003D5218(void *a){void*p=F(a,void*,0);void*v;
 if(F(p,int,0)&0x2000)func_003DABF8(p,p);
 else{v=F(p,void*,0x50);F(v,DestroyFn,0x5c)((char*)p+F(v,short,0x58),p);}
 F(a,void*,0)=0;F(a,char,0x1a)=4;
}
void func_003D4D70();
int func_003D4EA0(void**);
int func_003D6A38(int,int,va_list,void*);
void **func_003D68D0(void **a,int fmt,...){va_list ap;int ok;void*s=*a;
 ap=__builtin_saveregs();
 if(F(s,u8,26)){ok=0;F(s,u8,26)|=2;}
 else{if(F(s,int,4))func_003D4D70(F(s,int,4));ok=1;if((int)(F(*a,s64,16)&1))ok=func_003D4EA0(a);}
 if(ok)func_003D6A38(F(*a,int,0),fmt,ap,*a);
 return a;
}
extern void *D_004404DC;
int func_003F74F8(int);
void func_003D5050(void **a){if(F(*a,s64,16)&0x2000)func_003D4D70();
 if(F(*a,s64,16)&0x4000){func_003F74F8(F(D_004404DC,int,8));func_003F74F8(F(D_004404DC,int,12));}
}
