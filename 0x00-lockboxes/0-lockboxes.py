#!/usr/bin/python3
"""
    module
"""


def canUnlockAll(boxes):
    """ unlock """
    visited = []
    stack = [0]
    while stack != []:
        if not stack[-1] in visited:
            visited.append(stack[-1])
        found = False
        for key in boxes[stack[-1]]:
            if not key in visited and key < len(boxes):
                stack.append(key)
                found = True
                break
        if not found:
            stack.pop()
    return len(visited) == len(boxes)
