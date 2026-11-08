typedef struct RallyVec { float x,y,z; } RallyVec;
extern void *func_00168350(s32);
extern s32 func_001D5F70(void);
extern s32 func_001D5EB0(s32,s32,s32);
RallyVec *func_00168B08(RallyVec *out,s32 id) {
 RallyVec *v=(RallyVec *)((char *)func_00168350(id)+0x34);
 float x=v->x,y=v->y,z=v->z;
 out->x=x;out->y=y;out->z=z;return out;
}
RallyVec *func_00168AC0(RallyVec *out,s32 id) {
 RallyVec *v=(RallyVec *)((char *)func_00168350(id)+0x28);
 float x=v->x,y=v->y,z=v->z;
 out->x=x;out->y=y;out->z=z;return out;
}
s32 func_00168B50(void *p) {
 if (*(s32 *)((char *)p+0x60)==-1)
 *(s32 *)((char *)p+0x60)=func_001D5EB0(func_001D5F70(),0,3);
 return *(s32 *)((char *)p+0x60);
}
s32 func_00168AA0(s32 id) {return *(s32 *)((char *)func_00168350(id)+0x24);}
