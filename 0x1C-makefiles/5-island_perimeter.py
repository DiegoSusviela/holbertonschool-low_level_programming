#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """returns permimetro"""
    perimetro = 0
    for fila in range(0, len(grid)):
        for col in range(0, len(grid[fila])):
            if grid[fila][col] == 1:
                if col < len(grid[fila]) - 1 and grid[fila][col + 1] == 0:
                    perimetro += 1
                if col > 0 and grid[fila][col - 1] == 0:
                    perimetro += 1
                if fila > 0 and grid[fila - 1][col] == 0:
                    perimetro += 1
                if fila < len(grid) - 1 and grid[fila + 1][col] == 0:
                    perimetro += 1
                if fila == 0 or fila == len(grid) - 1:
                    perimetro += 1
                if col == 0 or col == len(grid[fila]) - 1:
                    perimetro += 1
    return perimetro
