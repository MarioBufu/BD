SET TALK OFF
use Lab3
X=1
do while X>0
X=VAL(ACCEPT("OPTIUNE"))
clear
?"1 Add"
?"2 Afisare"
?"3 Modificare inregistrare"
?"4 Stergere dupa CODA dat"
?"5 Revalidare nr inregistrare data de la tastatura"
?"6 Eliminare marcate"
?"7 Afisare vachime"
?"0 Sfarsit"


if(X=1)
VCODA=VAL(ACCEPT("CODA"))
VNUME= TRIM(ACCEPT("NUME "))	
VDATA=CTOD( ACCEPT( "DATA-AN"))
VBURSA=VAL(ACCEPT("SALAR"))
APPEND BLANK              
REPL VECHIME WITH YEAR(DATE())-YEAR(DATA_AN)
endif
          
if(X=2)
LIST
endif

if(X=3)
V=TRIM(ACCEPT("NUME CE SE DORESTE MODIFICAT"))
LOCATE FOR NUME = V 
IF EOF()  			
  ? "studentul " + VNUME + " nu exista"
  WAIT
  LOOP 	
 ENDIF
 EDIT
endif
  
if(X=4)
V=VAL(ACCEPT("CODA CE SE DORESTE STERS"))
SCAN ALL FOR CODA=V
SET EXCLUSIVE ON
use Lab3
DELETE
PACK
ENDSCAN
endif

if(X=5)
V=VAL(ACCEPT("INREGISTRARE CE SE DORESTE REVALIDATA"))
go V
RECALL 
endif

if(X=6)
SET EXCLUSIVE ON
use Lab3
PACK
endif

if(X=7)
DO WHILE .NOT.EOF() 
IF(VECHIME>10)
	DISP
	WAIT             
ENDIF
SKIP   				 
ENDDO
endif


ENDDO
USE
RETURN


