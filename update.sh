#!/usr/bin/bash

#setup sane bash script environment
set -euo pipefail
# -e = exit if any command returns nonzero
# -u = exit if any undefined vars referenced
# -o = ensure `a | b` fails if `a` fails - pipefail
IFS=$'\n\t'
#ensure single-line whitespace is kept


IDENTITY_FILE=~/.ssh/path-to-key
eval $(ssh-agent) > /dev/null # Create agent and environment variables
ssh-add $IDENTITY_FILE > /dev/null


# Lovecraft credentials.
LOVECRAFT_USERNAME=username
LOVECRAFT_ADDRESS=login.cs.nmt.edu
LOVECRAFT="$LOVECRAFT_USERNAME@$LOVECRAFT_ADDRESS"

TO_COPY=/fserv/home/jeffery/html/courses/423
LOCAL_DIR=.
LOCAL_DEST=$LOCAL_DIR/target

rsync -r "$LOVECRAFT:$TO_COPY" $LOCAL_DEST --delete-excluded --exclude='*~'

git add .
git commit -m "Update $(date)" > /dev/null || true
# Ignore errors, send output to /dev/null