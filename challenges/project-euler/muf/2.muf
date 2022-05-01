: main
	pop 0 1 2 ( t f1 f2 )
	begin
		swap over + ( t f2 nf1 )
		dup 2 % 0 = if
			4000000 over > if ( t f2 nf1 )
				rot over + ( f2 nf1 nt )
				-3 rotate ( nt f2 nf1 )
			then
		then
		4000000 over <=
	until
	rot 2 + intostr me @ swap notify pop pop
;
