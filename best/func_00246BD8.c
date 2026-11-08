typedef struct E {float x,y,z,w;int id;} E;
typedef struct EV {E*b,*e,*c;} EV;
typedef struct VV {EV*b,*e,*c;} VV;
typedef struct V {void**b,**e,**c;} V;
typedef struct Node {struct Node*next,*prev;char *data;} Node;
extern u32 D_0040E618[];
extern void func_0025AE30(void*),func_0024F6E0(void**,void*),func_00247640(void*,void*,void*),func_003F93CC(void*,void*,int),func_00248920(void*,void*,int,void*,void*),func_00248ED8(void*,void*),func_00239848(void*),func_00272EF8(EV*,E*,E*),func_002753E0(VV*,EV*,EV*),func_002B2028(void*),func_00274FE0(void*,void*);
extern int func_00243490(void*,int,int,void*,void*);
extern void *func_002B1FC0(int),*func_003D2910(int),*func_00152D28(int);
extern E*func_00275388(E*,E*,E*,int);
static inline E*allocE(int n){int size=n*20;E*p;if(n){if(size){p=func_002B1FC0(size);if(!p)p=func_003D2910(size);}else{p=(E*)D_0040E618[-1];if(p)D_0040E618[-1]=*(u32*)p;else p=func_00152D28(0);}}else p=0;return p;}
static inline void copyEV(EV*d,EV*s){int n;E*p;d->e=0;d->c=0;d->b=0;n=s->e-s->b;p=allocE(n);d->b=p;d->e=p;d->c=p+n;d->e=func_00275388(s->b,s->e,p,0);}
static inline void destroyEV(EV*v){E*p;int n;for(p=v->b;p<v->e;p++){}n=v->c-v->b;if(n){if(n*20)func_002B2028(v->b);else{*(u32*)v->b=D_0040E618[-1];D_0040E618[-1]=(u32)v->b;}}}
void func_00246BD8(char*self,void**arg1,char*arg2){
struct {float pos[4];void*ref;int pad[3];EV tmp;int pad2[5];E value;} st;void*ref;void*group;char*adjust,*vt,*desc;int result,i,n,j,m,k,count;V*v,*gv;VV*out;
func_0025AE30(arg2);desc=*(char**)(arg2+8);vt=*(char**)arg1+48;adjust=(char*)arg1+*(short*)vt;group=*(void**)(arg2+4);
func_0024F6E0(&st.ref,*(void**)desc);
ref=st.ref;{float*p=*(float**)((char*)ref+20);st.pos[0]=p[0];st.pos[1]=p[1];st.pos[2]=p[2];}
if(ref){if(--*(int*)ref==0){char*t=*(char**)((char*)ref+4);((void(*)(void*,int))*(void**)(t+12))((char*)ref+*(short*)(t+8),3);}}
result=((int(*)(void*,void*,float))*(void**)(vt+4))(adjust,st.pos,*(float*)(desc+4));
gv=(V*)((char*)group+12);out=(VV*)(self+140);n=gv->e-gv->b;
for(i=0;i<n;i++){char*e=gv->b[i];if(func_00243490(arg1,result,0,*(void**)(*(char**)e+12),*(void**)(*(char**)(e+4)+12))){func_00247640(self,*(void**)(e+24),self);func_00247640(self,*(void**)(e+28),self);}}
count=((V*)self)->e-((V*)self)->b;
v=(V*)(self+12);for(i=0;i<count;i++){void*item=((V*)self)->b[i];void**b=v->b,**e=v->e;func_003F93CC(b,e,0);v->e=(void**)((char*)v->e-((char*)e-(char*)b));func_00248920(self,arg1,result,item,v);func_00248ED8(self,v);m=v->e-v->b;for(j=0;j<m;j++){void*p=v->b[j];if(p)func_00239848(p);}m=v->e-v->b;for(k=0;k<m;k++){Node**list=v->b[k];if(list){Node*node;EV *tmpPtr=&st.tmp;st.tmp.b=0;st.tmp.e=0;st.tmp.c=0;for(node=(*list)->next;node!=*list;node=node->next){E*p=*(E**)(node->data+36);if(p&&p->id>=0){st.value.x=0;st.value.y=0;st.value.z=0;st.value.x=p->x;st.value.y=p->y;st.value.z=p->z;st.value.w=p->w;st.value.id=p->id;if(st.tmp.e!=st.tmp.c){{E*d=st.tmp.e;if(d){d->x=0;d->y=0;d->z=0;d->x=st.value.x;d->y=st.value.y;d->z=st.value.z;d->w=st.value.w;d->id=st.value.id;}}st.tmp.e++;}else func_00272EF8(tmpPtr,st.tmp.e,&st.value);}}
if(out->e!=out->c){if(out->e)copyEV(out->e,&st.tmp);out->e++;}else func_002753E0(out,out->e,&st.tmp);
destroyEV(tmpPtr);}}}
func_00274FE0(arg2+16,out);
}
