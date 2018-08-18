shapeArea n | n == 1 = 1
            | n == 2 = 5
            | n > 2 = (n - 1) * 4 + (shapeArea (n - 1))
