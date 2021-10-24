set pagination off

break 39 if ($i % 5 == 0)
	command 1
	printf "@@@%d, %d, %d, %d\n", N, M, S, i
	continue
end

break 45 if ($i % 5 == 0)
	command 1
	printf "@@@%d, %d, %d, %d\n", N, M, S, i
	continue
end

break 50 if ($i % 5 == 0)
	command 1
	printf "@@@%d, %d, %d, %d\n", N, M, S, i
	continue
end

run 1 12

quit