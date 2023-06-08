ll: ./exe
	git add .
	git commit -m "autoadd"
	git push -u origin master
	gcc teste.c -o exe
	./exe
