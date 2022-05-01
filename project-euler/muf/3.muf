( Note: Because MUF cannot support 32-bit integers, this problem is being
  solved using a bit of a kludge, using doubles instead of ints. The end
  result should still be the same. )

: next_prime ( d -- d )
	var prime
	var count
	count !
	
	begin
		1 prime !
		count ++
		2 count @ 1 - int 1 for
			count @ int swap % 0 = if
				0 prime !
				break
			then
		repeat
	prime @ until
	count @
;

: main
	var found
	var num
	0 found !
	600851475143.0 num !
	begin
		1 found !
		var count
		3.0 count !
		begin
			num @ int count @ int % 0 = if
				num @ count @ / num !
				0 found !
				break
			then
			count @ next_prime count !
		count @ num @ >= until
	found @ until
	me @ num @ intostr notify
;
