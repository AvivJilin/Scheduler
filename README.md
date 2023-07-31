# Scheduler Project

**Version:** 1.5

## Description

The Scheduler Project is a C library providing a task scheduler implementation. It allows you to add tasks with specified priorities and intervals, and the scheduler will execute them accordingly.

## Directory Structure

Before building the Scheduler project, make sure you have the following directory structure in your project:

    src
    |- sorted_list.c
    |- dlist.c
    |- p_queue.c
    |- task.c
    |- uid.c
    |- scheduler.c

    include
    |- dlist.h
    |- p_queue.h
    |- scheduler.h
    |- sorted_list.h
    |- task.h
    |- uid.h

    test
    |- scheduler_test.c
    |- tests.h
    |- utilities.h

    makefile

If you don't have these directories (`src`, `include`, and `test`) already, create them in your project directory and place the respective files in the appropriate folders.

## Building the Scheduler

To build the Scheduler library, use the provided `makefile`:

```bash
make
```

This will compile the source files and link them together to create the final executable scheduler_test.out.
## Usage

1. Create a scheduler instance using `SchedulerCreate()` to manage tasks.
2. Add tasks to the scheduler using `SchedulerAddTask()` and specify the task's interval, operation function, and associated parameters.
3. Start the scheduler by calling `SchedulerRun()` to begin task execution.
4. Stop the scheduler with `SchedulerStop()` when task execution is complete.

Valgrind for Memory Leak Detection

You can run the scheduler with Valgrind for memory leak detection using the following command:

```bash

make vlg

```

Cleaning Up

To clean up the generated files (executable and object files), you can use the make clean target:

```bash

make clean

```

Contributing

Contributions to the Scheduler project are welcome! If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.

Contact Information

For any inquiries or support, you can contact the author at:

    Email: aviv.jilin2@gmail.com

Enjoy using the Scheduler for your task management needs! 🚀
