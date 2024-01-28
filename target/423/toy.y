%term NAME NUMBER
%%
[a-zA-Z]+ { return NAME; }
[0-9]+ { return NUMBER; }
[ \t]+ { }
. { fprintf(stderr, "unrecognized character\n"); }
