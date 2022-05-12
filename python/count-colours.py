# count-colours.py -- Counts the number of different colours in an image.
# Copyright (c) 2022 Raine "Gravecat" Simmons. Released under the MIT License.

from PIL import Image
import sys

def main():
    if len(sys.argv) < 2:
        print('Please provide a filename as a parameter.')
        exit()
    
    colours = set()
    image = Image.open(sys.argv[1])
    pixels = image.load()
    for x in range(0, image.size[0]):
        for y in range(0, image.size[1]):
            colour = pixels[x, y]
            if colour not in colours:
                colours.add(colour)
    print('There are {} different colours in {}'.format(len(colours), sys.argv[1]))

if __name__ == '__main__': main()
