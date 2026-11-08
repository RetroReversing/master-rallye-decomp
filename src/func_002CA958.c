
typedef void (*Handler)(void);
extern Handler D_00437E58;
extern Handler func_002ABA80(int);
extern void *func_002B1FC0(int);
extern void *func_003D4938(void*,const char*);
extern void func_003D4F40(void*);
extern char D_00439570[],D_00482588[];
void *func_002CA9B8(int n) {
 Handler h; void *p;
 do { h=D_00437E58; if(!h){func_003D4F40(func_003D4938(D_00439570,D_00482588));h=func_002ABA80(1);} h(); p=func_002B1FC0(n); }while(!p);
 return p;
}
s32 func_002CA958(s8 *s1,s8 *e1,s8 *s2,s8 *e2){
 s8 c1,c2;while(s1!=e1 && s2!=e2){c1=*s1;c2=*s2;if(c1<c2)return -1;if(c2<c1)return 1;s1++;s2++;}
 if(s2==e2)return s1!=e1;return -1;
}
s32 func_002CA8F0(s8 *s1,s8 *e1,s8 *s2,s8 *e2){
 s8 c1,c2;while(s1!=e1 && s2!=e2){c1=*s1;c2=*s2;if(c1<c2)return 1;if(c2<c1)return 0;s1++;s2++;}
 return s1==e1 && s2!=e2;
}
void func_002CA8C0(char*p){char*q=*(char**)(p+156);char*v=*(char**)q;((void(*)(void*,void*))*(void**)(v+44))(q+*(s16*)(v+40),q);}
