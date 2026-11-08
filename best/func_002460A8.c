typedef struct V {char*b,*e,*c;} V;
typedef struct VV {V*b,*e,*c;} VV;
typedef struct Pool {int x; V free,used;} Pool;
extern Pool D_004264C0,D_00426548,D_004265E8,D_00426630,D_00426728,D_00426750,D_00426778;
extern float D_004264A8[];
extern u32 D_0040E618[];
extern int func_003F93CC(void*,void*,int);extern void func_002B2028(void*),func_002719C0(void*),func_00271A28(void*),func_00273390(void*);
extern void *func_002B1FC0(int),*func_003D2910(int);
extern void func_00275DB8(void*,void*,int,void*);
extern void func_0026FE08(void*,void*,void*),func_001CB098(void*,void*,void*),func_002731D0(void*,void*,void*),func_00276320(void*,void*,void*),func_001CAD18(void*,void*,void*),func_001CAED8(void*,void*,void*),func_001CAB58(void*,void*,void*);
static inline void clear(V*v){char*e=v->e,*b=v->b;func_003F93CC(b,e,0);{char *end=v->e;v->e=end-(e-b);}}
static inline void destroy(V*v){u32*b=(u32*)v->b;int n=(v->c-v->b)>>2;if(n){if(n*4)func_002B2028(b);else{*b=D_0040E618[-1];D_0040E618[-1]=(u32)b;}}}
static inline void clearvv(VV*v){V*b=v->b,*e=v->e;int d=(char*)e-(char*)b;for(;b!=e;++b)destroy(b);v->e=(V*)((char*)v->e-d);}
static inline void resizevv(VV*v,u32 n){V zero;u32 size=v->e-v->b;zero.b=0;zero.e=0;zero.c=0;if(n<size){V*b=v->b+n,*e=v->e;int d=(char*)e-(char*)b;for(;b<e;b++)destroy(b);v->e=(V*)((char*)v->e-d);}else func_00275DB8(v,v->e,n-size,&zero);destroy(&zero);}
#define PUSH(P,F,O) {char*e=(P).free.e;if(e!=(P).free.c){if(e)*(void**)e=O;(P).free.e+=4;}else F(&(P).free,e,&O);}
void func_002460A8(char*p){
char *o0,*o1,*o2,*o3,*o4,*o5,*o6,*q; V *v;
clear((V*)(p+12));clear((V*)(p+24));
clearvv((VV*)(p+36));resizevv((VV*)(p+36),*(u32*)(p+68));
clear((V*)(p+48));clearvv((VV*)(p+76));resizevv((VV*)(p+76),*(u32*)(p+108));
clear((V*)(p+88));clear((V*)(p+116));clear((V*)(p+128));clear((V*)p);
{VV*w=(VV*)(p+140);V*b=w->b,*e=w->e;int d=(char*)e-(char*)b;for(;b<e;b++){char*t;for(t=b->b;t<b->e;t+=20){} {int n=(b->c-b->b)/20;if(n){if(n*20)func_002B2028(b->b);else{*(u32*)b->b=D_0040E618[-1];D_0040E618[-1]=(u32)b->b;}}}}w->e=(V*)((char*)w->e-d);}
while(D_004264C0.used.b!=D_004264C0.used.e){D_004264C0.used.e-=4;o0=*(char**)D_004264C0.used.e;*(int*)(o0+16)=-1;PUSH(D_004264C0,func_0026FE08,o0);}
while(D_00426548.used.b!=D_00426548.used.e){D_00426548.used.e-=4;o1=*(char**)D_00426548.used.e;PUSH(D_00426548,func_001CB098,o1);}
while(D_004265E8.used.b!=D_004265E8.used.e){D_004265E8.used.e-=4;o2=*(char**)D_004265E8.used.e;*(int*)o2=0;*(int*)(o2+4)=0;*(int*)(o2+24)=0;*(int*)(o2+28)=0;*(char**)(o2+32)=o2;*(int*)(o2+36)=0;PUSH(D_004265E8,func_002731D0,o2);}
while(D_00426630.used.b!=D_00426630.used.e){D_00426630.used.e-=4;o3=*(char**)D_00426630.used.e;func_00273390(o3);clear((V*)(o3+4));v=(V*)(o3+4);if((u32)((v->c-v->b)>>2)<8){int n=(v->e-v->b)>>2;q=func_002B1FC0(32);if(!q)q=func_003D2910(32);func_003F93CC(q,v->b,n*4);destroy(v);v->c=q+32;v->e=q+n*4;v->b=q;}clear((V*)(o3+16));PUSH(D_00426630,func_00276320,o3);}
while(D_00426728.used.b!=D_00426728.used.e){D_00426728.used.e-=4;o4=*(char**)D_00426728.used.e;*(int*)o4=0;*(int*)(o4+4)=0;*(int*)(o4+24)=0;*(int*)(o4+28)=0;*(int*)(o4+32)=0;*(int*)(o4+36)=0;*(int*)(o4+40)=0;*(int*)(o4+44)=0;*(int*)(o4+48)=0;*(int*)(o4+68)=0;PUSH(D_00426728,func_001CAD18,o4);}
while(D_00426750.used.b!=D_00426750.used.e){D_00426750.used.e-=4;o5=*(char**)D_00426750.used.e;func_002719C0(o5);func_00271A28(o5+4);*(int*)(o5+48)=0;*(int*)(o5+52)=0;*(int*)(o5+44)=0;func_00271A28(o5+60);func_002719C0(o5+56);PUSH(D_00426750,func_001CAED8,o5);}
while(D_00426778.used.b!=D_00426778.used.e){D_00426778.used.e-=4;o6=*(char**)D_00426778.used.e;*(int*)o6=0;*(int*)(o6+4)=-1;*(int*)(o6+8)=-1;*(int*)(o6+12)=0;*(int*)(o6+16)=0;*(float*)(o6+20)=D_004264A8[0];*(float*)(o6+24)=D_004264A8[1];*(float*)(o6+28)=D_004264A8[2];*(float*)(o6+32)=D_004264A8[3];*(int*)(o6+36)=((int*)D_004264A8)[4];PUSH(D_00426778,func_001CAB58,o6);}
}
