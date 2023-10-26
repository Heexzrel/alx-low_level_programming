#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
        """Return the perimiter of an island described in the grid."""
     c = 0
         for x in range(0, len(grid), 1):
              for j in range(0, len(grid[0]), 1):         
                if grid[x][j] == 1:
                                                         c = c + 4
                                                                         if j - 1 >= 0 and grid[x][j - 1] == 1:
                                                                                                 c -= 2
                                                                                                                 if x - 1 >= 0 and grid[x - 1][j] == 1:
                                                                                                                                         c -= 2
                                                                                                                                             return (c)
