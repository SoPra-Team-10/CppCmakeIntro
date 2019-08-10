RUBBER=rubber
DOT=dot
VIEWER=evince
PRESENTER=pdfpc

all: main.pdf

main.pdf: build.pdf main.tex
	$(RUBBER) --unsafe -d main.tex

build.pdf: build.dot
	$(DOT) -T pdf -o build.pdf build.dot

show: main.pdf
	$(VIEWER) main.pdf 2> /dev/null

present: main.pdf
	$(PRESENTER) main.pdf

clean:
	rm -f *.toc
	rm -f *.aux
	rm -f *.log
	rm -f *.out
	rm -f *.bbl  
	rm -f *.blg  
	rm -f *-blx.bib  
	rm -f *.fdb_latexmk
	rm -f *.xml
	rm *.bcf
	rm build.png

clean_all: clean
	rm *.pdf
