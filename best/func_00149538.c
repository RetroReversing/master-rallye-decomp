extern void*func_0017E620(void);extern s32 func_001E3598(s32,void*);
extern void func_002060F8(void*),func_002062A8(void*,void*),func_002063A0(void*,void*);
extern s32 func_00206588(void*);extern void func_002068C0(s32,s32,s32*,s32*);
extern float func_003F3978(float,float);
#define W(p,o) (*(s32*)((char*)(p)+(o)))
#define F(p,o) (*(float*)((char*)(p)+(o)))
typedef struct{float x,y,z,w;} V4;
typedef struct{float x,y,z;} V3;
static inline void cp4(V4*d,V4*s){d->x=s->x;d->y=s->y;d->z=s->z;d->w=s->w;}
static inline void cp3(V3*d,V3*s){d->x=s->x;d->y=s->y;d->z=s->z;}
static inline void set4(V4*d,float x,float y,float z,float w){V4 v;v.x=x;v.y=y;v.z=z;v.w=w;cp4(d,&v);}
static inline void ident(char*m){set4((V4*)m,1,0,0,0);set4((V4*)(m+16),0,1,0,0);set4((V4*)(m+32),0,0,1,0);set4((V4*)(m+48),0,0,0,1);}
void func_00149538(char*p,char*q){union{V4 v;V3 v3;}t;V4 zero,col; s32 width,height;char*d,*m,*o,*vt;s32 flag,n,sel,prev,k;float frac,f,a,b,s,c,r;
if((func_001E3650(func_001E4280(),(s32)(p+60))^3)!=0)return;
d=*(char**)(q+76);if(!d)return;
switch(W(p,16)){
case 0:
func_002060F8(d);flag=0;if(W(p,28)){flag=1;prev=func_001E3598(func_001E4280(),p+56);if(func_001E3650(func_001E4280(),(s32)(p+64))!=1)flag=!prev;}
o=func_0017E620();vt=*(char**)o;sel=((s32(*)(void*,s32,s32))*(void**)(vt+44))(o+*(s16*)(vt+40),W(p,20),flag);
func_002062A8(d,p+68);width=0;height=0;func_002068C0(func_00206588(d),sel,&width,&height);
F(p,40)=(float)width*0.5f;F(p,36)=(float)height*0.5f;
t.v3.x=0;t.v3.y=0;t.v3.z=0;func_002063A0(d,&t.v3);
vt=*(char**)d;((void(*)(void*,s32))*(void**)(vt+20))(d+*(s16*)(vt+16),sel);
W(&zero,0)=0;W(&zero,4)=0;W(&zero,8)=0;W(&zero,12)=0;cp4((V4*)(d+16),&zero);W(d,136)++;W(p,16)++;break;
case 1:
n=W(p,24);if(n<=15){
frac=(float)n/(float)15;f=func_003F3978(1.0f-frac,1.9f);
b=f*50.0f;a=f*200.0f*F(p,32);
n=W(p,24);if(n<=5)c=((float)n/5.0f)*0.66666662693023681640625f;else c=(1.0f-(((float)n-5.0f)/10.0f))*0.3333333432674407958984375f;
s=(c*0.20000000298023223876953125f+1.0f)*(1.0f-f);m=d+32;ident(m);F(m,0)=s;F(m,20)=s;F(m,40)=s;
t.v3.x=F(p,44);t.v3.y=F(p,48);t.v3.z=F(p,52);t.v3.x=t.v3.x-F(p,40)*s+a;t.v3.y+=b;cp3((V3*)(m+48),&t.v3);F(m,60)=1;
col.x=1;col.y=1;col.z=1;col.w=frac;cp4((V4*)(d+16),&col);goto inc;
}else{W(p,24)=0;W(p,16)=2;}break;
case 2:
n=W(p,24);if(n>=61){W(p,24)=0;break;}
if(n>0)k=n/30;else k=0;r=(float)n-30.0f*(float)k;
if(k&1)r=1.0f-(30.0f-r)/30.0f;else r=(30.0f-r)/30.0f;
t.v.x=1;t.v.y=1;t.v.z=1;t.v.w=1;t.v.w=((float(*)(float,float,float))func_0015ACE0)(r+0.5f,0,1);cp4((V4*)(d+16),&t.v);
inc: W(d,136)++;W(p,24)++;break;
}}
