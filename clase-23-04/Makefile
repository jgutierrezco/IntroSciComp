fig.pdf : script.gp data.txt
	gnuplot script.gp

sumupdown.x : sumupdown.cpp          # Se ejecuta solo la primera regla por defecto al escribir make
	g++ sumupdown.cpp -o sumupdown.x

data.txt : sumupdown.x               # Si se quiere ejecutar, se especifica el target después de make. Como tiene que recurrir a todas las dependencias, corre todo.
	./sumupdown.x > data.txt

clean:                               # Sin target. Elimina todos los archivos creados según especificado
	rm -f *.x a.out *.x *.pdf