for((i = 1; ; ++i)); do
	echo $i
	./gen $i > int
	./dcepc11b < int > out1
	./brute < int > out2
	diff -w out1 out2 || break
done 
