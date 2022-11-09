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
	return 2 * (len(island) + len(island[-1]))
