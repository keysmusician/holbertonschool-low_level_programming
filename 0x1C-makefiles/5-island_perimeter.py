#!/usr/bin/python3
"""Function which finds the perimiter of an island described by a grid."""


def island_perimeter(grid):
    """Return the perimeter of the island described in "grid"."""
    edge_count = 0
    for r, row in enumerate(grid):
        for i, cell in enumerate(row):
            cell_above = grid[r - 1][i]
            if cell_above - cell is not 0:
                edge_count += 1
            cell_left = row[i - 1]
            if cell_left - cell is not 0:
                edge_count += 1
    return edge_count
