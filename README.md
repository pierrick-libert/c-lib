# My C library

Requires C, make and GCC

The purpose of this repository is just to share a homemade C library to show the basics of the C language to beginner.

It's not a substitute to the real C library and should not be used in production or for studies.

## Available command

To compile the library:
```
make
```

To clean your repository:
```
make clean
make fclean
```

To recompile the library:
```
make re
```

## Using the library

To use the library you must include it during your compilation, below you'll find a example:
```
gcc -L{repo_of_the_lib} -o yourprog main.c -l{your_library_name}
```

The library name must start by `lib` and then a name such as `libutils` or `libmy`
Thus the included name in your command line should be:
```
-lutils | -lmy
```

## Contribution

Keep in mind that's the structure of the code has been thought and created according to my experience, it doesn't mean it's the best one and shouldn't be improved. Don't hesitate to create a PR if you think you may improve this seed, I will be glad to review it and discuss about it with you

### Guideline

Clone the project in your computer and create a branch from `master`, not `develop` then follow the rules below:

* First create an issue with the proper label `enhancement`, `bug`, `feature` or `architecture`
* Create your branch by using one the label above + `/{issue-name}`
* Make your changes
* Create a PR and then assign one of the contributor below with the role `admin`
* Your code will be reviewed and comments/changes may be requested
* If everything goes well, your code will be merged with `develop` and then to `master` after a while

When updating the code and before creating the PR, please keep in mind the points below:

* Please describe the proposed api and implementation plan (unless the issue is a relatively simple bug and fixing it doesn't change any api)
* Please write as little code as possible to achieve the desired result
* Please avoid unnecessary changes, refactoring or changing coding styles as part of your change (unless the change was proposed as refactoring)
* Please follow the coding conventions even if they are not validated (and/or you use different conventions in your code)

### Contributor

|Name|Role|
|--|--|
|[Pierrick Libert](https://github.com/pierrick-libert)|_Admin_|

### License

When contributing the code you confirm that:

* Your contribution is created by you
* You understand and agree that your contribution is public, will be stored indefinitely, can be redistributed as the part of the project, modified or completely removed from the project
* You waive all rights to your contribution
* Unless you request otherwise, you can be mentioned as the author of the contribution in the project documentation and change log
