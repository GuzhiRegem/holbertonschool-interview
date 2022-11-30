#!/usr/bin/python3
"""
    module
"""


def rain(walls):
    """ rain """
    out, prev = 0, [0, 0]
    for i, v in enumerate(walls):
        if v > 0:
            out, prev = out + (i - prev[0] - 1) * min(v, prev[1]), [i, v]
    return out
