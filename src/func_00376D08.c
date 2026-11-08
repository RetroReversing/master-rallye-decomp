extern void *func_00152B80(int,int*);
extern int D_0040E618[];
extern int D_0042DCA4;
extern int func_003B93F0();
void *func_00372A30(int size){int n=20; char *p=func_00152B80(size,&n); char *q,*r; int i;if(n!=1){q=p+size;D_0040E618[((u32)(size+7)>>3)-1]=(int)q; i=1;r=q+size;if(n-1!=1){do{*(char**)q=r;i++;q=r;r=q+size;}while(n-1!=i);}*(int*)q=0;}return p;}
void func_003714B8(void){D_0042DCA4++;func_003B93F0();}
void func_003768A8(void **p){char *v=*p;if(v){if(--*(int*)v==0){char *t=*(char**)(v+4);(*(void(**)(void*,int,void*))(t+12))(v+*(short*)(t+8),3,v);}*p=0;}}
int func_00376D08(void *p,int a,u32 b){char *v=*(char**)((char*)p+500);int x=*(int*)v,r=0;while(x && !r){int t=*(int*)(v+12);v=*(char**)(v+4);if(b<(u32)(a-t))r=x;x=*(int*)v;}return r;}
