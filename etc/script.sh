set --

set -- $PWD/{bash,make,libpwent,.};

printf "bash -c 'cd %s && git checkout main'\n" "$@"
