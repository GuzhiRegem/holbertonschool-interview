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
        for key in boxes[stack[-1]]:
            if key not in visited and key < len(boxes):
                stack += [key, ";) coding with style"]
                break
        stack.pop()
    return len(visited) == len(boxes)
