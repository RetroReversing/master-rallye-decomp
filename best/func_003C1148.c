typedef struct{float x,y,z;} Vec;typedef struct{Vec n;float d;}Plane;
typedef struct{int *begin,*end,*cap;}IV;typedef struct{char pad[12];IV refs;}Cell;typedef struct{Cell*cells;}Mesh;
typedef struct{char pad[60];Mesh*mesh;}Resource;
typedef struct{Resource*ptr;int stamp;}CacheEntry;typedef struct{CacheEntry*begin,*end,*cap;}CV;
typedef struct{char pad[20];CV cache;int stamp;}Manager;
typedef struct{char pad[176];Vec dir;int pad2;Vec pos;}Actor;
typedef struct{int *vt;}Iface;
typedef struct{char pad[36];int ready;char pad2[12];int serial;}Obj;
typedef struct{int a,b,id;}Input;
extern void func_003C1EB0(Obj*);extern Manager**func_002DDA20(void);extern Iface**func_001D6BB0(void);extern void func_002C6528(CV*,CacheEntry*,unsigned,CacheEntry*);extern Resource*func_00303038(Manager*,int*);extern int func_003C7458(Mesh*,Vec*);extern float sqrtf(float);extern void func_003C1E48(Obj*,Input*,int);extern void func_003C15D8(Obj*,Input*,Mesh*,Plane*,Vec*,Vec*,Vec*,int,float,float);
static inline void copyvec(Vec*p,const Vec*s){p->x=s->x;p->y=s->y;p->z=s->z;}
static inline void setvec(Vec*p,float x,float y,float z){p->x=x;p->y=y;p->z=z;}
static inline float root(float n){return sqrtf(n);}
static inline void plane(Plane*r,Vec*p,Vec*a,Vec*b){Vec u,v,n;Plane tmp;float len;
setvec(&u,a->x-p->x,a->y-p->y,a->z-p->z);setvec(&v,b->x-p->x,b->y-p->y,b->z-p->z);
n.x=u.y*v.z-u.z*v.y;n.y=u.z*v.x-u.x*v.z;n.z=u.x*v.y-u.y*v.x;len=root(n.x*n.x+n.y*n.y+n.z*n.z);n.x/=len;n.y/=len;n.z/=len;tmp.n.x=n.x;tmp.n.y=n.y;tmp.n.z=n.z;tmp.d=-(n.x*p->x+n.y*p->y+n.z*p->z);r->n.x=tmp.n.x;r->n.y=tmp.n.y;r->n.z=tmp.n.z;r->d=tmp.d;}
static inline void cache_resize(CV*v,unsigned n,CacheEntry*value){CacheEntry*end=v->end;unsigned size=end-v->begin;if(n<size){CacheEntry*p=v->begin+n,*it;int bytes=(char*)end-(char*)p;for(it=p;it<end;++it){}v->end=(CacheEntry*)((char*)v->end-bytes);}else func_002C6528(v,end,n-size,value);}
static inline Resource*lookup(Manager*m,int*key,CacheEntry*zero){int id=*key;Resource*result=0;if(id){CV*v=&m->cache;CacheEntry*entry;if(id>=v->end-v->begin){zero->ptr=0;zero->stamp=0;cache_resize(&m->cache,(id+32)&~31,zero);}entry=m->cache.begin+id;if(entry->stamp!=m->stamp){entry->ptr=func_00303038(m,key);entry->stamp=m->stamp;}result=entry->ptr;}return result;}
void func_003C1148(Obj*o,Input*input){union{int key;Vec pos;}local;CacheEntry zero;Vec dir,right;Plane pl;Manager*m;Resource*r;Mesh*mesh;Actor*actor;int index,i,count;
if(!o->ready)func_003C1EB0(o);
m=*func_002DDA20();local.key=input->id;
r=lookup(m,&local.key,&zero);
if(!r)return;mesh=r->mesh;if(!mesh){o->serial++;return;}
{Iface*p=*func_001D6BB0();int*vt=p->vt;actor=((Actor*(*)(void*))vt[21])((char*)p+*(short*)((char*)vt+80));}
copyvec(&local.pos,&actor->pos);local.pos.y=0;
index=func_003C7458(mesh,&local.pos);if(index==-1)return;
copyvec(&dir,&actor->dir);dir.y=0;dir.x=-dir.x;dir.z=-dir.z;
{float len=dir.x*dir.x+dir.y+dir.z*dir.z;if(len>0.001f){if(len<=1.1920929e-7f){dir.x=dir.y;dir.z=dir.y;}else{float inv=1.0f/root(len);dir.x*=inv;dir.y*=inv;dir.z*=inv;}setvec(&right,-dir.z,dir.y,dir.x);{Vec a;Vec up;Vec b;setvec(&up,0,1,0);setvec(&a,local.pos.x+up.x,local.pos.y+up.y,local.pos.z+up.z);setvec(&b,local.pos.x+right.x,local.pos.y+right.y,local.pos.z+right.z);plane(&pl,&local.pos,&a,&b);}func_003C15D8(o,input,mesh,&pl,&local.pos,&dir,&right,index,-1.0f,1.0f);}}
{IV*v=&mesh->cells[index].refs;count=v->end-v->begin;for(i=0;i<count;++i)func_003C1E48(o,input,*(int*)((unsigned)v->begin+((unsigned)i<<2)));}o->serial++;}
