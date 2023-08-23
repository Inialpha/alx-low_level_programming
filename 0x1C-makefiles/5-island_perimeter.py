#!/usr/bin/python3
"""calaculates island parameter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid:"""
    i = 0
    ln = len(grid)
    para = 0
    while i < ln:
        row_len = len(grid[i])
        j = 0
        while j < row_len:
            if grid[i][j] == 1:
                para += 4
                if i != 0:
                    if grid[i - 1][j] == 1:
                        para -= 1
                if i < ln - 1:
                    if grid[i + 1][j] == 1:
                        para -= 1
                if j > 0:
                    if grid[i][j - 1] == 1:
                        para -= 1
                if j < row_len - 1:
                    if grid[i][j + 1] == 1:
                        para -= 1
            j += 1
        i += 1
    return para
