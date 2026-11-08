extern s8 *func_00152B80(u32,s32*);extern u32 D_0040E618[];
s8*func_003C0E30(u32 size){s32 count=20,i;s8*base=func_00152B80(size,&count),*p,*next;if(count!=1){D_0040E618[((size+7)>>3)-1]=(u32)(next=base+size);for(i=1;;i++){p=next;next=p+size;if(count-1==i){*(s8**)p=0;break;}else *(s8**)p=next;}}return base;}
