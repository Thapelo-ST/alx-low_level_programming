#!/usr/bin/python3
"""
    calculates the perimeter of an island in the frid

    returns: the perimeter of the island
"""


def island_perimeter(grid):
    """
    calculates the perimeter of an island in the frid

    returns: the perimeter of the island
    """
    # declare variables needed
    perimeter = 0

    # get length of grid
    for i in range(len(grid)):
        # checking each value in the length of grid
        for j in range(len(grid[0])):
            # check if position is 1
            if grid[i][j] == 1:
                # for each cell its 4 to the perimeter
                perimeter += 4
                # check if the land is adjacent to each other
                if i > 0 and grid[i - 1][j] == 1:
                    # subtract 2 if so
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    # subtract 2 if so
                    perimeter -= 2
    return perimeter
