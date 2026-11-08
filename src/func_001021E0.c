extern s32 func_00296710(void),func_00296530(s32,void*),func_00297500(void),func_002971B0(s32);
extern void func_001D4040(void*,const char*),func_0029FA58(void*,void*,s32);
extern char D_00444D28[];
typedef struct{char pad[120];s64 flags;}Mat;
typedef struct{int a,key;}Button;
typedef struct{char pad[4];Button*button;char pad2[68];Mat*mat;char pad3[36];int id;}Target;
typedef struct{char pad[12];int key,index,timer,filter,gate;}Obj;
void func_001021E0(Obj*o,Target*t){
    s32 state; int *kp; int *gp; Button *b; u32 k[4];
    if(!func_00296530(func_00296710(),t)) return;
    gp=&o->gate;
    if(*gp&&t->id!=((s32(*)(s32,void*))func_001E3650)(func_001E4280(),gp)){t->mat->flags&=~1LL;return;}
    state=-1;
    kp=&o->key;
    if(*kp){if(o->timer>0)o->timer--;
    switch(((s32(*)(s32,void*))func_001E3650)(func_001E4280(),kp)){
    case 0:if(o->timer){t->mat->flags=(t->mat->flags&~1LL)|1;state=o->index*3+2;}else{t->mat->flags&=~1LL;state=o->index*3;}break;
    case 1:t->mat->flags=(t->mat->flags&~1LL)|1;
    if(!o->timer){if(!o->filter||o->filter==func_002971B0(func_00297500()))state=o->index*3+1;else state=o->index*3;}else{state=o->index*3+2;}break;
    case 2:t->mat->flags=(t->mat->flags&~1LL)|1;o->timer=5;state=o->index*3+2;break;
    }}
    if(state==-1){t->mat->flags&=~1LL;return;}
    b=t->button;if(b){func_001D4040(k,D_00444D28);if(b->key==k[0])func_0029FA58(b,t,state);}
}
