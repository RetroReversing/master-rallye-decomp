void*D_002AD408(int);void func_001D4040(void*,const char*);void*func_00262BD8(void*,void*);void func_00262E20(void*,void*);int func_003FA310(char*,const char*,...);
extern char *D_0040E888;extern int D_004267AC,D_004267B0;extern char D_0044EC10[];
#define I(p,o) (*(int*)((char*)(p)+(o)))
#define F(p,o) (*(float*)((char*)(p)+(o)))
#define P(p,o) (*(char**)((char*)(p)+(o)))
void func_0015F4A8(char*p,char*q){
 int k[4];char text[32];void *mem=D_002AD408(112);char*t;
 func_001D4040(k,D_0040E888);P(p,12)=func_00262BD8(mem,k);I(P(p,12),12)|=16;
 {char*r=P(p,12);float f=F(p,20);I(r,8)=1;F(r,44)=f;}
 {float f=F(p,24);char*r=P(p,12);I(r,8)=1;F(r,40)=f;}
 I(P(p,12),28)=1;t=P(p,12);
 if(F(t,32)>=.05f)D_004267B0--;I(t,8)=1;F(t,32)=0;
 func_00262E20(P(p,12),q);t=P(p,12);
 if(!I(t,24)){if(F(t,32)>=.05f)D_004267B0++;D_004267AC++;}
 I(t,24)=1;*(s64*)(P(q,80)+112)&=(((long)(int)0xBFFFFFFF * 4)|3);
 func_003FA310(text,D_0044EC10);func_001D4040(p+16,text);I(q,0)&=~1;
}
