static inline const unsigned *maximum(const unsigned*a,const unsigned*b){return *a<*b?b:a;}
typedef struct {float x,y,z;} V3;
typedef struct {V3 a,b,c,d;int e,f;} E;
typedef struct {E *begin,*end,*cap;} Vec;
extern E *func_001C6D18(E*,E*,E*,int);
extern E *func_001CBF98(E*,unsigned,E*,int);
extern void func_001CBEF8(E*,E*,E*);
extern void *func_002B1FC0(unsigned);
extern void *func_003D2910(unsigned);
extern void *func_00152D28(unsigned);
extern void func_002B2028(void*);
extern unsigned D_0040E618[];
#define COPYV(d,s) (d).x=(s).x;(d).y=(s).y;(d).z=(s).z
#define COPY(dst,src) COPYV((dst).a,(src).a);COPYV((dst).b,(src).b);COPYV((dst).c,(src).c);COPYV((dst).d,(src).d);(dst).e=(src).e;(dst).f=(src).f
void func_001CC040(Vec*v,E*pos,unsigned n,E*val){
 E saved;unsigned len,oldlen; E*oldend;int after;E*buf;E*finish;E*i;unsigned bytes;
 if(n){
 oldend=v->end;
 if((unsigned)(v->cap-oldend)>=n){
 {V3*b=&val->b,*c=&val->c,*d=&val->d;V3*ob=&saved.b,*oc=&saved.c,*od=&saved.d;
 saved.a.x=val->a.x;saved.a.y=val->a.y;saved.a.z=val->a.z;
 ob->x=b->x;ob->y=b->y;ob->z=b->z;oc->x=c->x;oc->y=c->y;oc->z=c->z;od->x=d->x;od->y=d->y;od->z=d->z;saved.e=val->e;saved.f=val->f;}
 after=oldend-pos;
 if(n<(unsigned)after){
 func_001C6D18(oldend-n,oldend,oldend,0);
 v->end+=n;
 {E*tail=oldend-n;int count=tail-pos;void*s=(char*)tail+36;void*d=(char*)oldend+36;while(count>0){s=(char*)s-56;d=(char*)d-56;--count;*( float*)((char*)d+-36)=*( float*)((char*)s+-36);*( float*)((char*)d+-32)=*( float*)((char*)s+-32);*( float*)((char*)d+-28)=*( float*)((char*)s+-28);*( float*)((char*)d+-24)=*( float*)((char*)s+-24);*( float*)((char*)d+-20)=*( float*)((char*)s+-20);*( float*)((char*)d+-16)=*( float*)((char*)s+-16);*( float*)((char*)d+-12)=*( float*)((char*)s+-12);*( float*)((char*)d+-8)=*( float*)((char*)s+-8);*( float*)((char*)d+-4)=*( float*)((char*)s+-4);*( float*)((char*)d+0)=*( float*)((char*)s+0);*( float*)((char*)d+4)=*( float*)((char*)s+4);*( float*)((char*)d+8)=*( float*)((char*)s+8);*( int*)((char*)d+12)=*( int*)((char*)s+12);*( int*)((char*)d+16)=*( int*)((char*)s+16);}}
 func_001CBEF8(pos,pos+n,&saved);
 return;
 }
 func_001CBF98(oldend,n-after,&saved,0);
 v->end+=n-after;
 func_001C6D18(pos,oldend,v->end,0);
 v->end+=after;
 func_001CBEF8(pos,oldend,&saved);
 }else{
 oldlen=v->end-v->begin;
 len=oldlen+*maximum(&oldlen,&n);
 if(len){bytes=len*sizeof(E);if(bytes){{E*allocated=func_002B1FC0(bytes);if(allocated)buf=allocated;else buf=func_003D2910(bytes);}}else{{E*head=(E*)D_0040E618[-1];if(head){buf=head;D_0040E618[-1]=*(unsigned*)head;}else buf=func_00152D28(0);}}}else buf=0;
 finish=func_001C6D18(v->begin,pos,buf,0);
 finish=func_001CBF98(finish,n,val,0);
 finish=func_001C6D18(pos,v->end,finish,0);
 for(i=v->begin;i<v->end;++i){}
 {int size=v->cap-v->begin;E*data=v->begin;if(size){if(size*sizeof(E))func_002B2028(data);else{*(unsigned*)data=D_0040E618[-1];D_0040E618[-1]=(unsigned)data;}}}
 v->end=finish;v->begin=buf;v->cap=buf+len;
 }
 }
}
