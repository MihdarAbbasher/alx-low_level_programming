#!/usr/bin/python3
""" module for island perimeter"""

def island_perimeter(grid):
    """return the perimeter of grid"""
    res = 0

    if not grid:
        return 0
    h = len(grid)
    w = len(grid[0])
    for i in range(h):
        for j in range(w):
            if grid[i][j]:
                if i <= 0 or not grid[i - 1][j]:
                    res += 1
                if j <= 0 or not grid[i][j - 1]:
                    res += 1
                if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
                    res += 1
                if i >= len(grid) - 1 or not grid[i + 1][j]:
                    res += 1
    return res
