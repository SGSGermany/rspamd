type = "fuzzy";
bind_socket = "127.0.0.1:11335";
count = 1;
backend = "sqlite";
database = "${DBDIR}/fuzzy.db";
expire = 90d;
allow_update = ["127.0.0.1"];
