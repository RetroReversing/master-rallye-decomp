extern s32 D_004404DC;
extern s32 D_0048D548;
extern void func_003FB6C0(void *);
extern s32 func_004034A8(s32,s32,s32);
extern s32 func_004035C8(s32);
extern s32 func_004019E0(s32,s32);
typedef struct { s8 *p; s32 x4; s32 count; s16 flags; s16 fd; s8 *base; s32 size; s8 pad[0x3c]; s32 data; s32 tail[2]; } LocalFile;
void func_003FDAF0(s8 *arg0) {
 LocalFile f;
 f.flags=0x208;
 f.base=arg0;
 f.size=0x7fffffff;
 f.data=D_004404DC;
 f.p=arg0;
 f.count=0x7fffffff;
 func_003FB6C0(&f);
 *f.p=0;
}
s32 func_003FDB48(s32 *arg0,s32 a,s32 b,s32 c) {
 s32 r;
 D_0048D548=0;
 r=func_004034A8(a,b,c);
 if(r==-1) {if(D_0048D548!=0) *arg0=D_0048D548;}
 return r;
}
s32 func_003FDCB8(s32 a) {return func_004019E0(a,0);}
s32 func_003FDCD8(s32 *arg0,s32 a) {
 s32 r;
 D_0048D548=0;
 r=func_004035C8(a);
 if(r==-1) {if(D_0048D548!=0) *arg0=D_0048D548;}
 return r;
}
