SOURCES := $(wildcard *.cpp)
OBJECTS = $(SOURCES: .cpp = .o)

fig.pdf : script.gp data.txt
	gnuplot $<

%.o : $.cpp          # Se ejecuta solo la primera regla por defecto al escribir make
	g++ $< -c

sumupdown.x : $(OBJECTS)
	g++ $^ -o $@

data.txt : sumupdown.x               # Si se quiere ejecutar, se especifica el target después de make. Como tiene que recurrir a todas las dependencias, corre todo.
	./$< > $@

clean:                               # Sin target. Elimina todos los archivos creados según especificado
	rm -f *.x a.out *.txt *.pdf *.o