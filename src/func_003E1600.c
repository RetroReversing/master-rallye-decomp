extern int func_003F9698(char*,char*);extern char D_00489AA8[];
extern int func_003FA310(char*,char*,...);extern int func_003E0EA0(int,void*);
extern int func_0040AF58(void);extern int func_0040AFA0(void);extern int func_003F28C8(int,int);
#define I(p,o) (*(int*)((char*)(p)+(o)))
#define R(a) (*(volatile unsigned*)(a))
void func_003E1600(void*p){I(p,0x818)=1;I(p,0x1b0)=0;func_0040AF58();
R(0x1000f590)=R(0x1000f520)|0x10000;R(0x1000b000)=0;R(0x1000b400)=0;R(0x1000d400)=0;*(unsigned*)0x1000f590=R(0x1000f520)&0xfffeffff;func_0040AFA0();R(0x1000b020)=0;R(0x1000b420)=0;R(0x1000d420)=0;R(0x10002010)=0x40000000;func_003F28C8(0,0);
}
