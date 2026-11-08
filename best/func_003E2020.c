extern void func_003E16D0(void*,char*,int);
extern void func_003E2270(void*,int,int,int);
extern void func_003E6AB8(void*);
extern char D_00489BD0[];
#define I(p,o) (*(int*)((char*)(p)+(o)))
int func_003E2020(void *p,int n,int mode,int flags,int type){
int bit=flags&1, rem=n%I(p,0x12c),quo=n/I(p,0x12c); char *a,*b,*c,*d; void *v; int x=rem*16,y=quo*16;
if(bit){int idx=I(p,0x810);a=(char*)p+0x6c8;b=(char*)p+0x6c4;c=(char*)p+0x6c0;d=(char*)p+0x6b8;
while((*(volatile unsigned*)0x1000d400>>8)&1){} I(a,idx*320)=0;
}else{if((unsigned)(type-1)>=3){func_003E16D0(p,D_00489BD0,type);I(p,0x11c)=1;return 0;}
func_003E2270(p,x,y,flags);a=(char*)p+0x6c8;b=(char*)p+0x6c4;c=(char*)p+0x6c0;d=(char*)p+0x6b8;
while((*(volatile unsigned*)0x1000d400>>8)&1){} func_003E6AB8(p);I(a,I(p,0x810)*320)=1;}
if(mode==1&&(flags&2))I(b,I(p,0x810)*320)=mode;else I(b,I(p,0x810)*320)=0;
I(c,I(p,0x810)*320)=bit;
if(I(p,0x174)==3){v=*(void**)((char*)p+0x1c0);I(d,I(p,0x810)*320)=I(v,0)+(rem*I(v,16)+quo)*384;}
else{if(I(p,0x174)!=2)v=*(void**)((char*)p+0x1d0);else v=*(void**)((char*)p+0x1e0);I(d,I(p,0x810)*320)=I(v,0)+(rem*I(v,16)+quo)*384;}return 1;}
