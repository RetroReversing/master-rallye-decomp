typedef struct { float x,y,z; } Vec660;
typedef struct { int id; Vec660 v; float a,b,c,d; } Item660;
typedef struct { Item660 *begin,*end,*cap; } Arr660;
extern float func_001E3610(int,void*);
extern void func_002633E0(void*);
extern void func_001C6180(Arr660*,Item660*,Item660*);
static __inline__ void push660(Arr660 *a,Item660 *tmp) { Item660 *p; p=a->end;
 if(p!=a->cap) { if(p) { p->id=tmp->id; { Vec660 *d=&p->v; Vec660 *s=&tmp->v; d->x=s->x; d->y=s->y; d->z=s->z; } p->a=tmp->a; p->b=tmp->b; p->c=tmp->c; p->d=tmp->d; } a->end++; }
 else func_001C6180(a,p,tmp);
}
void func_00166068(void *obj,int *id) {
 Item660 tmp; Arr660 *a; Item660 *p;
 *(float*)((char*)obj+4)=func_001E3610(func_001E4280(),obj);
 func_002633E0(&tmp);
 tmp.id=*id; tmp.c=1.6f; tmp.d=1.4f; tmp.b=1.0f; tmp.a=1.0f;
 push660((Arr660*)((char*)obj+44),&tmp);
}
