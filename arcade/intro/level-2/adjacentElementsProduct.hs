adjacentElementsProduct x = maximum (zipWith (*) x (tail x))
