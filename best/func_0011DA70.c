typedef struct {s32 a,b,c,d;} Obj;
typedef struct {char pad[40];s16 off; s16 pad2; char *(*fn)();} VT;
extern void D_002AD390(s32);
extern void func_0011E248(void*,s32);
extern VT **func_0017E620(void);
extern s32 func_00194738(s32),func_00194C40(void);
extern void func_00194BB0(s32,s32),func_003FA310(char*,char*,s32);
extern void *func_001D2458(void*,char*);extern void func_001D4040(void*,char*);
extern s32 func_001E38C8(s32,void*);
extern void func_001E3FE0(s32,void*,void*);
extern char D_004473C8[],D_004473E0[],D_004473F8[],D_00444878[];
typedef struct {s32 p; s32 a,b,c;} Key;
static inline __attribute__((always_inline)) char *text(s32 id,s32 kind){ VT **p=func_0017E620();VT *v=*p;return v->fn((char*)p+v->off,id,kind);}
static inline __attribute__((always_inline)) Key *initkey(Key *p,char *s){func_001D4040(p,s);return p;}
Obj *func_0011DA70(Obj *o,s32 id){char buf[64];Key key,tmp,t5,t44,t3,t24,tblank,t7; s32 val,reg; s32 d;
o->d=0;o->a=id;o->b=-1;o->c=2;val=-1;
func_00194BB0(func_00194C40(),1);func_003FA310(buf,D_004473C8,o->a);
reg=func_001E4280();
if(func_001E38C8(reg,initkey(&key,buf))){reg=func_001E4280();func_001D4040(&tmp,buf);val=func_001E3650(reg,(s32)&tmp);}
func_0011E248(o,val);switch(id){case 5:reg=func_001E4280();func_001D2458(&key,D_004473E0);func_001D2458(&t5,text(206,0));func_001E3FE0(reg,&key,&t5);d=t5.p;goto cleanup;case 44:reg=func_001E4280();func_001D2458(&key,D_004473E0);func_001D2458(&t44,text(81,0));func_001E3FE0(reg,&key,&t44);d=t44.p;goto cleanup;case 3:reg=func_001E4280();func_001D2458(&key,D_004473E0);func_001D2458(&t3,text(12,8));func_001E3FE0(reg,&key,&t3);d=t3.p;goto cleanup;case 24:reg=func_001E4280();func_001D2458(&key,D_004473E0);func_001D2458(&t24,text(4,0));func_001E3FE0(reg,&key,&t24);d=t24.p;goto cleanup;case 10:case 26:case 52:case 55:reg=func_001E4280();func_001D2458(&key,D_004473E0);func_001D2458(&tblank,D_00444878);func_001E3FE0(reg,&key,&tblank);d=tblank.p;goto cleanup;case 40:case 41:case 47:reg=func_001E4280();func_001D2458(&key,D_004473E0);func_001D2458(&t7,text(7,0));func_001E3FE0(reg,&key,&t7);d=t7.p;goto cleanup;case 50:reg=func_001E4280();func_001D2458(&key,D_004473E0);func_001D2458(&tmp,text(757,2));func_001E3FE0(reg,&key,&tmp);d=tmp.p;goto cleanup;cleanup:D_002AD390(d);D_002AD390(key.p);break;default:reg=func_001E4280();func_001D2458(&key,D_004473E0);func_001D2458(&tmp,text(id,0));func_001E3FE0(reg,&key,&tmp);D_002AD390(tmp.p);D_002AD390(key.p);break;
}
if(func_00194738(func_00194C40())){reg=func_001E4280();func_001D2458(&key,D_004473F8);func_001D2458(&tmp,text(1,2));func_001E3FE0(reg,&key,&tmp);D_002AD390(tmp.p);D_002AD390(key.p);}else{reg=func_001E4280();func_001D2458(&key,D_004473F8);func_001D2458(&tmp,D_00444878);func_001E3FE0(reg,&key,&tmp);D_002AD390(tmp.p);D_002AD390(key.p);}return o;}
