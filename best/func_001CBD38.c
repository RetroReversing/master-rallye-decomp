typedef struct{int*begin,*end,*cap;} Vec;
extern void*func_002B1FC0(unsigned);extern void*func_003D2910(unsigned);extern void*func_00152D28(unsigned);extern void func_002B2028(void*);extern void func_003F93CC(void*,void*,unsigned);extern unsigned D_0040E618[];
void func_001CBD38(Vec*v,int*pos,int*value){
 int*end=v->end;int len;int size;int*buf;int*middle;int*finish;
 if(end!=v->cap){int*e;int*e1;int n;int val;if(end)*end=end[-1];e=v->end;v->end=e+1;e1=e-1;n=e1-pos;val=*value;func_003F93CC(e-n,pos,n*4);*pos=val;return;}
 len=end-v->begin;len=len?len*2:1;size=len*4;
 if(len){if(size){int*t=func_002B1FC0(size);if(t)buf=t;else buf=func_003D2910(size);}else{int*head=(int*)D_0040E618[-1];if(head==0){buf=func_00152D28(0);}else{int*next=*head;D_0040E618[-1]=(unsigned)next;buf=head;}}}else{buf=0;size=0;}
 {int*base=v->begin;int n=pos-base;middle=(int*)((char*)buf+((char*)pos-(char*)base));func_003F93CC(buf,base,n*4);}
 if(middle)*middle=*value;
 {int n=v->end-pos;int*dst=middle+1;finish=(int*)((char*)dst+((char*)v->end-(char*)pos));func_003F93CC(dst,pos,n*4);}
 {int*base=v->begin;int n=v->cap-base;if(n){if(n*4)func_002B2028(base);else{*(unsigned*)base=D_0040E618[-1];D_0040E618[-1]=(unsigned)base;}}}
 v->begin=buf;v->end=finish;v->cap=(int*)((char*)buf+size);
}
