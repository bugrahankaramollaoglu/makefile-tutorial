# automatic variables in makefile are those
# $@  denotes the target (file that rule updates or creates)
# $<  denotes the first dependency of a rule
# $^  denotes all the dependencies of a rule
# $?  denotes all the dependencies newer than the target

# first
first:
	@echo $@

# dep1
second: dep1 dep2 dep3
	@echo $<

# dep1 dep2 dep3
third: dep1 dep2 dep3
	@echo $^

# dep1 dep2 dep3
fourth: dep1 dep2 dep3
	@echo $?

# gcc -o program file1.c file2.c
program: file1.c file2.c
	gcc -o $@ $^
