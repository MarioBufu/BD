set talk off
TEXT
 FUNCTII OFERITE:
	1- add
	2- afisare
	3- modificare (nume)
	4- marcare (coda).
	5- revalidare (nr)
	6- eliminare marcate
	7- afisare vechime>3
	0- terminare program
ENDTEXT

DO WHILE.T.
	k=accept("k=")
   if.not.k $'01234567'
		return
   endif
	DO CASE
   	CASE k='1'
      	use stud
         append blank
         edit	

   	CASE k='2'
      disp all

      CASE k='3'
      use stud
      x=trim(accept("nume="))
      locate for nume=x
      if EOF()
			loop
      endif
      edit	

      CASE k='4'
      x=val(accept("coda="))
      scan for coda=x
      	if eof()
         	loop
      	endif
      	delete
      endscan

      CASE k='5'
      	use stud
         x=val(accept("nr inregistrare="))
         recall record x

      CASE k='6'
      	pack

      CASE k='7'
      	do while .not.eof()
         	if vechime>3
            	disp
				endif
			enddo
      CASE k='0'
      	exit

   	OTHERWISE

	ENDCASE
enddo
return