# Scheduler Project

## Description

The Scheduler Project is a C library providing a task scheduler implementation. It enables you to add tasks with specified priorities and intervals, and the scheduler will execute them accordingly.

## Building the Scheduler

To build the Scheduler library, use the provided `makefile`:

```bash
make

Usage

    Include the scheduler.h header in your project.
    Create a scheduler instance using SchedulerCreate() to manage tasks.
    Add tasks to the scheduler using SchedulerAddTask() and specify the task's interval, operation function, and associated parameters.
    Start the scheduler by calling SchedulerRun() to begin task execution.
    Stop the scheduler with SchedulerStop() when task execution is complete.

Contributing

Contributions to the Scheduler project are welcome! If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.

Contact Information

For any inquiries or support, you can contact the author at:

    Email: aviv.jilin2@gmail.com

Enjoy using the Scheduler for your task management needs! 🚀
