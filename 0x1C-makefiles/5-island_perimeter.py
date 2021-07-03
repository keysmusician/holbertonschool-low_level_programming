#!/usr/bin/python3
"""Function which finds the perimiter of an island described by a grid."""


def island_perimeter(grid):
    """Return the perimeter of the island described in "grid"."""
    perimeter = 0
    for row in grid:
        for cell in row:
            if cell:
                perimeter += 2
    return perimeter + 2
