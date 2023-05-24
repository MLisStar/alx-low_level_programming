#!/usr/bin/python3
""" Module that contains the island_perimeter function """


def island_perimeter(grid):
    """returns the peri of island"""
    peri = 0

    rowNum = len(grid)

    if grid != []:
        colNum = len(grid[0])

    for a in range(rowNum):
        for b in range(colNum):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    peri += 1
                if(a + 1) == rowNum or grid[a + 1][b] == 0:
                    peri += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    peri += 1
                if(b + 1) == colNum or grid[a][b + 1] == 0:
                    peri += 1

    return peri
