extern s32 func_00151930(void*);
extern void func_00151A28(void*,u32,u32,void*,u32);
extern void func_003FA310(void*,void*,s32);
extern s32 func_003FA9B8(void*);
extern void func_001D2CD8(void*,s32);
extern void func_001928F0(s32,s32,void*);
extern void func_00192A08(s32,s32,void*);
extern void func_00192D38(s32,s32,void*);
extern s32 func_00192398(s32,s32);
extern s32 func_00193B60(void);
extern s32 func_001189C0(void);
extern void D_002AD390(void*);
extern void func_002B2028(void*);
extern char D_00444CB0[],D_00444CC0[];
extern u32 D_0040E618[];
extern u32 D_0040E658[];

typedef struct __attribute__((packed)) { u64 x[2]; } Blk;
typedef struct __attribute__((packed)) {char pad[32];Blk data;char tail[4];} Entry;

static inline void initstr(u32*out,char*name){s32 var3; if(D_0040E658[3]!=0){
  var3=func_00151930(D_0040E658);
 } else {
  var3=(s32)D_0040E658+0x10;
  D_0040E658[2]=D_0040E658[2]+1;
 }
 *out=var3;
 func_00151A28(out,0,-1,name,func_003FA9B8(name));}
static inline void initHandle(void*p,s32 v){func_001D2CD8(p,v);}
void func_00101B80(s32 a0,s32 arg1,s32 arg2){
 struct __attribute__((aligned(16))) {u32 value;} str;char text[256];struct __attribute__((aligned(16))) {u32 value;} handle;Blk block;
 s32 var3,t16,idx;
 initstr(&str.value,D_00444CB0);
 func_003FA310(text,D_00444CC0,arg1);
 {
  s32 len=func_003FA9B8(text);
  s32 *vp=(s32*)str.value;
  func_00151A28(&str.value,*(s32*)((char*)vp-0x10),0,text,len);
 }
 handle.value=0;
 t16=func_001189C0();
 idx=func_00192398(func_00193B60(),arg1);
 initHandle(&handle,*(s32*)((char*)(t16+idx*0x34)+0x1C));
 func_001928F0(func_00193B60(),arg1,&handle);
 func_00192A08(func_00193B60(),arg1,&handle);
 {
  s32 t16b=func_00193B60();
  s32 t17=func_001189C0();
  s32 idx2=func_00192398(func_00193B60(),arg1);
  block=((Entry*)t17)[idx2].data;
  func_00192D38(t16b,arg1,&block);
 }
 D_002AD390((void*)handle.value);
 {
  u32 *t4=(u32*)str.value-4;
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
