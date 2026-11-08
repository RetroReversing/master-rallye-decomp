extern s32 func_001E4280(void);
extern void func_001D4040(void*,const char*);
extern s32 func_001E3598(s32,void*);
extern void func_001E3EC0(s32,void*,s32);
extern s32 func_00194C40(void);
extern s32 func_00193DE8(s32);
extern s32 func_00110830(void);
extern s32 func_00110430(void);
extern s32 func_00110378(s32);
extern void func_00100BF0(s32);
extern char D_004448D0[],D_00444AF0[],D_00444970[];

static inline void*keyinit(void*p,const char*s){func_001D4040(p,s);return p;}
void func_00100B08(s32 arg0){
  u32 buf[8];
  s32 r;
  r=func_001E4280();
  func_001D4040(buf,D_004448D0);
  if(func_001E3598(r,buf)){
    r=func_001E4280();
    func_001E3EC0(r,keyinit(buf+4,D_00444AF0),0x80);
  }
  if(func_00193DE8(func_00194C40())){
    func_00110830();
    func_00110378(func_00110430());
    r=func_001E4280();
    func_001D4040(buf,D_00444970);
    func_001E3EC0(r,buf,0x3E7);
    func_00100BF0(arg0);
  }
}
