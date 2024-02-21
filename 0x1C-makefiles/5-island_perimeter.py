#!/usr/bin/python3
"""Define the island parameter measuring func."""


def island_perimeter(grid):
    """Island parameter whichich will defne a grid."""
    w = len(grid[0])
    h = len(grid)
    edge = 0
    size = 0

    for k in range(h):
        for m in range(w):
            if grid[k][m] == 1:
                size += 1
                if (m > 0 and grid[k][m - 1] == 1):
                    edge += 1
                if (k > 0 and grid[k - 1][m] == 1):
                    edge += 1
    return size * 4 - edge * 2
