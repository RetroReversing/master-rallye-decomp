extern s32 func_00377638(void *,s32); extern s32 func_00376B40(void *,s32,s32,s32);
#define F(p,o) (*(s32*)((s8*)(p)+(o)))
void func_00377688(void*p){s32 i=14; s8 *a=p,*b=(s8*)p+0xf0; s8 **out; s8*item;
do{F(a,8)=(s32)b;i--;F(a,4)=0;b+=16;F(a,0)=0;F(a,0xf8)=0;F(a,0xf4)=(s32)a;F(a,0xf0)=0;a+=16;}while(i>=0);
F(p,0x1e8)=(s32)((s8*)p+0x1f0);F(p,0x1f4)=(s32)((s8*)p+0x1e0);out=(s8**)((s8*)p+0x141fc);F(p,0x1e4)=0;F(p,0x1e0)=0;item=(s8*)p+0x121dc;F(p,0x1f8)=0;i=0x7ff;F(p,0x1f0)=0;
do{*out=item;i--;out--;item-=0x24;}while(i>=0);
F(p,0x1c218)=func_00376B40(p,0,0,func_00377638(p,i));}
