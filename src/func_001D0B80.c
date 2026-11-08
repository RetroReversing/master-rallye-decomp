extern char D_004735B0[];
extern void D_002AD390(void*);
void func_001D0C40(char*p,int f){*(void**)(p+32)=D_004735B0;if(f&1)D_002AD390(p);}
void func_001D0B70(int*p,int i,int v){p+=i;p[44]=v;}
int func_001D0B60(int*p,int i){p+=i;return p[44];}
typedef struct {int*begin,*end,*cap;} IV;
extern void func_00152720(IV*,int*,int*);
void func_001D0B80(char*p,IV*v){int i=0,k=0;if(*(int*)(p+96)>0){int *a=(int*)(p+176),*b=(int*)(p+132);do{if(*(int*)((u32)a+((u32)k<<2))){if(*(int*)((u32)b+((u32)k<<2))){int*e=v->end;if(e!=v->cap){if(e)*e=k;v->end++;}else func_00152720(v,e,&i);}}i=i+1;k=i;}while(k<*(int*)(p+96));}}
