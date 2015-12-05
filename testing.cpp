/*#include<stdio.h>
#include<conio.h>
int main()
{
FILE *fp;
char ch;
fp=fopen(on\\Desktop\\New folder\\test.txt","r");
while(1){
ch=fgetc(fp);
if(ch==EOF)
break;

printf("%c",ch);
}
fclose(fp);
getch();
return 0;
}*/
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int main()
{int freq;
    char q[4000][100];
char l[4000][100];
int m=0;
    DIR * d;
    char * dir_name = "C:\\Users\\anon\\Desktop\\enron1\\ham\\";

   d = opendir (dir_name);

    if (! d) {
        fprintf (stderr, "Cannot open directory '%s': %s\n",
                 dir_name, strerror (errno));
        exit (EXIT_FAILURE);
    }
    
    while (1) {
          strcpy(l[m],"C:\\Users\\anon\\Desktop\\enron1\\ham\\");
        struct dirent * entry;
        
        entry = readdir (d);
        if (! entry) {
            break;
        }
        strcpy(q[m],entry->d_name);
        strcat(l[m],q[m]);
        m++;
    }
    
   
    /* Close the directory. */
    if (closedir (d)) {
        fprintf (stderr, "Could not close '%s': %s\n",
                 dir_name, strerror (errno));
        exit (EXIT_FAILURE);
    }
    char r[55][11]={	{	'm','a','k','e','?'              			}	,
	{	'a','d','d','r','e','s','s'    ,    '?'   			}	,
	{	'a','l','l'               			,'?'}	,
	{	'3','d'                          		,'?'	}	,
	{	'o','u','r'               ,'?'         			}	,
	{	'o','v','e','r'              ,'?'			}	,
	{	'r','e','m','o','v','e'           ,'?' 			}	,
	{	'i','n','t','e','r','n','e','t'        ,'?'  			}	,
	{	'o','r','d','e','r'             			,'?'}	,
	{	'm','a','i','l'            ,'?'  			}	,
	{	'r','e','c','e','i','v','e'     ,'?'     			}	,
	{	'w','i','l','l'              		,'?'	}	,
	{	'p','e','o','p','l','e'            		,'?'	}	,
	{	'r','e','p','o','r','t'          ,'?'  			}	,
	{	'a','d','d','r','e','s','s','e','s'   ,'?'      			}	,   
	{	'f','r','e','e'              		,'?'	}	,
	{	'b','u','s','i','n','e','s','s' ,'?'         			}	,
	{	'e','m','a','i','l'             	,'?'		}	,
	{	'y','o','u'               		,'?'	}	,
	{	'c','r','e','d','i','t'     ,'?'       			}	,
	{	'y','o','u','r'              	,'?'		}	,
	{	'f','o','n','t'              		,'?'	}	,
	{	'0','0','0'		,'?'	}	,
	{	'm','o','n','e','y' ,'?'            			}	,
	{	'h','p'                	,'?'		}	,
	{	'h','p','l'               	,'?'		}	,
	{	'g','e','o','r','g','e'          ,'?'  			}	,
	{	'6','5','0'	,'?'		}	,
	{	'l','a','b'      ,'?'         			}	,
	{	'l','a','b','s'       ,'?'       			}	,
	{	't','e','l','n','e','t'    ,'?'        			}	,
	{	'8','5','7'	,'?'		}	,
	{	'd','a','t','a'  ,'?'            			}	,
	{	'4','1','5'	,'?'		}	,
	{	'8','5'	,'?'		}	,
	{	't','e','c','h','n','o','l','o','g','y'        	,'?'		}	,
	{	'1','9','9','9'		,'?'	}	,
	{	'p','a','r','t','s'      ,'?'       			}	,
	{	'p','m'                		,'?'	}	,
	{	'd','i','r','e','c','t'          ,'?'  			}	,
	{	'c','s'          ,'?'      			}	,
	{	'm','e','e','t','i','n','g'  ,'?'         			}	,
	{	'o','r','i','g','i','n','a','l'   ,'?'       			}	,
	{	'p','r','o','j','e','c','t'           ,'?'			}	,
	{	'r','e'            ,'?'    			}	,
	{	'e','d','u'             ,'?'  			}	,
	{	't','a','b','l','e'          ,'?'   			}	,
	{	'c','o','n','f','e','r','e','n','c','e'  ,'?' 			},
    {';','?'},
    {'(','?'},
    {'[','?'},
    {'!','?'},
    {'$','?'},
    {'#','?'}    };

    
char name;
int  number;
int z;
FILE *f;
f = fopen("C:\\Users\\anon\\Desktop\\write.txt", "w");

  int counter,count,j;   
int i=0;
int k=0;
float ans1,ans2,ans;
int flag;
char c;
char a[40000];

for(z=2;z<1502;z++)      //1502 3490
{
                           i=0;

      FILE *file=fopen(l[z],"r");
      do
      {
        c=fgetc(file);
        a[i]=c;
        i++;
        if(c==EOF)
        flag=i;
        //printf("%c",c);
      }
      while(c!=EOF);
freq=0;
       for(i=0;i<flag;i++)
        {
                   if(a[i]==' '||a[i]=='\n' ||a[i]=='\t')
                   continue;
                    else if(i==0)
                   freq++;
                   else if((a[i-1]==' '||a[i-1]=='\n' ||a[i-1]=='\t')&& a[i]!=EOF)
                   freq++;
                   
         }
                    

printf("\n");

                 






for(k=0;k<54;k++)
{
counter=0;
count=0;
        for(i=0;i<flag;i++)
          {
                  for(j=0;r[k][j]!='?';j++)
                   {
                                 if(a[i+j]!=r[k][j])
                                    {counter=1;
                                     break;}
                                 else
                                 counter=0;
                   }
                   if(counter==0 && (a[i+j]==' ' || a[i+j]=='\n'))
                   { 
                            if(a[i-1]==' ' || a[i-1]=='\n')   
                            count++;
                   }
            }
    ans1=count;
    ans2=freq;
    ans=ans1/ans2;
    ans=ans*100;
   if(ans!=0.00)
    {   
         fprintf(f,"%.2f,",ans);
         printf("%.2f,",ans);
     
     }
    else 
    { 
 
         fprintf(f,"0,");
     printf("0,");
         }
}


fprintf(f,"1");
printf("1");
fprintf(f,"\n");
fclose(file);

}
fclose(f);






getch();
return 0;
}
