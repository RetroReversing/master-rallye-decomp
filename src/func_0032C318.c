/* identical to func_002C5E28 (matched), with its names changed by decompdecomp */
extern void func_002C6AF8(void*,s32);
void func_002C5DC8(s8*p,s8*e,s32 v){while(p!=e){func_002C6AF8(p,v);p+=8;}}
typedef struct {u16 a,pad;s32 id;} Ref;
typedef struct{s32 a,count;} RC;
typedef struct{s32 map;s32 pad[8];s32 refs;} Pool;
extern Pool D_004262D0;
Ref*func_0032C318(Ref*p,s32 n,Ref*v){while(n){if(p){s32 id;p->a=v->a;id=v->id;p->id=id;if(id>=0){s32 off=id*4;RC*r=(RC*)(D_004262D0.refs+(*(s32*)(D_004262D0.map+off)*8));r->count++;}}n--;p++;}return p;}
typedef struct{u8 data[24];}Item;
Item*func_002C5160(Item*p,Item*e,Item*q){while(p!=e){if(q)*q=*p;p++;q++;}return q;}
s32*func_002C50A0(s32*p,s32*e,s32*q){while(p!=e){if(q)*q=*p;p++;q++;}return q;}
