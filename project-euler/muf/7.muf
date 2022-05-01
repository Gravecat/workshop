: next_prime ( i -- i )
	var prime
	var count
	count !
	
	begin
		1 prime !
		count ++
		2 count @ 1 - 1 for
			count @ swap % 0 = if
				0 prime !
				break
			then
		repeat
	prime @ until
	count @
;

: main
	pop
	var prime
	1 prime !
	1 10001 1 for
		pop prime @ next_prime prime !
	repeat
	me @ prime @ intostr notify
;
