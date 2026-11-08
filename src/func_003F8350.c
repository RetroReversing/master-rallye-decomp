extern int D_004404DC;
int func_003F8608(int,int,int);
int func_003F85D8(int a,int b){return func_003F8608(D_004404DC,a,b);}
extern unsigned char D_0048BD29[];
int func_003F8470(int c){return *(unsigned char *)((unsigned)c+(unsigned)D_0048BD29)&4;}
int func_003FF150(int,void *);
u32 func_003F83E8(int buf,u32 size,u32 count,int file){
 struct {void *v;int n;u32 resid;} u;
 struct {int ptr; int size;} v;
 u32 total=count*size;
 v.ptr=buf;v.size=total;u.v=&v;u.n=1;u.resid=total;
 if(func_003FF150(file,&u)==0)return count;
 return (total-u.resid)/size;
}
int func_003F8350(int a,int (*cb)(void *)){
 int n,result=0;char *p,*node=(char *)(a+0x1d8);
 if(node){do{n=*(int *)(node+4);n--;p=*(char **)(node+8);
 if(n>=0){do{if(*(short *)(p+12))result|=cb(p);n--;p+=0x58;}while(n>=0);}
 node=*(char **)node;}while(node);}
 return result;
}
