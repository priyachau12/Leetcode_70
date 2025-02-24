# Write your MySQL query statement below

SELECT s.student_id,s.student_name,b.subject_name,COUNT(e.subject_name)attended_exams
FROM Students as s CROSS JOIN Subjects as b LEFT JOIN Examinations as e
ON s. student_id =e. student_id and b.subject_name=e.subject_name
GROUP BY s.student_id, s.student_name, b.subject_name
ORDER BY student_id;
