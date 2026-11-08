extern s32 func_001E4280(void);
extern s32 func_001E38C8(s32,void*);
extern s32 func_001E3598(s32,void*);
extern void func_002060F8(s32);
extern void func_00205CE0(s32,s32);
extern s32 func_00296710(void);
extern s32 func_00296530(s32,void*);
void func_0010C778(void *a0,void *a1){
 s32 v;
 void *p;
 if(func_00296530(func_00296710(),a1)==0) return;
 *(s32*)((char*)a0+0xC)=0;
 p=(char*)a0+0x10;
 if(func_001E38C8(func_001E4280(),p)!=0){
  *(s32*)((char*)a0+0xC) = (*(s32*)((char*)a0+0xC)!=0) | (func_001E3598(func_001E4280(),p)!=0);
 }
 p=(char*)a0+0x14;
 if(func_001E38C8(func_001E4280(),p)!=0){
  *(s32*)((char*)a0+0xC) = (*(s32*)((char*)a0+0xC)!=0) | (func_001E3598(func_001E4280(),p)!=0);
 }
 p=(char*)a0+0x18;
 if(func_001E38C8(func_001E4280(),p)!=0){
  *(s32*)((char*)a0+0xC) = (*(s32*)((char*)a0+0xC)!=0) | (func_001E3598(func_001E4280(),p)!=0);
 }
 v=*(s32*)((char*)a1+0x4C);
 func_002060F8(v);
 if(*(s32*)((char*)a0+0xC)!=0) func_00205CE0(v,*(s32*)((char*)a0+0x1C));
 else func_00205CE0(v,*(s32*)((char*)a0+0x20));
}
