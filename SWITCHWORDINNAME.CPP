#include <stdio.h>
#include <conio.h>
#include <string.h>
    void main()
{
	int l,i,count[100];
	char num[100];
	clrscr();
	printf("Enter Name\n");
	gets(num);
	l=strlen(num);
	for(i=0;i<26;i++)
	count[i]=0;
	for(i=0;num[i]!='\0';i++)
	{
	 switch(num[i])
	 {
	  case 'a':
	  count[0]=count[0]+1;
	  break;
	  case 'b':
	   count[1]=count[1]+1;
	   break;
	  case 'c':
       count[2]=count[2]+1;
       break;
	  case 'd' :
	  count[3]=count[3]+1;
	  break;
	       case 'e':
	  count[4]=count[4]+1;
	  break;
	     case 'f':
	  count[5]=count[5]+1;
	  break;
	   case 'g':
	  count[6]=count[6]+1;
	  break;
	    case 'h':
	  count[7]=count[7]+1;
	  break;
	    case 'i':
	  count[8]=count[8]+1;
	  break;
	    case 'j':
	  count[9]=count[9]+1;
	  break;
	    case 'k':
	  count[10]=count[10]+1;
	  break;
	    case 'l':
	  count[11]=count[11]+1;
	  break;
	    case 'm':
	  count[12]=count[12]+1;
	  break;
	    case 'n':
	  count[13]=count[13]+1;
	  break;
	    case 'o':
	  count[14]= count[14]+1;
	  break;
	    case 'p':
	  count[15]=count[15]+1;
	  break;
	    case 'q':
	  count[16]=count[16]+1;
	  break;
	    case 'r':
	  count[17]=count[17]+1;
	  break;
	    case 's':
	  count[18]=count[18]+1;
	  break;
	    case 't':
	  count[19]=count[19]+1;
	  break;
	    case 'u':
	  count[20]=count[20]+1;
	  break;
	    case 'v':
	  count[21]=count[21]+1;
	  break;
	   case 'w':
	  count[22]=count[22]+1;
	  break;
	    case 'x':
	  count[23]=count[23]+1;
	  break;
	  case 'y':
	  count[24]=count[24]+1;
	  break;
	   case 'z':
	  count[25]=count[25]+1;
	  break;
	}
       }
       for(i=0;i<26;i++)
       {
       switch(i)
       {
       case 0:
       printf(" A=%d",count[i]);
       break;
       case 1:
       printf(" B=%d",count[i]);
       break;
       case 2:
       printf(" C=%d",count[i]);
       break;
       case 3:
       printf(" D=%d",count[i]);
       break;
       case 4:
       printf(" E=%d",count[i]);
       break;
       case 5:
       printf(" F=%d",count[i]);
       break;
       case 6:
       printf(" G=%d",count[i]);
       break;
       case 7:
       printf(" H=%d",count[i]);
       break;
       case 8:
       printf(" I=%d",count[i]);
       break;
       case 9:
       printf(" J=%d",count[i]);
       break;
       case 10:
       printf(" K=%d",count[i]);
       break;
       case 11:
       printf(" L=%d",count[i]);
       break;
       case 12:
       printf(" M=%d",count[i]);
       break;
       case 13:
       printf(" N=%d",count[i]);
       break;
       case 14:
       printf(" O=%d",count[i]);
       break;
       case 15:
       printf(" P=%d",count[i]);
       break;
	case 16:
       printf(" Q=%d",count[i]);
       break;
	case 17:
       printf(" R=%d",count[i]);
       break;
	case 18:
       printf(" S=%d",count[i]);
       break;
	case 19:
       printf(" T=%d",count[i]);
       break;
	case 20:
       printf(" U=%d",count[i]);
       break;
	case 21:
       printf(" V=%d",count[i]);
       break;
	case 22:
       printf(" W=%d",count[i]);
       break;
	case 23:
       printf(" X=%d",count[i]);
       break;
	case 24:
       printf(" Y=%d",count[i]);
       break;
	case 25:
       printf(" Z=%d",count[i]);
       break;
	 }
	}
	getch();
	  }

