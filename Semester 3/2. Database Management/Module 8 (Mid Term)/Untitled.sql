-- SELECT MAX(salary)
-- FROM employees
-- WHERE salary <(SELECT MAX(salary) 
-- 			   FROM employees 
-- 			   WHERE salary < (SELECT MAX(salary) 
-- 							   FROM employees)
-- );

-- SELECT min(salary)
-- FROM employees
-- WHERE salary > (SELECT min(salary) 
-- 				FROM employees 
-- 				WHERE salary > (SELECT min(salary) 
-- 								FROM employees)
-- );				
-- select salary
-- from employees
-- ORDER BY salary asc;
--                     
-- SELECT first_name
-- FROM employees
-- WHERE hire_date > (SELECT hire_date FROM employees WHERE first_name = 'Steven'and employee_id=100)
-- -- ORDER BY hire_date asc;

-- select first_name,job_id
-- from employees

-- select first_name,job_id
-- from employees
-- join departments
-- on employees.department_id = departments.department_id

-- select first_name,(select max(salary) from employees),job_id
-- from employees

-- select *
-- from employees

SELECT e1.first_name AS employee_name, e2.first_name AS manager_name
FROM employees e1
LEFT JOIN employees e2 ON e1.manager_id = e2.employee_id;
											
