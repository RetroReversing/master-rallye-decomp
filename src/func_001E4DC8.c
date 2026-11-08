extern s32 D_00426384, D_00492270, D_00426380, D_00492230;
typedef struct {s32 unk; void *value; s32 type;} Value;
void *func_001E4DC8(Value *p) {
 if (!D_00426384) {D_00492270=0; D_00426384=1;}
 if(p->type==4) return p->value;
 return &D_00492270;
}
void *func_001E4D90(Value *p) {
 if (!D_00426380) D_00426380=1;
 if(p->type==3) return p->value;
 return &D_00492230;
}
s32 func_001E4D70(Value *p) {
 if(p->type==10) return (s32)p->value;
 return 0;
}
extern void func_001E5AA8();
void *func_001E4D40(void *p) {
 *(s32*)p=0; *(s32*)((char*)p+24)=0;
 func_001E5AA8();
 return p;
}
