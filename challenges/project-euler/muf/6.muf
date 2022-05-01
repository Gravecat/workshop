: main
	var sum_of_squares
	var sum
	var square_of_sums
	
	1 100 1 for
		sum @ over + sum !
		sum_of_squares @ swap dup * + sum_of_squares !
	repeat
	sum @ dup * square_of_sums !
	me @ "Sum of squares: " sum_of_squares @ intostr strcat notify
	me @ "Square of sums: " square_of_sums @ intostr strcat notify
	me @ "Difference: " square_of_sums @ sum_of_squares @ - intostr strcat notify
;
