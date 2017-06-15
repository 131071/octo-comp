octocomp: main.o comp.o decomp.o tree.o 
	g++ main.o comp.o decomp.o tree.o -o octocomp

main.o: main.cc
	g++ -c -g main.cc

comp.o: comp.cc comp.h
	g++ -c -g comp.cc

decomp.o: decomp.cc decomp.h
	g++ -c -g decomp.cc

tree.o: tree.cc tree.h
	g++ -c -g tree.cc