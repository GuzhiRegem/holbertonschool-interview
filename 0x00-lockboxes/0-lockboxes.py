#!/usr/bin/python3
"""
    module
"""


def canUnlockAll(boxes):
    """ unlock """
    opened = [False] * len(boxes)
    visited = []
    stack = [0]
    while stack != []:
        if not stack[-1] in visited:
            visited.append(stack[-1])
            opened[stack[-1]] = True
        found = False
        for key in boxes[stack[-1]]:
            if not key in visited:
                stack.append(key)
                found = True
                break
        if not found:
            stack.pop()
    return not False in opened
