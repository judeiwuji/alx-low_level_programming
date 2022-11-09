#!/usr/bin/python3
"""Contains the `island_perimeter` function."""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""

    island = []
    for row in grid:
        square = []
        for col in row:
            if col == 1:
                square.append(col)
        if len(square) > 0:
            island.append(square)
    length = len(island)
    width = len(island[-1])

    # if length == width:
    # is a square island
    # return 4 * len(island)
    # is a rectangle island
    return 2 * (length + width)
