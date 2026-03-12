#!/bin/bash

URL="https://speed.hetzner.de/1MB.bin"
SIZE_KB=10  # tiny chunk

# get current timestamp in ms
now_ms() { date +%s%3N; }

# download tiny chunk, measure time
START=$(now_ms)
curl -s --range 0-$((SIZE_KB*1024)) -o /dev/null $URL
END=$(now_ms)

# calc KB/s
DELTA=$((END-START))
RATE_KB=$((SIZE_KB*1000/DELTA))

# auto scale to MB
if [ "$RATE_KB" -ge 1024 ]; then
    RATE=$(awk "BEGIN{printf \"%.1f\", $RATE_KB/1024}")
    UNIT="MB/s"
else
    RATE=$RATE_KB
    UNIT="KB/s"
fi

# fancy arrows
echo "$RATE $UNIT"
