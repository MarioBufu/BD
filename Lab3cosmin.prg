USE Angajat
SET TALK OFF
DO WHILE.T.
TEXT
OPTIUNI:
1-ADD
2-AFISARE
3-MODIFICARE NUME
4-STERGE CODA
5-REVALIDARE
6-ELIMINARE MARCATE
7-AFISARE VECHIME
T-IESIRE
ENDTEXT
WAIT TO R
IF NOT R $'1234567T'
return
ENDIF
DO CASE
	CASE R='1'
		APPEND BLANK
	CASE R='2'
		DISP ALL
		WAIT
	CASE R='3'
		VNUME=TRIM(ACCEPT('Numele inregistrarii:'))
		LOCATE FOR NUME=VNUME
		DISP VNUME
	CASE R='4'
		N=VAL(ACCEPT('Codul de sters'))
		SCAN FOR CODA=N
		DELETE RECORD N
		ENDSCAN
	CASE R='5'
		N=VAL(ACCEPT('Nr de revalidat'))
		RECALL RECORD N
	CASE R='6'
		PACK
		WAIT
		LIST
	CASE R='7'
		DISP VECHIME FOR VECHIME>3
	CASE R='T'
		USE
		RETURN
	ENDCASE
	ENDDO