extern int D_004883C0[];
#define F(p,t,o) (*(t*)((s8*)(p)+(o)))
void *func_003BFDD0(s8*p){volatile f32 x,y,z; f32 v; volatile f32*q=(volatile f32*)(p+24); x=0;F(p,volatile s32,0)=0;v=x;F(p,void* volatile,16)=D_004883C0;z=0;F(p,volatile s32,8)=0;F(p,volatile s32,12)=0;F(p,volatile s32,4)=0;F(p,volatile s32,20)=0;y=0;q[0]=v;q[1]=v;q[2]=z;q[4]=1.0f;q[3]=-1.0f;return p;}
typedef void*(*GetObjectFn)(void*);
extern void **func_001D6BB0(void);
extern s32 func_00200550(void*,void*,f32,f32);
extern void func_003B93F0(void*,s32);
void func_003BFEA0(s8*p,s32 arg){s8*o=*func_001D6BB0();s8*t=*(s8**)o;void*r=F(t,GetObjectFn,0x54)(o+F(t,s16,0x50));if(r && func_00200550(r,p+24,F(p,f32,36),1.0f) && F(p,f32,36)!=-1.0f)func_003B93F0(p,arg);}
s32 func_003BFF38(s8*a,s8*b,s8*c,s8*d){while(a!=b && c!=d){s8 x=*a,y=*c;if(x<y)return 1;if(y<x)return 0;a++;c++;}return a==b && c!=d;}
s32 func_003BFFA0(s8*a,s8*b,s8*c,s8*d){while(a!=b && c!=d){s8 x=*a,y=*c;if(x<y)return -1;if(y<x)return 1;a++;c++;}if(c==d)return a!=b;return -1;}
