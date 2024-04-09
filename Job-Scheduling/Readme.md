# Job Sequencing with Deadline

## Overview

The job sequencing algorithm is utilized to schedule tasks on a single processor with the aim of maximizing profits. The greedy approach to this algorithm asserts, “Given ‘n’ number of jobs with a start and end time, they should be scheduled to achieve the highest profit within the specified deadline.”

## Algorithm Steps

### Step 1
- Identify the maximum deadline value from the provided set of jobs.

### Step 2
- Once the deadline is determined, sort the jobs in descending order based on their profits.

### Step 3
- Choose the jobs with the highest profits, ensuring their durations do not exceed the maximum deadline.

### Step 4
- The chosen set of jobs represents the final output.

## Example Illustration

### Task Details

Consider the tasks with their respective deadlines and profits. The objective is to schedule the tasks to yield the maximum profit upon completion:

| S. No. | Jobs | Deadlines | Profits |
|--------|------|------------|---------|
| 1      | J1   | 2          | 20      |
| 2      | J2   | 2          | 60      |
| 3      | J3   | 1          | 40      |
| 4      | J4   | 3          | 100     |
| 5      | J5   | 4          | 80      |

### Execution Steps

#### Step 1
- Determine the maximum deadline value, denoted as `dm`, from the given deadlines.

  `dm = 4`

#### Step 2
- Sort the jobs in descending order of their profits.

| S. No. | Jobs | Deadlines | Profits |
|--------|------|------------|---------|
| 1      | J4   | 3          | 100     |
| 2      | J5   | 4          | 80      |
| 3      | J2   | 2          | 60      |
| 4      | J3   | 1          | 40      |
| 5      | J1   | 2          | 20      |

#### Step 3
- Select the job with the highest profit, `J4`, which requires 3 units of time within the maximum deadline.

  Total Profit after selecting J4: `100`

#### Step 4
- Attempt to select the job with the next highest profit, `J5`. However, its duration of 4 units exceeds the deadline by 3 units, making it ineligible for the output set.

#### Step 5
- Proceed to the next highest-profit job, `J2`, with a duration of 2 units. This also exceeds the deadline by 1 unit and is therefore not added to the output set.

#### Step 6
- The subsequent highest-profit job, `J3`, has a duration of 1 unit, which is within the specified deadline. Thus, `J3` is added to the output set.

  Total Profit after selecting J3: `100 + 40 = 140`

### Conclusion

The algorithm concludes once the maximum deadline is met. The optimal set of scheduled jobs within the deadline consists of `{J4, J3}`, achieving a maximum profit of `140`.

