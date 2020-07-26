###########################
### Define Project
###########################

project(
    'chess',
    'cpp',
    default_options: [
        'cpp_std=c++17',
        'werror=true',
        'warning_level=3',
    ],
    version: '0.0.1',
)

###########################
### External Libraries
###########################


###########################
### Targets
###########################

chess_src = [
    'src/main.cpp',
]

executable(
    'chess',
    chess_src,
    install: true,
)
