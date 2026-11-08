extern s32 func_00151930(void*);
extern void func_00151A28(void*,s32,u32,void*,s32);
extern void func_003FA310(void*,void*,s32);
extern s32 func_003FA9B8(void*);
extern void func_001D2CD8(void*,s32);
extern void func_001928F0(s32,s32,void*);
extern void func_00192998(s32,s32,s32);
extern void func_00192AF0(s32,s32,s32);
extern void func_00192A08(s32,s32,void*);
extern void func_00192D38(s32,s32,void*);
extern s32 func_00193B60(void);
extern s32 func_00196E10(void);
extern s32 func_00196730(s32,s32);
extern s32 func_001189C0(void);
extern void D_002AD390(void*);
extern void func_002B2028(void*);
extern char D_00444CB0[],D_00444CC0[];
extern u32 D_0040E618[];
extern u32 D_0040E658[];

typedef struct __attribute__((packed)) { u64 x[2]; } Blk;
typedef struct __attribute__((packed,aligned(4))) {int a,b,c,d,e,f,g,h;Blk block;int tail;} Record;

static inline void initkey(u32*buf,char*str){s32 v;if(D_0040E658[3])v=func_00151930(D_0040E658);else{D_0040E658[2]++;v=(s32)D_0040E658+16;}buf[0]=v;func_00151A28(buf,0,0xFFFFFFFFU,str,func_003FA9B8(str));}
static inline void initHandle(void*p,s32 v){func_001D2CD8(p,v);}
void func_00101D70(s32 a0, s32 arg1){
 u32 buf[76];
 s32 c52 = 52;
 initkey(buf,D_00444CB0);
 func_003FA310(&buf[4],D_00444CC0,arg1);
 {
  s32 len=func_003FA9B8(&buf[4]);
  s32 *vp=(s32*)buf[0];
  func_00151A28(buf,*(s32*)((char*)vp-0x10),0,&buf[4],len);
 }
 {
  s32 index=func_00196730(func_00196E10(),arg1);
  s32 base;
  s32 off;
  buf[68]=0;
  base=func_001189C0();
  off = index * c52;
  initHandle(&buf[68],*(s32*)(base+off+28));
  func_001928F0(func_00193B60(),arg1,&buf[68]);
  func_00192998(func_00193B60(),arg1,index);
  {
   s32 manager=func_00193B60();
   base=func_001189C0();
   func_00192AF0(manager,arg1,((Record*)base)[index].b);
  }
  func_00192A08(func_00193B60(),arg1,&buf[68]);
  {
   s32 manager=func_00193B60();
   base=func_001189C0();
   index=func_00196730(func_00196E10(),arg1);
   *(Blk*)&buf[72]=((Record*)base)[index].block;
   func_00192D38(manager,arg1,&buf[72]);
  }
 }
 D_002AD390((void*)buf[68]);
 {
  u32 *t4=(u32*)buf[0]-4;
  t4[2]=t4[2]-1;
  if(t4[2]!=0) return;
  if(t4[1]+0x10!=0){
   func_002B2028(t4);
  } else {
   u32 old=D_0040E618[-1];
   *(u32*)t4=old;
   D_0040E618[-1]=(u32)t4;
  }
 }
}
