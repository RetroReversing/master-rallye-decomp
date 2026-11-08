extern void func_001D4040(void *, const char *);
extern void func_001E33C8(s32, void *, s32);
extern s32 func_001E3598(s32, void *);
extern void func_001E3EC0(s32, void *, s32);
extern void func_002623F0(s32, void *);
extern s32 func_00262838(void);
extern s32 func_002971B0(s32);
extern s32 func_002971F8(s32);
extern s32 func_00297500(void);
extern s32 func_003FA310(char *, const char *, ...);
extern char D_00445D98[], D_00446648[], D_004473C8[], D_00447508[], D_00447520[], D_00447538[];
typedef struct {s32 id; s32 pad[2]; s32 active;} UIItem;
s32 func_0011E2B8(UIItem *item, s32 sound) {
 s32 result=-1;
 s32 selected=func_002971B0(func_00297500());
 s32 event=func_002971F8(func_00297500());
 s32 manager=func_001E4280();
 union { char buffer[80]; struct {char key[16]; char name[64];} pos; } scratch;
#define key scratch.pos.key
 s32 enabled; s32 audio; const char *effect;
 func_001D4040(key,D_00445D98);
 enabled=func_001E3598(manager,key);
 switch(event) {
 case 4:
  if(item->active) {
   if((u32)(selected+1)<2) {
    result=-2;
    if(sound) {audio=func_00262838(); effect=D_00447508; goto play;}
   } else if(enabled) {
    char *name=scratch.pos.name;
    result=selected;
    func_003FA310(name,D_004473C8,item->id);
    {s32 config=func_001E4280(); func_001D4040(key,name); func_001E3EC0(config,key,selected);}
    {s32 config=func_001E4280(); func_001D4040(key,name); func_001E33C8(config,key,0);}
    if(sound) {audio=func_00262838(); effect=D_00447520; goto play;}
   } else if(sound) {audio=func_00262838(); effect=D_00446648;
play:func_001D4040(key,effect);func_002623F0(audio,key);}
  }
  break;
 case 5:
  if(item->active) {
   char *name=scratch.buffer; char key2[4];
   func_003FA310(name,D_004473C8,item->id);
   result=-3;
   {s32 config=func_001E4280();func_001D4040(key2,name);func_001E3EC0(config,key2,-1);}
   if(sound) {s32 audio=func_00262838();func_001D4040(key2,D_00447538);func_002623F0(audio,key2);}
  }
  break;
 case 7:result=-7;break;
 case 1:result=-6;break;
 case 2:result=-5;break;
 case 8:result=-9;break;
 case 3:result=-4;break;
 case 9:result=-8;break;
 }
 return result;
}
#undef key
