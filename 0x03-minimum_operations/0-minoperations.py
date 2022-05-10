#!/usr/bin/python3
"""
    module
"""


def get_divs(n):
    """return a list of divs"""
    out = []
    for id in range(1, int(n/2)):
        if(int(n/id) == n/id):
            out.append(id)
    return out


def minOperations(n):
    """ min Operations """
    if n <= 1:
        return 0
    if n <= 3:
        return n
    divs = get_divs(n)
    max_div = max(get_divs(n))
    return int(n/max_div + minOperations(max_div))
