#!/usr/bin/python3
"""
This module is for getting an island perimeter in a grid
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    perimeter = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                # check up
                if y == 0:
                    perimeter += 1
                else:
                    if y - 1 >= 0 and grid[y-1][x] == 0:
                        perimeter += 1

                # Check right
                if x + 1 == len(grid[y]):
                    perimeter += 1
                else:
                    if x + 1 < len(grid[y]) and grid[y][x+1] == 0:
                        perimeter += 1

                # Check left
                if x == 0:
                    perimeter += 1
                else:
                    if x - 1 >= 0 and grid[y][x-1] == 0:
                        perimeter += 1

                # Check down
                if y + 1 == len(grid):
                    perimeter += 1
                else:
                    if y + 1 <= len(grid) and grid[y+1][x] == 0:
                        perimeter += 1

    return perimeter
