Iguales(L1,L2) → boleano
Efecto: Devuelve verdadero Si L1 y L2 son iguales y falso Sino.
Requiere: L1 y L2 inicializadas
Modifica:
Nota: Si L1 = 7, 9 y L2 = 9, 7 entonces L1 y L2 No son iguales




Iguales(ListaIndexada L1, ListaIndexada L2)
{
  bool iguales = false
  Si(NumElemem(L1) == NumElem(L2))
  {
    int actual = 1
    iguales = true
    mientras( actual <= NumElem(L1) && iguales )
    {
      Si( Recuperar(actual,L1) != Recuperar (actual,L2))
      {
        iguales = false
      }
      ++actual
    }
    }
  retornar iguales
  }



Iguales(ListaPosicionada L1, ListaPosicionada L2)
{
  bool iguales = true
  Si(NumElemem(L1) == NumElem(L2))
  {
    posicion actualL1 = Primera(L1)
    posicion actualL2 = Primera(L2)
    iguales = true
    contador = 1
    mientras( contador <= NumElem(L1) && iguales )
    {
      Si( Recuperar(actualL1,L1) != Recuperar (actualL2,L2))
      {
        iguales = false
      }
       actualL1 = Siguiente(actualL1,L1)
       actualL2 = Siguiente(actualL2,L2)
       ++contador
    }
    }
  retornar iguales
  }

Iguales(ListaOrdenada L1, ListaOrdenada L2)
{
  bool iguales = true
  Si(NumElemem(L1) == NumElem(L2))
  {
    elemento actualL1 = Primera(L1)
    elemento actualL2 = Primera(L2)
    iguales = true
    mientras( i <= NumElem(L1) && iguales )
    {
      Si( actualL1 != actualL2)
      {
        iguales = false
      }
       actualL1 = Siguiente(actualL1,L1)
       actualL2 = Siguiente(actualL2,L2)
       ++contador
    }
    }
  retornar iguales
  }
