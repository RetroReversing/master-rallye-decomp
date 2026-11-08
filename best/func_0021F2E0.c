extern char *func_001D4010(void*); extern int func_003F9698(char*,...);
extern char D_00478E48[],D_00478E68[],D_00478E78[];
typedef struct N {char *obj; struct N *next;} N;
void func_0021F2E0(char *a){
N *root=(N*)(a+16),*n; int i=6;
do { n=*(N**)(a+i*12+40); if(n!=(N*)(a+i*12+36)){do{char *e=n->obj;
if(!((*(u32*)e>>1)&1)){char **p=(char**)(e+4);int j=3; char *name=func_001D4010(e+92);
func_003F9698(D_00478E48,name,func_001D4010(*(char**)(e+80)+12));
do{if(*p)func_003F9698(D_00478E68,func_001D4010(*p+4));j--;p++;}while(j>=0);
func_003F9698(D_00478E78);}
n=n->next;}while(n!=(N*)(a+i*12+36));}i--;}while(i>=0);
n=root->next;if(n!=root){do{char *e=n->obj;int j=3;char **p=(char**)(e+4);char *name=func_001D4010(e+92);
func_003F9698(D_00478E48,name,func_001D4010(*(char**)(e+80)+12));
do{if(*p)func_003F9698(D_00478E68,func_001D4010(*p+4));j--;p++;}while(j>=0);
func_003F9698(D_00478E78);n=n->next;}while(n!=root);}
}
