/* identical to func_0028FCE8 (matched), with its names changed by decompdecomp */
extern char D_00470108[],D_00473ED0[],D_0044DCD8[];extern void func_001D4040(void*,const char*);extern void D_002AD390(void*);
void *func_00185838(s32*p){u32 n[4];func_001D4040(n,D_00470108);p[1]=n[0];p[0]=-1;p[2]=(s32)D_00473ED0;return p;}
void func_0028FD38(char*p,int f){*(void**)(p+8)=D_0044DCD8;if(f&1)D_002AD390(p);}
typedef struct {float x,y,z;} V3;
extern s32 func_001FDE60(void);extern s32 func_001FDBA8(s32,void*);extern void func_001FE768(void*,s32);extern void func_001FEA38(V3*,void*,V3*);extern void func_00289958(void*,void*);
void func_0028FC28(char*p,char*q){u32 t[4];V3 in,out;s32 a;if(func_001E3650(func_001E4280(),(s32)(p+80))<=0){a=func_001FDBA8(func_001FDE60(),p+12);if(a){float*v;func_001FE768(t,a);v=(float*)(*(char**)(q+80)+80);in.x=v[0];in.y=v[1];in.z=v[2];func_001FEA38(&out,t,&in);{V3*d=(V3*)(p+40);d->x=out.x;d->y=out.y;d->z=out.z;}func_00289958(p+16,q);}}}
void func_0028FBF8(char*p,void*q){char*v;*(s32*)(p+28)=*(s32*)(p+84);v=*(char**)(p+8);((void(*)(void*,void*))*(void**)(v+44))(p+*(s16*)(v+40),q);}
