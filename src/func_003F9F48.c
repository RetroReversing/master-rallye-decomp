typedef struct { u8 *p; s32 count; } ByteStream;
typedef struct { s32 error; u8 pad[0x1d0]; u32 *slots; } SlotState;
extern s32 func_003F9CB8(ByteStream *);
extern s32 func_004035E0(s32);
extern u32 *func_003F8A30(SlotState *, s32);
extern s32 D_0048D548;
s32 func_003F9E30(ByteStream *s) {
 if(func_003F9CB8(s)!=0) return -1;
 s->count--; return *s->p++;
}
s32 func_003F9E78(s32 *e,s32 a) {
 s32 r; D_0048D548=0; r=func_004035E0(a);
 if(r==0xFFFFFFFF) { if(D_0048D548) *e=D_0048D548; }
 return r;
}
s32 func_003F9ED8(SlotState *s) {
 s32 i; u32 *p;
 if(!s->slots) {
  s->slots=func_003F8A30(s,128);
  if(!s->slots) return -1;
  p=s->slots+31; i=31;
  do { *p=0; i--; p--; } while(i>=0);
 }
 return 0;
}
u32 func_003F9F48(SlotState *s,u32 index,u32 value) {
 u32 old;
 if(index>=32) {s->error=22;return 0xFFFFFFFF;}
 if(!s->slots) {if(func_003F9ED8(s)!=0) return 0xFFFFFFFF;}
 old=s->slots[index]; s->slots[index]=value; return old;
}
