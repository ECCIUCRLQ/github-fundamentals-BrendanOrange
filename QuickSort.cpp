QuickSort(L)
Efecto: Ordena ascendentemente los elementos de L
Requiere: L inicializada
Modifica: L
Nota: Usa el algoritmo de ordenamiento conocido como Quick Sort. Usa la política de escogencia del
pivote presentada por Aho, en su libro Estructuras de Datos y Algoritmos, capítulo 8.


QuickSort(ListaIndexada L, int inicial, int final)
{
    Si( existen al menos dos claves distintas en L){
      pivote = encuentraPivoteIndexada(L, inicial, final)
      permutar L[i],...,L[j] de manera que para algun indice k entre
      inicial + 1 y final , de forma que los valores del rango
      L[incial],..., L[k - I] tengan claves menores que
      pivote y los elementos L[k,...,L[j] tengan claves >= pivote
    }
    else
      retornar
}

QuickSort(ListaPosicionada L, int inicial, int final)
{
    Si(existen al menos dos claves distintas en L){
      pivote = encuentraPivoteIndexada(L, inicial, final)
      permutar L[i],...,L[j] de manera que para algun indice k entre
      inicial + 1 y final , de forma que los valores del rango
      L[incial],..., L[k - I] tengan claves menores que
      pivote y los elementos L[k,...,L[j] tengan claves >= pivote
    }
    else
      retornar
}

encuentraPivoteIndexada(ListaIndexada L, int inicial , int final){
  elemento pivoteTemp1 = Recuperar(inicial, L)
  indicePivote = 0
  bool pivoteEncontrado = false
  int contador = inicial
  Mientras (contador <= final && !pivoteEncontrado ){
    si(pivoteTemp1 > Recuperar(contador, L)){
      pivoteEncontrado = true
      indicePivote = inicial
    }
    sino si ( pivoteTemp1 < Recuperar(contador, L)){
      pivoteEncontrado = true
      indicePivote = contador
    }
    ++contador
  }
  retornar indicePivote
}

encuentraPivotePosicionada(ListaPosicionada L, int inicial , int final){
  elemento pivoteTemp1 = Recuperar(Primera(L), L)
  posPivote = NULL
  bool pivoteEncontrado = false
  pos actual = inicial
  Mientras (actual != final && !pivoteEncontrado ){
    si(pivoteTemp1 > Recuperar(contador, L)){
      pivoteEncontrado = true
      posPivote = inicial
    }
    sino si ( pivoteTemp1 < Recuperar(contador, L)){
      pivoteEncontrado = true
      posPivote = actual
    }
    actual = Siguiente(actual,L)
  }
  retornar posPivote
}
