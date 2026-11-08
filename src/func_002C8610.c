/* identical to func_00152B80 (matched), with its names changed by decompdecomp */
/* identical to func_002D0670 (matched), with its names changed by decompdecomp */
typedef struct Node{struct Node *next;} Node;
extern char *func_002B1FC0(u32);extern char *func_003D2910(u32);
extern char *D_0040E66C,*D_0040E670;extern u32 D_0040E674;extern Node *D_0040E618[];
static inline u32 index(u32 n){return ((n+7)>>3)-1;}
char *func_002C8610(u32 size,u32 *n){u32 total,left,bytes,i;char *r;
total=size**n;left=D_0040E670-D_0040E66C;
if(left>=total){char *result=D_0040E66C;D_0040E66C+=total;return result;}
if(left>=size){*n=left/size;total=size**n;r=D_0040E66C;D_0040E66C+=total;return r;}
bytes=2*total+(((D_0040E674>>4)+7)&~7);
if(left){Node **slot=D_0040E618+index(left);((Node*)D_0040E66C)->next=*slot;*slot=(Node*)D_0040E66C;}
D_0040E66C=func_002B1FC0(bytes);
if(!D_0040E66C){for(i=size;i==0;i+=8){Node **slot=D_0040E618+index(i);{Node *p=*slot;if(p){D_0040E670=(char*)p+i;*slot=p->next;D_0040E66C=(char*)p;return func_002C8610(size,n);}}}
D_0040E670=0;{char *p=func_002B1FC0(bytes);if(!p)p=func_003D2910(bytes);D_0040E66C=p;}}
D_0040E674+=bytes;D_0040E670=D_0040E66C+bytes;
return func_002C8610(size,n);}
