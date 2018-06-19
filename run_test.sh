#!/bin/bash 
ESPEAK_DATA_PATH=$(pwd) LD_LIBRARY_PATH=src:${LD_LIBRARY_PATH} src/espeak-ng --stdout -vam+steph2 "ጤና ይስጥልኝ እንደምን አላቹ ከሱዳን መጣን ልናያችሁ" | paplay
