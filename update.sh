#!/usr/bin/bash

#setup sane bash script environment
set -euo pipefail
# -e = exit if any command returns nonzero
# -u = exit if any undefined vars referenced
# -o = ensure `a | b` fails if `a` fails - pipefail
IFS=$'\n\t'
#ensure single-line whitespace is kept

# Lovecraft credentials.
LOVECRAFT_USERNAME=username
LOVECRAFT_ADDRESS=login.cs.nmt.edu
LOVECRAFT="$LOVECRAFT_USERNAME@$LOVECRAFT_ADDRESS"

TO_COPY=/fserv/home/jeffery/html/courses/423
LOCAL_DEST=./jeffery_423_2024_spring/target

rsync -r "$LOVECRAFT:$TO_COPY" $LOCAL_DEST --delete-excluded --exclude='*~'

git add .
git commit -m "Update $(date)" || true
