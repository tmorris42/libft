# Changelog
All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]
### Added
- This CHANGELOG file to track changes
- README.md to provide information on this project
- Testing Framework to test libft functions
- Tests for ft_abs, ft_atoi, ft_atol, ft_atoll, ft_bzero, ft_calloc
- ft_atoll

### Changed
- ft_atoi now mimics atoi's overflow behavior
- ft_atol now mimics atol instead of atoll

## [4.0.0] - 2022-03-20
### Added
- ft_strndup
- ft_is* functions to check for common patterns
- ft_strcmp
- ft_atol

### Changed
- Update ft_lstdelone to accept a NULL delete function
- Make ft_putstr_fd to accept const char *src
- Move source files into srcs/
- Update Makefile to prevent relinking
- Move libft.h and get_next_line.h into includes/

### Removed
- Legacy .gitmodules
- libft.h and get_next_line.h in root

## [3.0.2] - 2021-06-14
### Fixed
- Update gnl to prevent leaks

## [3.0.1] - 2021-06-12
### Fixed
- Update gnl to comply with Norminette V3

## [3.0] - 2021-06-12
### Fixed
- Update code to pass Norminette V3

## [2.0] - 2021-06-12
### Added
- ft_putchar.c, ft_putnbr.c, and ft_putstr.c to facilitate ft_put*_fd on STDOUT
- .gitignore to prevent accidental inclusion of output files in the repo
- gnl to allow use of the get_next_line function through libft
- ft_max and ft_min to calculate the max and min of two values
- ft_putint_fd and ft_putint to print an int as a character

### Fixed
- lst functions
- ft_strlcat.c: store strlen instead of repeatedly calculating it to improve performance
- Make bonus functions alongside normal functions

## [1.0] - 2020-11-24
### Added
- Libft functions









