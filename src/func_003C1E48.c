extern s32 D_0042DCA8;
typedef void(*VisitFn)(void*,s32);
#define F(p,t,o) (*(t*)((s8*)(p)+(o)))
void func_003C1E48(s8*p,s32 arg,s32 index){s32*entry; s32 stamp;index*=4;entry=(s32*)((u32)F(p,s32*,40)+index);stamp=F(p,s32,52);if(*entry!=stamp){s8*o,*vt;*entry=stamp;o=*(s8**)((u32)F(p,s8**,24)+index);vt=F(o,s8*,16);F(vt,VisitFn,92)(o+F(vt,s16,88),arg);D_0042DCA8++;}}
