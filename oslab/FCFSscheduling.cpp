#include <stdio.h>
// Process structure
typedef struct
{
    int pid;   // Process ID
    int burst; // Burst time
} Process;
// Function to sort the processes based on burst time
void sortProcesses(Process *processes, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (processes[j].burst > processes[j + 1].burst)
            {
                // Swap the processes
                Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }
}
// Function to calculate waiting time and turnaround time for each process
void calculateTimes(Process *processes, int n)
{
    int waitingTime[n], turnaroundTime[n];
    waitingTime[0] = 0;
    turnaroundTime[0] = processes[0].burst;
    for (int i = 1; i < n; i++)
    {
        waitingTime[i] = waitingTime[i - 1] + processes[i - 1].burst;
        turnaroundTime[i] = waitingTime[i] + processes[i].burst;
    }
    // Print the results
    printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t\t%d\t\t%d\n", processes[i].pid, processes[i].burst, waitingTime[i], turnaroundTime[i]);
    }
}
int main()
{
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    Process processes[n];
    printf("Enter burst time for each process:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Process %d: ", i + 1);
        scanf("%d", &processes[i].burst);
        processes[i].pid = i + 1;
    }
    // Sort the processes based on burst time
    sortProcesses(processes, n);
    // Calculate waiting time and turnaround time for each process
    calculateTimes(processes, n);
    return 0;
}