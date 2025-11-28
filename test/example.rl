# a comment
variable = true

time = 1s
time_is_running = 1ms..2mins

len = 1cm..1m

# _ signals a variable the interpreter is looking for.
_internal = time_is_running

my.super.long.prefix.var = 0..100

# nested
my.super {

    long.prefix {
        next_var = "UTF-🎱 Strings"
    }

    something_else = -99.018
}

mat = [ [ 6, 1, 9 ],
        [ 3, 1, 8 ] ]
