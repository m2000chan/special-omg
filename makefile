all: start.c
	gcc -o start start.c -lm
	./start
	convert img.ppm img png

clean:
	rm *.ppm
	rm start
	rm *.png
