typedef union PoolObj {union PoolObj*next;char client[1];} PoolObj;extern PoolObj*D_0040E618[];extern char*func_00152B80(u32,int*);
void*func_00372A30(u32 size){int n=20;char*chunk=func_00152B80(size,&n);PoolObj **list,*result,*current,*next;int i;if(n==1)return chunk;list=D_0040E618+((size+7)/8-1);result=(PoolObj*)chunk;*list=next=(PoolObj*)(chunk+size);for(i=1;;i++){current=next;next=(PoolObj*)((char*)next+size);if(n-1==i){current->next=0;break;}else current->next=next;}return result;}
int func_00371720(s8*a,s8*end,s8*b,s8*bend){s8 x,y;while(a!=end&&b!=bend){x=*a;y=*b;if(x<y)return 1;if(y<x)return 0;a++;b++;}return a==end&&b!=bend;}
typedef struct Tree{u32 a,b;struct Tree*left,*right;}Tree;extern void func_002B2028(void*);extern void func_001C6938(void*,Tree*);
void func_00374228(void*a,Tree*p){while(p){Tree*n;func_001C6938(a,p->right);n=p->left;func_002B2028(p);p=n;}}
void func_00374288(void*a,Tree*p){while(p){Tree*n;func_00374288(a,p->right);n=p->left;func_002B2028(p);p=n;}}
