typedef struct P{float x,y,z;}P;
typedef struct V{u32*b,*e,*c;}V;
typedef struct VV{V*b,*e,*c;}VV;
extern u32 D_0040E618[];
extern void func_002460A8(void*),func_00246BD8(void*,void*,void*),func_00233CA8(void*),func_0024F6E0(void**,void*),func_00274FE0(void*,void*),func_003F93CC(void*,void*,int),func_002B2028(void*),func_00275DB8(void*,void*,int,void*),func_0023F7D8(void*),func_00247EF0(void*,void*,int,void*,int),func_00248780(void*,void*,int),func_00248658(void*,void*),func_00248820(void*,void*,int);
extern char*func_00246B50(void*,void*,void*);
extern int func_0025AD90(void*,void*),func_00248FD8(void*,void*,int,void*,int);
static inline void destroy(V*v){u32*b=v->b;int n=v->c-b;if(n){if(n*4)func_002B2028(b);else{*b=D_0040E618[-1];D_0040E618[-1]=(u32)b;}}}
static inline void clear(V*v){u32*b=v->b,*e=v->e;func_003F93CC(b,e,0);v->e=(u32*)((char*)v->e-((char*)e-(char*)b));}
static inline void clearVV(VV*v){V*b=v->b,*e=v->e;int d=(char*)e-(char*)b;for(;b<e;b++)destroy(b);v->e=(V*)((char*)v->e-d);}
static inline void resize(VV*v,u32 n,V*zero){u32 size=v->e-v->b;zero->b=0;zero->e=0;zero->c=0;if(n<size){V*b=v->b+n,*e=v->e;int d=(char*)e-(char*)b;for(;b<e;b++)destroy(b);v->e=(V*)((char*)v->e-d);}else func_00275DB8(v,v->e,n-size,zero);destroy(zero);}
int func_002470F8(char*self,char*arg1,void**arg2,int arg3){
struct{union{P pos;V zero;}u;int pad0;void*ref;int pad1[3];V zero;int pad2[5];int flag,result;void*thing;VV*out;V*temp;}st;
char*group,*desc,*vt,*adjust;void*ref;VV*a,*b;int ret;
st.flag=arg3;func_002460A8(self);group=func_00246B50(self,arg2,arg1);
if(!func_0025AD90(group,*(void**)(arg1+4)))func_00246BD8(self,arg2,group);
desc=*(char**)(arg1+8);func_00233CA8(desc);
vt=*(char**)arg2+48;adjust=(char*)arg2+*(short*)vt;func_0024F6E0(&st.ref,*(void**)desc);
ref=st.ref;{P*p=*(P**)((char*)ref+20);st.u.pos.x=p->x;st.u.pos.y=p->y;st.u.pos.z=p->z;}
if(ref&&--*(int*)ref==0){char*v=*(char**)((char*)ref+4);((void(*)(void*,int))*(void**)(v+12))((char*)ref+*(short*)(v+8),3);}
st.out=(VV*)(self+140);a=(VV*)(self+36);
st.result=((int(*)(void*,P*,float))*(void**)(vt+4))(adjust,&st.u.pos,*(float*)(desc+4));
st.thing=*(void**)arg1;func_00274FE0(st.out,group+16);
st.temp=&st.zero;b=(VV*)(self+76);
clearVV(a);resize(a,*(u32*)((char*)a+32),st.temp);clear((V*)(self+48));
clearVV(b);resize(b,*(u32*)((char*)b+32),&st.u.zero);clear((V*)(self+88));
if(st.out->e-st.out->b){func_0023F7D8(st.thing);func_00247EF0(self,arg2,st.result,st.thing,st.flag);}
func_00248780(self,arg2,st.result);func_00248658(self,st.thing);func_00248820(self,arg2,st.result);
ret=func_00248FD8(self,arg2,st.result,st.thing,st.flag);func_002460A8(self);return ret;
}
