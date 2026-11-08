typedef struct {int a[7];} E28;
#define F(p,t,o) (*(volatile t *)((char *)(p)+(o)))
void func_001CBEF8(void *a,void *end,void *s){void *p=a;void *d;void *b,*c,*e; a=(char*)a+36;d=a;if(p!=end){b=(char*)s+12;c=(char*)s+24;e=(char*)s+36;do{p=(char*)p+56;F(d,float,-36)=F(s,float,0);F(d,float,-32)=F(s,float,4);F(d,float,-28)=F(s,float,8);F(d,float,-24)=F(s,float,12);F(d,float,-20)=F(b,float,4);F(d,float,-16)=F(b,float,8);F(d,float,-12)=F(s,float,24);F(d,float,-8)=F(c,float,4);F(d,float,-4)=F(c,float,8);F(d,float,0)=F(s,float,36);F(d,float,4)=F(e,float,4);F(d,float,8)=F(e,float,8);F(d,int,12)=F(s,int,48);F(d,int,16)=F(s,int,52);d=(char*)d+56;}while(p!=end);}}
int func_001CA150(int a,int end,int dst){int p=a,q=dst;void *s,*d;if(p!=end){s=(void*)(a+12);d=(void*)(dst+12);do{if(q){F(d,float,-12)=F(s,float,-12);F(d,float,-8)=F(s,float,-8);F(d,float,-4)=F(s,float,-4);F(d,float,0)=F(s,float,0);F(d,float,4)=F(s,float,4);F(d,float,8)=F(s,float,8);F(d,float,12)=F(s,float,12);F(d,float,16)=F(s,float,16);F(d,int,20)=F(s,int,20);}s=(char*)s+36;p+=36;d=(char*)d+36;q+=36;}while(p!=end);}return q;}
void func_001C9DE0(E28 *p,E28 *end,E28 *d){while(p!=end){if(d)*d=*p;p++;d++;}}
extern int func_003FA9B8(int);
long func_001CE2F8(int *p){long r=0;if(*p)r=func_003FA9B8(*p);return r;}
