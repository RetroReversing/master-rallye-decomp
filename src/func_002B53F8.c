int func_003C9300(int);int func_003C9BA0(int,int,int);int func_003F9698();extern char D_0047EBB0[];
void func_002B5660(void){int n=func_003C9300(2);while(func_003C9BA0(n,0,0))func_003F9698(D_0047EBB0);}
int func_002B2028(int);int func_00407130(int);int func_00407758(int);
int func_002B5608(int*p){int t;if(p[1]){p[1]=0;func_00407130(p[0]);}t=p[2];if(t){func_002B2028(t);p[2]=0;}p[0]=0;return 0;}
extern char D_0047EB30[],D_0047EB70[];
int func_002B5590(int*p){int r=0;if(p[1]){if(func_00407758(p[0])!=-1)r=1;else func_003F9698(D_0047EB30,p[2]);}else func_003F9698(D_0047EB70);return r;}
extern char D_0047EAA8[] __attribute__((aligned(8)));extern char D_00494CD8[] __attribute__((aligned(8)));extern char D_00494CE6[];
char *func_003FAD88(char*,const char*,int);
char *func_002B53F8(char*p){int i;if(*p!='\\'){for(i=0;i<31;){char c=p[i];if(!c)break;if(c==':'){p+=i+1;break;}if(c=='\\')break;i++;}}
__builtin_memcpy(D_00494CD8,D_0047EAA8,15);
{char *q=p+1;if(*p!='\\')q=p;func_003FAD88(D_00494CE6,q,4080);}D_00494CD8[4095]=0;return D_00494CD8;}
