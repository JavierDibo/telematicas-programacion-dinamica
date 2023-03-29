## Enunciado

En un determinado pais se emiten n sellos diferenees de valores naturales positvos, s1 s2 ... sn. Se quiere nviar
una carta u se sabe que la correspondiente tarifa postal es T. ¿De cuantas formas diferentes se puede franquear
exactament ela carta, si el orden de los selllos no importa?

### Guia

Para solucionar este problema se puede definir
la funcion: formas(n,T) = numero de fromas de franquear T con n tipos de sellos

### Resolucion

Se usa una matriz: `mat[n+1][T+1]`, y una lista con los valores de los sellos `vec[num_sellos]`

* `formas(0,j) = 0`  para todo j \in {1,...,T}

* `formas(i,0) = 1` Solo hay una forma de franquear `0`: no poniendo nada

* Es decir, la primera fila es todo `0` 

* La primera columna es todo `1`

* `(0,0)` da igual

formas(i,j) = formas(i-1, j) si S[i] > j
formas(i-1, j) + formas(i,j-s_1) en otro caso

Dados los sellos `S = {1,5,10,20}` y una tarifa `T=12`