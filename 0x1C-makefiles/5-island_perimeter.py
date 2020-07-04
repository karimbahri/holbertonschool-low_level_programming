#!/usr/bin/python3
"""island_perimeter"""


def island_perimeter(grid):
    """island_perimeter function"""
    per = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == 0:
                    per += 1
                elif grid[i - 1][j] == 0:
                    per += 1
                if i == len(grid) - 1:
                    per += 1
                elif grid[i + 1][j] == 0:
                    per += 1
                if j == 0:
                    per += 1
                elif grid[i][j - 1] == 0:
                    per += 1
                if j == len(grid[i]) - 1:
                    per += 1
                elif grid[i][j + 1] == 0:
                    per += 1
    return per
