#!/usr/bin/python3
"""Contains the `island_perimeter` function."""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""

    perimeter = 0
    for i in range(len(grid)):
        row  = grid[i]
        for j in range(len(row)):
            col = row[j]
            if col == 1:
                perimeter += 4
                if i - 1 >= 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i + 1 < len(grid) and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j + 1 < len(row) and row[j + 1] == 1:
                    perimeter -= 1
                if j - 1 >= 0 and row[j - 1] == 1:
                    perimeter -= 1

    return perimeter
