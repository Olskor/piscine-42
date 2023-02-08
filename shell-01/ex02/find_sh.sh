#!/bin/bash
find -type f -name "*.sh" | sed 's/.*\///g; s/...$//g'

