typedef struct{float x,y;int z,w;}Value;
extern int func_001D6E40(void);extern char*func_001D6DF8(int,int);
extern int func_001E3598(int,int*);extern int D_0049AF18,D_0049AF20;
extern int func_002C8160(void*,int),func_002C81C0(void*,int),func_002C8218(void*,int),func_002C8270(void*,int);
static inline int key(char*p,int off){char*v=*(char**)p;return (*(int(**)(void*))(v+off+4))(p+*(s16*)(v+off));}
static inline int button(char*p,int n){char*v=*(char**)p;return (*(int(**)(void*,int))(v+12))(p+*(s16*)(v+8),n);}
static inline int active(char*p){return *(int*)(p+4)^1;}
static inline void poll(char*p,Value*out){float x,y;
 if(key(p,0x20)||func_002C81C0(p,0)){x=-1.0f;goto storex;}
 if(key(p,0x28)||func_002C8218(p,0)){x=1.0f;storex:out->x=x;}
 if(key(p,0x30)||func_002C8270(p,0)){y=-1.0f;goto storey;}
 if(key(p,0x18)||func_002C8160(p,0)){y=1.0f;storey:out->y=y;}
 if(button(p,2))out->z=1;if(button(p,0))out->w=1;
}
void func_002CC5D8(void*unused,Value*out){char*a,*b;int one=1,two=1;
 out->x=0.0f;out->y=0.0f;out->z=0;out->w=0;
 a=func_001D6DF8(func_001D6E40(),0);b=func_001D6DF8(func_001D6E40(),1);
 if(func_001E3598(func_001E4280(),&D_0049AF18)){if(func_001E3650(func_001E4280(),(int)&D_0049AF20)==1)one=0;else two=0;}
 if(one&&active(a))poll(a,out);
 if(two&&active(b))poll(b,out);
}
