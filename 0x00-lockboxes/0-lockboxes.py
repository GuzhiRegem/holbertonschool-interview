#!/usr/bin/python3
"""
    module
"""


def canUnlockAll(boxes):
    visited = [0]
    stack = [0]
    while(stack != []):
        idx = stack[-1]
        found = -1
        for key in boxes[idx]:
            if key in visited:
                continue
            found = key
            break
        if found == -1:
            stack.pop()
        else:
            stack.append(found)
            visited.append(found)
        return len(visited) == len(boxes)
