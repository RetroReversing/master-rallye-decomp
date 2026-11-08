typedef struct {char *begin,*end,*cap;} Vec;
extern void *func_002B1FC0(int);
extern void *func_003D2910(int);
extern void *func_00152D28(int);
extern void func_002B2028(void*);
extern void *func_003F93CC(void*,const void*,int);
extern u32 D_0040E618[];
static inline char *alloc4(int bytes){if(bytes){char*p=func_002B1FC0(bytes);if(p)return p;return func_003D2910(bytes);}else{char*p=(char*)D_0040E618[-1];if(!p)return func_00152D28(0);D_0040E618[-1]=*(u32*)p;return p;}}
static inline void shift(char*first,char*last,char*dest){int n=((last-first)>>2)*4;func_003F93CC(dest-n,first,n);}
static inline void dealloc(char*p,int n){if(n){if(n*4)func_002B2028(p);else{*(int*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
void func_00152720(Vec*v,char*pos,int*value){char *initial=v->end,*buf,*out,*newend,*old,*inend;int count,bytes,prefix,suffix;
if(initial!=v->cap){int val;if(initial)*(int*)initial=*(int*)(initial-4);inend=v->end;v->end=inend+4;val=*value;shift(pos,inend-4,inend);*(int*)pos=val;return;}
count=(initial-v->begin)>>2;count=count?count*2:1;bytes=count*4;if(count)buf=alloc4(bytes);else{buf=0;bytes=0;}
old=v->begin;prefix=pos-old;out=buf+prefix;func_003F93CC(buf,old,(prefix>>2)*4);
{
    char *r = 0;
    if (out) {
        *(int *)out = *value;
        r = out;
    }
    out = r + 4;
}
suffix=v->end-pos;newend=out+suffix;func_003F93CC(out,pos,(suffix>>2)*4);{char*d=v->begin;int sz=(v->cap-d)>>2;dealloc(d,sz);}v->begin=buf;v->end=newend;v->cap=buf+bytes;}
