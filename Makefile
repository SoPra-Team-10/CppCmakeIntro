RUBBER=rubber
DOT=dot
EVINCE=evince

all: build.pdf
	$(RUBBER) -d main.tex

build.pdf: build.dot
	$(DOT) -T pdf -o build.pdf build.dot

show: all
	$(EVINCE) main.pdf 2> /dev/null

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
