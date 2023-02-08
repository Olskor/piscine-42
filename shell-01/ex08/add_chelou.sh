#! /bin/bash
echo "Z${FT_NBR1} + ${FT_NBR2}" | tr \'\\\\\"\?\! '01234' | tr mrdoc '01234' | sed 's/\Z/obase = 13; ibase=5;/g' | bc | tr '0123456789abc' 'gtaio luSnemf'
