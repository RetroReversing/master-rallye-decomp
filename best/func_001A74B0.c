extern void func_001D4040(void*,const char*);
extern char D_004728B0[],D_00473C50[],D_0040E6A0[],D_0044DCD8[],D_00472910[],D_00473328[],D_00472748[],D_00472758[],D_004733E8[];
extern void D_002AD390(void*);
extern void func_001E3EC0(int,void*,int);
#define W(p,o) (*(int*)((char*)(p)+(o)))
#define F(p,o) (*(float*)((char*)(p)+(o)))
void func_001A7108(void*p,int f){W(p,8)=(int)D_00473C50;func_001E3EC0(func_001E4280(),D_0040E6A0,128);W(p,8)=(int)D_0044DCD8;if(f&1)D_002AD390(p);}
void *func_001A70B0(void*p){int k[4];func_001D4040(k,D_004728B0);W(p,4)=k[0];W(p,0)=-1;W(p,8)=(int)D_00473C50;W(p,12)=0;W(p,16)=0;return p;}
void *func_001A74B0(void*p,int a,int b){int k[4];func_001D4040(k,D_00472910);W(p,4)=k[0];W(p,0)=-1;W(p,8)=(int)D_00473328;F(p,16)=(float)a;F(p,20)=(float)b;W(p,40)=10;W(p,56)=1;W(p,52)=1;W(p,60)=0;W(p,64)=0;return p;}
void *func_001A5F40(void*p){int k[4],l[4];func_001D4040(k,D_00472748);W(p,40)=0;W(p,32)=0;W(p,36)=0;W(p,48)=0;W(p,52)=0;W(p,56)=0;W(p,60)=0;W(p,64)=0;W(p,4)=k[0];W(p,0)=-1;W(p,8)=(int)D_004733E8;W(p,68)=1;func_001D4040(l,D_00472758);W(p,40)=l[0];return p;}
