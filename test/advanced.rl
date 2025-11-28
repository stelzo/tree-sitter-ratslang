# Include test
= ./included.rl

namespace {
    = ./another.rl
}

# Empty range
empty_range = ..

# Bounded ranges
lower_bound = 3m..
upper_bound = ..100s

# Multiple assignments
a, b, c = 1, 2, 3
x, y = 42

# Strings without quotes
unquoted = HelloWorld
sensor = Lidar::Ouster
