typedef struct TaggedLocal { s32 name; union {s32 *i; f32 *f;} payload; s32 tag; unsigned b0:1; unsigned b1:1; unsigned b2:1; unsigned rest:29; s32 changes; s32 refs; s32 owner; } TaggedLocal;
extern s32 D_004922B8;
extern void func_001E5B20(TaggedLocal *);
extern void func_001E5C58(TaggedLocal *, TaggedLocal *, s32);
extern void *D_002AD408(s32) __attribute__((malloc));
void func_001E4ED0(TaggedLocal *p);
TaggedLocal *func_001E4CC8(TaggedLocal *p) {
p->refs=1; p->name=0; p->changes=0; p->payload.i=0; p->owner=D_004922B8; p->tag=12;
p->b0=0; p->b2=0; p->b1=0;
func_001E4ED0(p); return p;
}
void func_001E4ED0(TaggedLocal *p) {
p->name=0; func_001E5B20(p); p->tag=12; p->b0=0; p->b2=0; p->b1=0; p->refs=1; p->changes=0; p->owner=D_004922B8;
}
void func_001E4F38(TaggedLocal *p,s32 value) {
s32 *v;
if(p->tag!=0) {func_001E5C58(p,p,0); p->payload.i=D_002AD408(4); *p->payload.i=value;}
else {v=p->payload.i; if(*v!=value) {p->changes++; *v=value;}}
}
void func_001E4FB0(TaggedLocal *p,f32 value) {
if(p->tag!=1) {func_001E5C58(p,p,1); p->payload.f=D_002AD408(4); *p->payload.f=value;}
else {f32 *v=p->payload.f; if(*v!=value) {p->changes++; *v=value;}}
}
