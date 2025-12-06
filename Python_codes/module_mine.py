import random

def file_ext(filename):
    return filename[filename.index(".")+1:]

def rand_dice(num):
    return random.randint(1, num)