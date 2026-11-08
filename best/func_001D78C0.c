extern void *func_00152D28(int); extern void *func_002B1FC0(int); extern void *func_003D2910(int); extern void func_002B2028(void*); extern void func_003F93CC(void*,void*,int); extern u32 D_0040E618[];
typedef struct {void *begin,*end,*cap;} Vec;
void func_001D78C0(Vec *v,void *pos,int *value){
void *old=v->end,*q,*buf,*first,*dst,*next,*last,*oldbuf;
int len,x,count,capacity,bytes,prefix,suffix,oldcount;
if(old!=v->cap){if(old)*(int*)old=*(int*)(old-4);q=v->end;v->end=q+4;len=(int)q-4;len-=(int)pos;len=(len>>2)*4;x=*value;func_003F93CC(q-len,pos,len);*(int*)pos=x;return;}
count=((int)old-(int)v->begin)>>2;capacity=count?count*2:1;bytes=capacity*4;
if(capacity){if(bytes){void *a=func_002B1FC0(bytes);buf=a;if(!a)buf=func_003D2910(bytes);}else if(D_0040E618[-1]){buf=(void*)D_0040E618[-1];D_0040E618[-1]=*(u32*)buf;}else buf=func_00152D28(0);}else{buf=0;bytes=0;}
first=v->begin;prefix=(int)pos-(int)first;dst=buf+prefix;func_003F93CC(buf,first,(prefix>>2)*4);if(dst)*(int*)dst=*value;
next=dst+4;suffix=(int)v->end-(int)pos;last=next+suffix;func_003F93CC(next,pos,(suffix>>2)*4);
oldbuf=v->begin;oldcount=((int)v->cap-(int)oldbuf)>>2;if(oldcount){if(oldcount*4)func_002B2028(oldbuf);else{*(u32*)oldbuf=D_0040E618[-1];D_0040E618[-1]=(u32)oldbuf;}}
v->end=last;v->cap=buf+bytes;v->begin=buf;
}
