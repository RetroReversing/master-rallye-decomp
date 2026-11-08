extern char D_00476810[];
extern char D_004768C0[];
extern char D_00476940[];
extern char D_004769C0[];
extern char D_00476A40[];
extern char D_00476BC8[];
extern char D_00476BF0[];
extern char D_00476BF8[];
extern char D_00476C00[];
extern char D_00476C08[];
extern char D_00476C48[];
extern char D_00476C50[];
extern char D_00476C58[];
extern char D_00476C70[];
extern char D_00476C90[];
extern char D_00476CA8[];
extern char D_00476CC0[];
extern char D_00476CD8[];
extern char D_00476D00[];
extern char D_00476D20[];
extern char D_00476D40[];
extern char D_00476D58[];
extern char D_00476D60[];
extern char D_00476D90[];
extern char D_00476DB8[];
extern char D_00476DD8[];
extern char D_00476DF0[];
extern char D_00476E00[];
extern char D_00476E08[];
extern char D_00476E30[];
extern char D_00476E58[];
extern char D_00476E80[];
extern char D_00476EA8[];
typedef struct Entry {u32 name; void *value; s32 tag; u32 flags; s32 rev,scope; u32 extra;} Entry;
typedef struct Vec {Entry *begin,*end,*cap;} Vec;
extern s32 D_004262B0[];
extern void func_003F9698(const char *,...);
extern void func_001D29D0(void *,const char *,...);
extern char *func_001D4010(void *);
extern void func_001D4040(void *,const char *);
extern void func_001DFF90(void *,void *);
extern void func_001E4BD0(s32,Vec *);
extern void D_002AD390(void *);
extern void *func_001E4D70(void *,void *);
extern float *func_001E4D90(void *);
extern void *func_001E4DC8(void *);
extern void *func_001E5CC0(void *);
extern float *func_001E5D00(void *);
extern float *func_001E5D38(void *);
extern float *func_001E5D70(void *);
extern void *func_001E5DA8(void *);
extern s64 func_002AD350(float);
typedef struct VT {char pad[32];s16 adj; s16 pad2;void *(*get)(void *);} VT;
typedef struct Obj {u32 x;VT *vt;u32 pad[2];void *vt2;} Obj;
void func_001E4428(s32 a, Vec *v) {
 struct {void *id;u32 pad[3];u32 temp[4];} loc;u32 out; s32 scene=0,global=0,user=0;
 Entry *p,*next; s32 total;
 func_003F9698(D_00476BC8,v->end-v->begin,v->cap-v->begin);
 D_004262B0[3]++;
 p=v->begin;if(p!=v->end)do{
 loc.id=0;next=p+1;
 if((p->tag^12)!=0){
 {s32 scope=p->scope;switch(scope){
 case 0:global++;func_001D29D0(&loc.id,D_00476BF0);break;
 case 1:scene++;func_001D29D0(&loc.id,D_00476BF8);break;
 default:func_001D29D0(&loc.id,D_00476C00,scope);user++;break;}
 }
 {u32 f=p->flags; s32 r=p->rev; void *i=loc.id; char *s=(f&1)?D_00476C48:D_00476C50;char *o=(f&4)?D_00476C48:D_00476C50;char *ps=(f&2)?D_00476C48:D_00476C50;
 func_003F9698(D_00476C08,r,i,s,o,ps,func_001D4010(&p->extra));}
 }
 if(p->tag==0){char *n=func_001D4010(p);s32 b=p->tag==0?*(s32*)p->value:0;func_003F9698(D_00476C58,n,b?D_00476A40:D_004769C0);}
 else if((p->tag^1)==0){char *n=func_001D4010(p);float f=p->tag==1?*(float*)p->value:0;func_003F9698(D_00476C70,n,func_002AD350(f));}
 else if((p->tag^2)==0){char *n=func_001D4010(p);s32 i=p->tag==2?*(s32*)p->value:0;func_003F9698(D_00476C90,n,i);}
 else if((p->tag^3)==0){float *m;s32 j;func_003F9698(D_00476CA8,func_001D4010(p));m=func_001E4D90(p);for(j=0;j<4;j++,m+=4){s64 x=func_002AD350(m[0]),y=func_002AD350(m[1]),z=func_002AD350(m[2]),w=func_002AD350(m[3]);func_003F9698(D_00476CC0,x,y,z,w,j==3?D_00476940:D_004768C0);}}
 else if((p->tag^8)==0){char *n=func_001D4010(p);func_003F9698(D_00476CD8,n,func_001D4010(func_001E5CC0(p)));}
 else if((p->tag^11)==0){char *n=func_001D4010(p);func_003F9698(D_00476D00,n,func_001D4010(func_001E5DA8(p)));}
 else if((p->tag^4)==0){char *n=func_001D4010(p);func_003F9698(D_00476D20,n,func_001D4010(func_001E4DC8(p)));}
 else if((p->tag^9)==0){typedef struct {char **b,**e;} Strings;Strings *s=p->tag==9?p->value:0;char **i;func_003F9698(D_00476D40,func_001D4010(p));D_004262B0[3]++;for(i=s->b;i!=s->e;i++)func_003F9698(D_00476D58,*i);D_004262B0[3]--;func_003F9698(D_00476810);}
 else if((p->tag^5)==0){float *f=func_001E5D70(p);char *n=func_001D4010(p);s64 x=func_002AD350(f[0]),y=func_002AD350(f[1]),z=func_002AD350(f[2]);func_003F9698(D_00476D60,n,x,y,z,func_002AD350(f[3]));}
 else if((p->tag^6)==0){float *f=func_001E5D38(p);char *n=func_001D4010(p);s64 x=func_002AD350(f[0]),y=func_002AD350(f[1]);func_003F9698(D_00476D90,n,x,y,func_002AD350(f[2]));}
 else if((p->tag^7)==0){float *f=func_001E5D00(p);char *n=func_001D4010(p);s64 x=func_002AD350(f[0]);func_003F9698(D_00476DB8,n,x,func_002AD350(f[1]));}
 else if((p->tag^10)==0){Obj *o,*r;func_003F9698(D_00476DD8,func_001D4010(p));func_001D4040(loc.temp,D_00476DF0);o=func_001E4D70(p,loc.temp);r=o->vt->get((char*)o+o->vt->adj);if(r){char *t=r->vt2;func_001DFF90(&out,r);((void(*)(void*,s32))*(void**)(t+12))((char*)r+*(s16*)(t+8),3);}}
 else if(p->tag!=12)func_003F9698(D_00476E00,func_001D4010(p));
 D_002AD390(loc.id);
 p=next;}while(p!=v->end);
 total=global+scene+user;
 func_003F9698(D_00476940);
 func_003F9698(D_00476E08,global);func_003F9698(D_00476E30,scene);func_003F9698(D_00476E58,user);func_003F9698(D_00476E80);func_003F9698(D_00476EA8,total);
 D_004262B0[3]--;func_003F9698(D_00476810);func_001E4BD0(a,v);
}
