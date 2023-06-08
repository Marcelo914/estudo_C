ll: ./exe
	git add .
	git commit -m "autoadd"
	git push -u origin master
	gcc calcula.c -o exe
	./exe
