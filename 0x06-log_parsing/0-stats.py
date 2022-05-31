#!/usr/bin/python3
"""
    module
"""
import fileinput


def print_dir(d):
    for key, value in d.items():
        if value != 0:
            print(f"{key}: {value}")


if __name__ == "__main__":

    lis = []
    total = 0
    stats = {
        200: 0,
        301: 0,
        400: 0,
        401: 0,
        403: 0,
        404: 0,
        405: 0,
        500: 0
        }
    for line in fileinput.input():
        args = line.split(" ")
        if not int(args[-2]) in list(stats.keys()):
            continue
        lis.append(int(args[-1]))
        stats[int(args[-2])] += 1
        if len(lis) == 10:
            total += sum(lis)
            print(f"File size: {total}")
            print_dir(stats)
            lis = []
