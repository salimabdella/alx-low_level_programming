#!/usr/bin/python3
"""
island perimeter calc
"""


def island_perimeter(grid):
    """Island calculation"""
    res = 0
    if not grid: 
        return 0
    if not all(type(arr) == list for arr in grid): 
        return 0
    al = len(grid[0])
    if not all(len(arr) == al for arr in grid):
        return 0

    al = al - 1
    gl = len(grid) - 1
    for i, arr in enumerate(grid):
        for j, val in enumerate(arr):
            if (val == 1):
                if j == 0 or arr[j - 1] == 0:
                    res += 1
                if j == al or arr[j + 1] == 0:
                    res += 1
                if i == 0 or grid[i - 1][j] == 0:
                    res += 1
                if i == gl or grid[i + 1][j] == 0:
                    res += 1

    return res
