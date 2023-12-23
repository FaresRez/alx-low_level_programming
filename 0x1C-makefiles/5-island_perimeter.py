#!/usr/bin/python3
"""
calculate the perimeter of the island
"""

def island_perimeter(grid):
    count = 1
    for l in grid:
        for cell in l:
            if cell == 1:
                count+=1
    return count*2
