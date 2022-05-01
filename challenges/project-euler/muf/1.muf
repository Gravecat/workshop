: main
	0
	1 999 1 for
		dup 3 % 0 = over 5 % 0 = or if +
		else pop
		then
	repeat
	me @ swap intostr notify
;
