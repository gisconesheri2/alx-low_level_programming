#!/usr/bin/python3
"""returns perimeter of an island described in grid"""


def island_perimeter(grid):
    """returns perimeter of an island descrined in grid
        grid (list of lists, 2d- matrix) :
    """
    pl = []
    cl = []
    pos = 0
    perimeter = 0
    found_one = 0

    # max height is 100
    if len(grid) > 100:
        return

    # Grid is completely surrounded by water (0s)
    # check first and last row (lists) in grid
    if 1 in grid[0] or 1 in grid[len(grid)-1]:
        return

    for row in grid[1:]:

        # grid max width is 100
        if len(row) > 100:
            return

        # Grid is completely surrounded by water (0s)
        # check first and last items in the row
        if row[0] == 1 or row[len(row) - 1] == 1:
            return

        # there must be only one island
        # if one was found (perimeter is not 0) and last iteration
        # did not find island (1) return current perimeter
        if found_one == 0 and perimeter != 0:
            return perimeter

        # reset values for the next iteration
        pos = 0
        found_one = 0
        pl = cl
        cl = []
        for num in row:
            if num == 1:
                cl.append(pos)
                if len(cl) == 1 and pos not in pl:
                    perimeter += 4
                if len(cl) == 1 and pos in pl:
                    perimeter += 2

                if len(cl) >= 2:

                    # check for lakes within island
                    diff = pos - cl[-2]
                    if diff != 1:
                        return

                if len(cl) > 1 and diff == 1 and pos not in pl:
                    perimeter += 2

                if len(cl) > 1 and diff == 1 and pos in pl:
                    perimeter += 0
                pos += 1
                found_one = 1
            else:
                pos += 1
    return perimeter
