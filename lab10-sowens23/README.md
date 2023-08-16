## Lab

The `questions` directory contains possible exam-style questions. Your task is to rank each question as using **e** for excellent, **g** for good, or **n** for needs improvement.

The first column in each `tsv` file contains the name of the question. The second column should contain your rating. The third column should contain your reasoning.

### Formatting

* Running `cut -f 1 part_X/rate_questions.tsv` should list the contents of the first column
* Running `cut -f 2 part_X/rate_questions.tsv` should list the contents of the second column
* Running `cut -f 3 part_X/rate_questions.tsv` should list the contents of the third column
