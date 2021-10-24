

range: range.c
	gcc	$^	-O0	-g	-o	$@

test: range script-1 script-2

script-1: script-1.gdb
	gdb $(GDB_FLAGS) --command=$^ ./range | grep @@@ | cut -c 5- > script-1.gdbout

script-2: script-2.gdb
	gdb $(GDB_FLAGS)  --command=$^ ./range | grep @@@ | cut -c 5- > script-2.gdbout

clean:
	rm	-f	range *.gdbout *.txt