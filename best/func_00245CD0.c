typedef struct E {float x,y,z,w;int id;} E;
typedef struct EV {E*b,*e,*c;} EV;
typedef struct VV {EV*b,*e,*c;} VV;
typedef struct V {u32*b,*e,*c;} V;
extern u32 D_0040E618[];
extern void func_002B2028(void*),D_002AD390(void*),func_0027D490(void*,int),func_0027D340(void*,int);
static inline void dealloc(void*p,int n,int size){if(n){if(size)func_002B2028(p);else{*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
static inline void destroyV(V*v){u32*b=v->b;int n=v->c-b;dealloc(b,n,n*4);}
static inline void destroyE(EV*v){E*b=v->b,*e=v->e,*p;int n;for(p=b;p<e;p++){}n=v->c-b;dealloc(b,n,n*20);}
static inline void destroyVV(VV*v){EV*b=v->b,*e=v->e;int n;for(;b<e;b++)destroyE(b);b=v->b;n=v->c-b;dealloc(b,n,n*12);}
static inline void clearVV(VV*v){EV*b=v->b,*e=v->e;int d=(char*)e-(char*)b;for(;b<e;b++)destroyE(b);v->e=(EV*)((char*)v->e-d);}
void func_00245CD0(char*p,int flags){
struct{void*v24,*v4c;V*v74;int deleting;V*vC,*v80,*v18;}volatile st;VV*v=(VV*)(p+140);EV*end=v->e,*cur=v->b;int delta=(char*)end-(char*)cur;st.v80=(V*)(p+128);st.deleting=flags&1;st.v74=(V*)(p+116);st.v4c=p+76;st.v24=p+36;st.v18=(V*)(p+24);st.vC=(V*)(p+12);
for(;cur<end;cur++)destroyE(cur);v->e=(EV*)((char*)v->e-delta);destroyVV(v);destroyV(st.v80);destroyV(st.v74);func_0027D490(st.v4c,2);func_0027D340(st.v24,2);destroyV(st.v18);destroyV(st.vC);destroyV((V*)p);if(st.deleting)D_002AD390(p);
}
